# include <stdio.h>

int main(){
    double nota1, nota2, nota3;
    double media; 


    printf("Digite a 1ª nota: \n");
    scanf("%lf", &nota1);

    printf("Digite a 2ª nota: \n");
    scanf("%lf", &nota2);

    printf("Digite a 3ª nota: \n");
    scanf("%lf", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3.0;

    printf("O resultado na média é: %0.2f \n", media);

    return 0;

}
