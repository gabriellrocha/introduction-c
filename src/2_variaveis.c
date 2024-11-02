#include <stdio.h> /*faz parte do pré-processador do C */

int main(void) {
    
    char c = 'A';
    short s = 7;
    int i = 25;
    long l = 0L; /*sufixo */
    long long ll = 0LL;
    float f = 0.0f;
    double d = 0.0;
    long double ld = 0.0L;

    /*valor sem sinal, ou seja, permite faixa de representação maior.É necessário o sufixo u*/
    /*o bit que antes era usado para "armazenar o sinal", agora é usado para armazenar um número*/

    unsigned int z = 4U;
    unsigned long x = 30UL;
    unsigned long long y = 300ULL;
    unsigned short t = 24U;

    /*% caractere de máscara*/
    /*lembrando que o tamanho dos tipos podem mudar dependendo a arquitetura da cpu x32, x64, linux, mac etc*/
    printf("Tamanho do tipo char: %zu\n", sizeof(c));
    printf("Tamanho do tipo short: %zu\n", sizeof(s));
    printf("Tamanho do tipo int: %zu\n", sizeof(i));
    printf("Tamanho do tipo long: %zu\n", sizeof(l));
    printf("Tamanho do tipo long long: %zu\n", sizeof(ll));
    printf("Tamanho do tipo float: %zu\n", sizeof(f));
    printf("Tamanho do tipo double: %zu\n", sizeof(d));
    printf("Tamanho do tipo long double: %zu\n", sizeof(ld));

    printf("\nTamanho do tipo unsigned int: %zu\n", sizeof(z));
    printf("Tamanho do tipo unsigned long: %zu\n", sizeof(x));
    printf("Tamanho do tipo unsigned long long: %zu\n", sizeof(y));
    printf("Tamanho do tipo unsigned short: %zu\n", sizeof(t));


    /* para imprimir uma variável é necessário passar a máscara correspondete ao tipo*/
    
    printf("\nchar: %c\n", c);
    printf("short: %d\n", s);
    printf("int: %d\n", i);
    printf("long: %ld\n", l);
    printf("long long: %lld\n", ll);
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);

    printf("\nunsigned int %u\n", z);
    printf("unsigned long %lu\n", x);
    printf("unsigned long long %llu\n", y);
    printf("unsigned short %u\n", t);
}