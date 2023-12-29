#include <stdio.h>

int main (char *argv) {
    FILE *myfile;
    char filename[80], str[80];
    scanf ("%s", &filename);
    myfile = fopen(filename, "r");
        while (fgets (str, 50, myfile) != NULL)
            printf ("%s", str);
    fclose (myfile);
    return 0;
}