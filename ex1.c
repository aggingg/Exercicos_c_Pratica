#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero_identidade;
    
    char nome[50];
    printf("Digite seu nome: ");
    // scanf("%s", nome)
    fgets(nome, 50, stdin);
    printf("Informe um numero: ");
    scanf("%d", &numero_identidade );
    if(numero_identidade <= 15 ){
        printf("SESI\n Nome: %s\nIdade: %d", nome, numero_identidade);
    }
    else{
        printf("SENAI\n Nome: %s\nIdade: %d", nome, numero_identidade);
    }
    system("pause");
    return 0;
}