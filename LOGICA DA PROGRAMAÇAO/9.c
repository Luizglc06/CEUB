#include <stdio.h>

int main() {

    int codigo1, codigo2, n_unidades1, n_unidades2;
    float preco1, preco2, valor_a_pagar;

    scanf("%d %d %f", &codigo1, &n_unidades1, &preco1);
    scanf("%d %d %f", &codigo2, & n_unidades2, &preco2);

    valor_a_pagar = (n_unidades1 * preco1) + (n_unidades2 * preco2);
    
    printf("\nVALOR DA PAGAR: R$ %.2f\n ", valor_a_pagar );
    
    return 0; 
}
