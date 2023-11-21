#include <stdio.h>
#include <stdlib.h>
int main(){
    float peso, altura, imc;
    printf("Ingrese su peso(KG): ");
    scanf("%f",&peso);
     
     printf("Ingrese su altura(m): ");
     scanf("%f",&altura);

     imc = peso / (altura * altura);
     
     if (imc < 18.5) {
        printf("\nEl peso esta por debajo de lo normal");
    }else if ((imc >= 18.5) && (imc < 25)) {
        printf("\nTiene un peso saludable");
    }else if ((imc >= 25) && (imc < 30)) {
        printf("\nTiene sobrepeso");
    }else if (imc >= 30) {
        printf("\nTiene obesidad");
    }
    printf("\nSu IMC es: %.2f",imc);
    
    return 0;
}