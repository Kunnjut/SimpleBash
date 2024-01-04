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
        else if (str[i] == 10){
            printf ("\n");
        }
        else if (str[i] == 9){
            printf ("\t");
        }
        else if (str[i] == 32){
            printf (" ");
        }
        else if (str[i] < 32){
            printf ("^%c",str[i] + 64);
        }
        else if (str[i] > 127 && str[i] < 160){
            printf ("^%c",str[i] - 64);
        }
        else if (str[i] == 127){
            printf ("%c", str[i] - 64);
        }
         else if (str[i] >= 65 && str[i] <= 122){
            printf ("%c", str[i]);
        }
    }
    fclose(myfile);
    return 0;
}