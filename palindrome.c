#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int main (int argc, char *argv[]){
    int a = 0, b = 0, c=0;
    char palindromo[strlen(argv[1])];


    while(a < strlen(argv[1])){
        if (!(argv[1][a] == ' ')){
            palindromo[b] = tolower(argv[1][a]);
            b++;
        } 
        a++;
    }

    char palindromoReverso[strlen(palindromo)];
    b--;
    while (b >= 0){
        palindromoReverso[c] = palindromo[b];
        c++;
        b--;
    }

    if (strcmp(palindromo, palindromoReverso) == 0){
        printf(CYAN "a palavra é um palindromo\n" RESET);
    }
    else{
        printf(RED "a palavra não é um palindromo\n" RESET);
    }

    return 0;
}