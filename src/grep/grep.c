#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include "grep.h"


/*void pattern_add (arguments* arg, char* pattern){

}*/

void add_reg_from_file (arguments* arg, char* filepath) {
    FILE* f = fopen(filepath, "r");
    if (f == NULL){
        if (!arg->s) perror (filepath);
        exit(1);
    }
    char* line = NULL;
    size_t memlen = 0;
    int read = getline(&line, &memlen, f);
    while (read != -1) {
        read = getline(&line, &memlen, f);
    }
    free (line);
    fclose(f);
}

arguments arguments_parser (int argc, char* argv[]){
    arguments arg = {0};
    int opt;
    while ((opt = getopt(argc, argv, "e:ivclnhsf:o")) != -1) {
        switch (opt) {
            case 'e':
                arg.e = 1;
                arg.pattern = optarg;
                break;
            case 'i':
                arg.i = REG_ICASE;
                break;
            case 'v':
                arg.v = 1;
                break;
            case 'c':
                arg.c = 1;
                break;
            case 'l':
                arg.c = 1;
                arg.l = 1;
                break;
            case 'n':
                arg.n = 1;
                break;
            case 'h':
                arg.h = 1;
                break;
            case 's':
                arg.s = 1;
                break;
            case 'f':
                arg.f = 1;
                //???
                break;
            case 'o':
                arg.o = 1;
                break;
        }
    }
    if (arg.pattern == NULL){
        arg.pattern = argv[optind];
        optind++;
    }
    return arg;
}

void output_line (char* line, int n) {
    for (int i = 0; i < n ; i++){
        putchar (line[i]);
    }
    //?
}

void processFile (arguments arg, char* path, regex_t* reg) {
    FILE* f = fopen (path, "r");
    if (f == NULL) {
        if (!arg.s) perror (path);
        exit(1);
    }
    char* line = NULL;
    size_t memlen = 0;
    int read = 0;
    int line_count = 1;
    read = getline (&line, &memlen, f);
    //??
    while (read != -1) {
        int result = regexec (reg, line, 0, NULL, 0);
        if ((result == 0 && !arg.v) || (arg.v && result != 0)) {
            if (arg.n) printf ("%d:", line_count);                // Выводит номер строки в которой нашел совпадения (-n)
            output_line(line, read);
        }
        read = getline (&line, &memlen, f);
        line_count++;
    }
    free (line);
    //?
    fclose(f);
}

//void processLine () {

void output (arguments arg, int argc, char** argv) {
    regex_t re;
    int error = regcomp(&re, arg.pattern, arg.i);
    if (error) perror("Error");
    for (int i = optind; i < argc; i++){
        processFile (arg, argv[i], &re);
    }
}
// -i
int main (int argc, char** argv) {
    arguments arg = arguments_parser(argc, argv);
    output (arg, argc, argv);
    return 0;
}