#include <stdio.h>

int soma(int num1, int num2){
    
    return num1 + num2;
}

int ler_inteiro() {
    int numero = 0;
    scanf("%d", &numero); /*necessário informar a máscara correspondete ao tipo que deseja ler */
    return numero;
}

int main(void) {

    int n1 = 20;
    int n2 = 10;
    puts("Tambem imprimi uma cadeia de caracteres, porém, não usa interpolação e inclui o \\n por padrão");
    printf("Soma de %d + %d = %d\n", n1, n2, soma(n1, n2));

    puts("Leitura via teclado...");

    int numero1 = ler_inteiro();
    int numero2 = ler_inteiro();

    printf("A soma de %d + %d = %d\n", numero1, numero2, soma(numero1, numero2));
}