#include <stdio.h>

// Protótipos das funções
void lerValores(int *a, int *b, int *c);
int calcularSomaDobro(int a, int b, int c);

int main() {
    // a, b, c (inteiros)
    int a, b, c;
    
    lerValores(&a, &b, &c);
    
    printf("Variável a: Valor = %d, Endereço = %p\n", a, (void*)&a);
    printf("Variável b: Valor = %d, Endereço = %p\n", b, (void*)&b);
    printf("Variável c: Valor = %d, Endereço = %p\n", c, (void*)&c);

    int soma = calcularSomaDobro(a, b, c);
    printf("%d (%d) + %d (%d) + %d (%d) = %d\n", a, 2*a, b, 2*b, c, 2*c, soma);
    return 0;
}


void lerValores(int *a, int *b, int *c) {
    printf("Digite o valor para a: ");
    scanf("%d", a);
    printf("Digite o valor para b: ");
    scanf("%d", b);
    printf("Digite o valor para c: ");
    scanf("%d", c);
}


int calcularSomaDobro(int a, int b, int c) {
    return 2*a + 2*b + 2*c;
    // 20 (40) + 20 (40) + 20 (40) = 120
}

// Digite o valor para a: 300
// Digite o valor para b: 430
// Digite o valor para c: 3202
// Variável a: Valor = 300, Endereço = 0x7ffd58f9f0f8
// Variável b: Valor = 430, Endereço = 0x7ffd58f9f0f4
// Variável c: Valor = 3202, Endereço = 0x7ffd58f9f0f0
// 300 (600) + 430 (860) + 3202 (6404) = 7864
