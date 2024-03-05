#include <stdio.h>

char nickname[30];

int main(){
    printf("Masukan nickname kamu: \n");
    scanf("%s", nickname);
    printf("Semangat terus %s yuk lanjutin belajar alpronya!", nickname);
    return 0;
}