#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0, k = 1;
    myfile = fopen(argv[argc - 1], "r");
        while ((str[i] = fgetc(myfile)) != EOF) {
        if ((i == 0) && str[i] == '\n') {
            str[i] = fgetc(myfile);
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