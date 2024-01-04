#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0;
    myfile = fopen(argv[argc - 1], "r");
    while ((str[i] = fgetc(myfile))) {
        if (str[i] == EOF){
            break;
        }
        else if (str[i] == 9){
            printf ("^I");
        }
        else{
            printf ("%c",str[i]);
        }
    }
    fclose(myfile);
    return 0;
}