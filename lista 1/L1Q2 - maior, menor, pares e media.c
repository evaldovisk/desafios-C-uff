#include <stdio.h>

int maiorValor(int a,int b, int c){
    // Verifica o menor valor entre os numeros
    // int, int, int -> int
    
    if (a > b && a > b){
        return a;
    }else if (b > c){
        return b;
    }else{
        return c;
    }
}

int menorValor(int a,int b, int c){
    // Verifica o menor valor entre os numeros
    // int, int, int -> int
    
    if (a < b && a < b){
        return a;
    }else if (b < c && b < a){
        return b;
    }else{
        return c;
    }
}

float media(int a, int b, int c){
    // Calcula a media entre os valores
    // int, int, int -> float
    
    return ((float) a + (float) b + (float) c) /3;
}

void numerosPares(int a, int b, int c){
    // Imprime os numeros pares 
    // int, int, int -> void
    
    if (a % 2 == 0){
        printf("%d é par\n", a);
    };
    if (b != a && b % 2 == 0){
        printf("%d é par\n", b);
    };
    if (c!= a && c!=b && c % 2 == 0){
        printf("%d é par\n", c);
    };
}
    



int main()
{
    /* um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o
    menor deles, os valores pares e a média. */
    // void -> int
    
    int n1,n2,n3;
    
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    printf("O maior valor é: %d\n",maiorValor(n1,n2,n3));
    printf("O menor valor é: %d\n",menorValor(n1,n2,n3));
    printf("A média dos valores %d, %d, %d é %.2f\n", n1, n2, n3, media(n1,n2,n3));
    numerosPares(n1,n2,n3);
    return 0;
}