//Bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int id;

    id = fork();
    if(id == 0){
        printf("Sou FILHO %d\nAbrindo o aplicativo: %s\n", getpid(), argv[1]);
        system(argv[1]);
        system("pid firefox");
    }

    return 0;
}