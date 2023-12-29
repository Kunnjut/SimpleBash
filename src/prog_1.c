#include <stdio.h>
#include <string.h>

int check_n (int argc, char *argv[0]);

int main (int argc, char *argv[0]) {
    int count, i = 0, pN;
    char str[51];
    FILE *myfile;
    pN = check_n (argc, &argv[0]);
    if (argc > 2 && pN == 1){
        myfile = fopen(argv[argc - 1], "r");
        i = 1;
        while (fgets (str, 50, myfile) != NULL){
            printf ("     %d  %s",i, str);
            i++;
    }
    }
    else {
        myfile = fopen(argv[argc - 1], "r");
        while (fgets (str, 50, myfile) != NULL){
            printf ("%s", str);
            i++;
        }
    }
    fclose (myfile);
    return 0;
}

int check_n (int argc, char *argv[0]) {
    int check;
    if (argc > 2){
        if (strcmp(argv[1], "-n")  == 0)
        check = 1;
    }
    else
        check = 0;
    return check;
}