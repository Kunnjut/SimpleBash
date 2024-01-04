#include "prog_1.h"

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
    else if (pN == 7){
        output_be (argc, &argv[0]);
    }
    else if (pN == 8){
        output_bt (argc, &argv[0]);
    }
    return 0;
}