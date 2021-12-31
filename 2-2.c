//Bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    for(i = argc; i > 0; i--){
        system(argv[i]);
    }
    return 0;
}