#include <stdio.h>

int main (int argc, char *argv[0]) {
    int count, i = 0;
    char str[51];
    FILE *myfile;
    if (argc > 2){
        myfile = fopen(argv[argc - 1], "r");}
    else
        myfile = fopen(argv[1], "r");
    i = 1;
    while (fgets (str, 50, myfile) != NULL){
        printf ("     %d  %s",i, str);
        i++;
    }
    fclose (myfile);
    return 0;
}