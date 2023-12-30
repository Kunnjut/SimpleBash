#include <stdio.h>
#include <string.h>

int check_fl (int argc, char *argv[0]);
int output_b (int argc, char *argv[0]);
int output_n (int argc, char *argv[0]);
int output_without (int argc, char *argv[0]);

int main (int argc, char *argv[0]) {
    int i = 0, pN;
    pN = check_fl (argc, &argv[0]);
    if (pN == 1){
       output_n (argc, &argv[0]);
    }
    else if (pN == 0) {
      output_without (argc, &argv[0]);
    }
    else if (pN == 2){
        output_b (argc, &argv[0]);
    }
    return 0;
}

int check_fl (int argc, char *argv[0]) {
    int check;
    if ((argc > 2) && (strcmp(argv[1], "-n")  == 0)){
        check = 1;
    }
    else if ((argc > 2) && (strcmp(argv[1], "-b")  == 0)){
        check = 2;
    }
    else{
        check = 0;
    }
    return check;
}

int output_n (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0;
    myfile = fopen(argv[argc - 1], "r");
        i = 1;
        while (fgets (str, 50, myfile) != NULL){
            printf ("     %d  %s",i, str);
            i++;
    }
    fclose (myfile);
    return 0;
}

int output_b (int argc, char *argv[0]){
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
            printf ("%s\n", str);
            i = 0;
        }
        else {
            i++;
        }
    }
    fclose(myfile);
    return 0;
}


int output_without (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0;
    myfile = fopen(argv[argc - 1], "r");
        while (fgets (str, 50, myfile) != NULL){
            printf ("%s", str);
            i++;
        }
        fclose (myfile);
        return 0;
}