#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>   

int main (int argc, char *argv[]){
    char load[41];
    
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    if (atoi(argv[1]) <= 10 && atoi(argv[1]) >= 0){
    int cont = 0;
        while (cont < atoi(argv[1]) ) {
            strcat(load, "🔵");
            cont++;
        }
        while(cont < 10){
            strcat(load, "⚪");
            cont++;
        }
        printf("%s\n", load);
    } else{
        printf("Content overflow\n");
    }
    
    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken = (end.tv_sec - start.tv_sec) * 1000000000 + (end.tv_nsec - start.tv_nsec);
    printf("Tempo de execução: %.0f nanosegundos\n", time_taken);
    printf("Tempo de execução: %.2f milisegundos\n", time_taken/1000000);

    return 0;
}