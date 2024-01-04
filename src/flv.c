#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0, k = 1;
    myfile = fopen(argv[argc - 1], "r");
    while ((str[i] = fgetc(myfile))) {
        if (str[i] == EOF){
            printf ("%c", str[i]);
            break;
        }
        else if (str[i] == '\n'){
            printf ("\n");
        }
        else if (str[i] < 32  || str[i] == 127){
            printf ("^%c",str[i] ^ 0b01000000);
        }
        else if (str[i] >= 128){
            printf ("^%c",str[i] ^ 0b11000000);
        }
        else if (str[i] >= 65 && str[i] <= 122){
            printf ("%c", str[i]);
        }
    }
    fclose(myfile);
    return 0;
}