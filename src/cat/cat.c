#include "prog_1.h"
#include <stdio.h>

int main (int argc, char *argv[0]) {
    FILE *check_null;
    check_null = fopen(argv[argc - 1], "r");
    if ( check_null == NULL){
        printf ("No such file or directory\n");
    }
    else {
        fclose(check_null);
        check_fl (argc, &argv[0]);
    }
    return 0;
}