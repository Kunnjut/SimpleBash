#include <stdio.h>
#include <string.h>
#include "prog_1.h"

/*int check_fl (int argc, char *argv[0]);
int output_b (int argc, char *argv[0]);
int output_n (int argc, char *argv[0]);
int output_s (int argc, char *argv[0]);
int output_v (int argc, char *argv[0]);
int output_e (int argc, char *argv[0]);
int output_without (int argc, char *argv[0]);*/

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
    else if (pN == 3){
        output_s (argc, &argv[0]);
    }
    else if (pN == 4){
        output_v (argc, &argv[0]);
    }
    else if (pN == 5){
        output_e (argc, &argv[0]);
    }
    else if (pN == 6){
        output_t (argc, &argv[0]);
    }
    return 0;
}

/*int check_fl (int argc, char *argv[0]) {
    int check;
    if ((argc > 2) && (strcmp(argv[1], "-n")  == 0)){
        check = 1;
    }
    else if ((argc > 2) && (strcmp(argv[1], "-b")  == 0)){
        check = 2;
    }
    else if ((argc > 2) && (strcmp(argv[1], "-s")  == 0)){
        check = 3;
    }
    else if ((argc > 2) && (strcmp(argv[1], "-v")  == 0)){
        check = 4;
    }
    else if ((argc > 2) && (strcmp(argv[1], "-e")  == 0)){
        check = 5;
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
        while ((str[i] = fgetc(myfile))) {
        if (str[i] == EOF && i == 0){
            str[i] = '\0';
            printf ("%s", str);
            break;
        }
        else if (str[i] == EOF && i != 0){
            str[i] = '\0';
            printf ("     %d  %s",k, str);
            break;
        }
        else if ((i != 0) && str[i] == '\n') {
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

int output_s (int argc, char *argv[0]){
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

int output_v (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0;
    myfile = fopen(argv[argc - 1], "r");
    while ((str[i] = fgetc(myfile))) {
        if (str[i] == EOF){
            //printf ("aaa%c", str[i]);
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

int output_e (int argc, char *argv[0]){
    FILE *myfile;
    char str[51];
    int i = 0;
    myfile = fopen(argv[argc - 1], "r");
    while ((str[i] = fgetc(myfile))) {
        if (str[i] == EOF){
            printf ("%c", str[i]);
            break;
        }
        else if (str[i] == 10){
            printf ("$\n");
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
}*/