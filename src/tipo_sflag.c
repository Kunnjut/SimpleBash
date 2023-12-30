#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0, k = 1;
    myfile = fopen(argv[argc - 1], "r");
        while ((str[i] = fgetc(myfile)) != EOF) {
        if ((i != 0) && str[i] == '\n') {
            str[i] = '\0';
            printf ("     %d  %s\n",k, str);
            k++;
            i = 0;

        }
        else if ((i == 0) && str[i] == '\n'){
            str[i] = '\0';
            printf ("%s", str);
            i = 0;
        }
        else {
            i++;
        }
    }
    /*str[i] = '\0';
    printf("%s\n",str);*/
 
    fclose(myfile);
    return 0;
}