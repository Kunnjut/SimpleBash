#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0, k = 1;
    myfile = fopen(argv[argc - 1], "r");
    while ((str[i] = fgetc(myfile))) {
        if (str[i] == EOF){
            str[i] = '\0';
            printf ("%s",str);
            break;
        }
        else if ((i == 0) && str[i] == '\n'){
            k = 0;
            i = 0;
        }
        else if (i == 0 && str[i] != '\n' && k == 0){
            printf ("\n");
            k = 1;
            i++;
        }
        else if (i == 0 && str[i] != '\n' && k == 1){
            i++;
        }
        else if (i != 0 && str[i] != '\n'){
            i++;
        }
        else if (i != 0 && str[i] == '\n'){
            str[i] = '\0';
            printf ("%s\n",str);
            i = 0;
        }
    }
        if (k == 0){
            printf ("\n");
        }

    fclose(myfile);
    return 0;
}