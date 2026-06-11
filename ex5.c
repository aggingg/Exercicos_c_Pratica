#include <stdio.h>
#include <stdlib.h>
int main(){
    
    float nota1, nota2, nota3, nota4, nota5, respostaMedia;

    printf("Digite o primeiro nota: ");
    scanf("%f", &nota1);
    printf("Digite o segundo nota: ");
    scanf("%f", &nota2);
    printf("Digite o terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o quarta nota: ");
    scanf("%f", &nota4);
    printf("Digite a quinta nota: ");
    scanf("%f", &nota5);

    respostaMedia = nota1 + nota2 + nota3 + nota4 +nota5 / 5;
    printf("%.2f", respostaMedia);
    
    system("pause");

    return 0;

}   
