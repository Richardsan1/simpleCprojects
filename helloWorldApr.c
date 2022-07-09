#include <stdio.h>
#include <string.h>

void help(){
    printf("helpers:\n");
    printf("-h, --help: help\n");
    
    printf("\n");
    
    printf("app version:\n");
    printf("-v, --version: version\n");
    
    printf("\n");

    printf("languages:\n");
    printf("-pt, --portuguese: portuguese\n");
    printf("-en, --english: english\n");
    printf("-es, --spanish: spanish\n");
    printf("-fr, --french: french\n");
    printf("-de, --deutsch: german\n");
    printf("-it, --italian: italian\n");

}
int main(int argc, char *argv[]){
    if (argc == 1){
        printf("ERROR: Missing language argument.\n");
        return 1;
    }
    else if (argc == 2){
        if (strcmp(argv[1], "-pt") == 0 || strcmp(argv[1], "--portuguese") == 0){
            printf("Olá, mundo!\n");
        }
        else if (strcmp(argv[1], "-en") == 0 || strcmp(argv[1], "--english") == 0){
            printf("Hello, world!\n");
        }
        else if (strcmp(argv[1], "-es") == 0 || strcmp(argv[1], "--spanish") == 0){
            printf("Hola, mundo!\n");
        }
        else if(strcmp(argv[1], "-fr") == 0 || strcmp(argv[1], "--french") == 0){
            printf("Bonjour, le monde!\n");
        }
        else if(strcmp(argv[1], "-de") == 0 || strcmp(argv[1], "--deutsch") == 0){
            printf("Hallo, Welt!\n");
        }
        else if(strcmp(argv[1], "-it") == 0 || strcmp(argv[1], "--italian") == 0){
            printf("Ciao, mondo!\n");
        }
        else if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0){
            help();
        }
        else if(strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0){
            printf("helloWorldApr v1.0\n");
        }
        else{
            printf("ERROR: Invalid flag argument.\n");
            return 1;
        }
    }
    else if (argc == 3){
        if (strcmp(argv[1], "-pt") == 0 || strcmp(argv[1], "--portuguese") == 0){
            printf("Olá, %s!\n", argv[2]);
        }
        else if (strcmp(argv[1], "-en") == 0 || strcmp(argv[1], "--english") == 0){
            printf("Hello, %s!\n", argv[2]);
        }
        else if (strcmp(argv[1], "-es") == 0 || strcmp(argv[1], "--spanish") == 0){
            printf("Hola, %s!\n", argv[2]);
        }
        else if(strcmp(argv[1], "-fr") == 0 || strcmp(argv[1], "--french") == 0){
            printf("Bonjour, %s!\n", argv[2]);
        }
        else if(strcmp(argv[1], "-de") == 0 || strcmp(argv[1], "--deutsch") == 0){
            printf("Hallo, %s!\n", argv[2]);
        }
        else if(strcmp(argv[1], "-it") == 0 || strcmp(argv[1], "--italian") == 0){
            printf("Ciao, %s!\n", argv[2]);
        }
        else{
            printf("ERROR: Invalid flag argument.\n");
            return 1;
        }
    }
    else if (argc > 3){
        printf("ERROR: Too many arguments.\n");
        return 1;
    }

    return 0;
}