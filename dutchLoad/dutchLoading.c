#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char *dutchLoad(float percentage){
    if (percentage == 0){
        return "⚪⚪⚪⚪⚪⚪⚪⚪⚪⚪";
    }
    if (percentage > 0.0 && percentage <= 0.1){
        return "🔵⚪⚪⚪⚪⚪⚪⚪⚪⚪";
    }
    if (percentage > 0.1 && percentage <= 0.2){
        return "🔵🔵⚪⚪⚪⚪⚪⚪⚪⚪";
    }
    if (percentage > 0.2 && percentage <= 0.3){
        return "🔵🔵🔵⚪⚪⚪⚪⚪⚪⚪";
    }
    if (percentage > 0.3 && percentage <= 0.4){
        return "🔵🔵🔵🔵⚪⚪⚪⚪⚪⚪";
    }
    if (percentage > 0.4 && percentage <= 0.5){
        return "🔵🔵🔵🔵🔵⚪⚪⚪⚪⚪";
    }
    if (percentage > 0.5 && percentage <= 0.6){
        return "🔵🔵🔵🔵🔵🔵⚪⚪⚪⚪";
    }
    if (percentage > 0.6 && percentage <= 0.7){
        return "🔵🔵🔵🔵🔵🔵🔵⚪⚪⚪";
    }
    if (percentage > 0.7 && percentage <= 0.8){
        return "🔵🔵🔵🔵🔵🔵🔵🔵⚪⚪";
    }
    if (percentage > 0.8 && percentage <= 0.9){
        return "🔵🔵🔵🔵🔵🔵🔵🔵🔵⚪";
    }

    return "🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵";
}


int main (int argc, char *argv[]){
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    char *val = dutchLoad(atof(argv[1]));
    printf("%s\n", val);

    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken = (end.tv_sec - start.tv_sec) * 1000000000 + (end.tv_nsec - start.tv_nsec);
    printf("Tempo de execução: %.0f nanosegundos\n", time_taken);
    printf("Tempo de execução: %.2f milisegundos\n", time_taken/1000000);

    return 0;
}