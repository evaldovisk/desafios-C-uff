#include <stdio.h>

int main() {
    // Converte segundos em horas, minutos e segundos
    // void -> int
    int qtdSegundos, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &qtdSegundos);
    
    h = qtdSegundos / 3600;
    resto = qtdSegundos % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d segundos equivalem a: %d hora(s) %d minuto(s) e %d segundo(s) \n ", qtdSegundos, h, m, s);

    return 0;
}
