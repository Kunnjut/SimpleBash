#include <stdlib.h>
#include <string.h>
#include <grep.h>
#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include "grep.h"


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
                //???
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
        perror (path);
        exit(1);
    }
    char* line = NULL;
    size_t memlen = 0;
    int read = 0;
    read = getline (&line, &memlen, f);
    //??
    while (read != -1) {
        //??
        read = getline (&line, &memlen, f);
        //??
    }
    free (line);
    //?
    fclose(f);
}