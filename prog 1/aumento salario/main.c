#include <stdio.h>
#include <math.h>

int main() {

    float salario, aumento, salarioAumento;

        printf("Digite seu salario: ");
        scanf("%f%f", &salario, &aumento);

    if (salario >= 1000) {

        printf("15 porcento \n");

    salarioAumento = (salario * 1.15);

    }

    else if(salario <= 1000 && salario >=2000) {

        printf("10 porcento \n");

    salarioAumento = (salario * 1.10);    

    }

    else {

        printf("5 porcento");

    salarioAumento = (salario * 1.05);

    }

    

    return 0;
}