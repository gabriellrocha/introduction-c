#include <stdio.h>
#include <stdbool.h> // permite usar true e false como constante



int soma(int n1, int n2) {
    return n1 + n2;
}


int ler_inteiro(char mensagem[]){
    /*  Em C o numero 0 representa false, qualquer outro numero representa true. Útil para entender a linha 19
     */

    int numero = 0;
    do
    {
        puts(mensagem);
        if (scanf("%d", &numero)){ // scanf retorna a qtd de caracteres consumidos da entrada padrão independente do tipo
            return numero;
        }
        puts("Erro. Redigite");
        int lido = 0;
        do
        {
            lido = getchar();
        } while (lido != '\n' && lido != EOF); 
        
    } while(true);

}


int main(void) {

    int numero1 = ler_inteiro("Digite o primeiro numero: ");
    int numero2 = ler_inteiro("Digite o segundo numero: ");

    printf("Resultado da soma %d + %d = %d\n", numero1, numero2, soma(numero1, numero2));

}