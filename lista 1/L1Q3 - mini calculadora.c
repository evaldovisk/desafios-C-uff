#include <stdio.h>

void
calcula (char option, float a, float b){
    // Calcula soma, subtração, divisão e multiplicação
    // str, float, float -> void
    
  switch (option){
    case '+':
      printf("%.2f + %.2f = %.2f", a, b, a + b);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f", a, b, a - b);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f", a, b, a * b);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f", a, b, a / b);
      break;
    default:
        printf("Operação não existe !!");
  }
}



int main ()
{
    // Realiza uma mini calculadora com soma, subtração, divisão e multiplicação
    // void -> int
    
    char operation;
    float fisrtNumber, secondNumber;
    
    scanf("%c", &operation);
    scanf("%f", &fisrtNumber);
    scanf("%f", &secondNumber);
    
    calcula(operation, fisrtNumber, secondNumber);

  return 0;
}