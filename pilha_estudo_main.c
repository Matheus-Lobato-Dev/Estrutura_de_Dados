#include <stdio.h>
#include "pilha_estudo.h"

int main(void) {
    Pilha *minha_pilha = pilha_cria();

    printf("--- Testando Tarefa 6 (Preservar 1 posicao) ---\n");
    for(int i = 1; i <= 10; i++) {
        pto_empilhar_preservando_um(minha_pilha, i * 10);
    }
    pilha_exibir_topo_abaixo(minha_pilha);

    printf("\n--- Testando Tarefa 2 (Extrair abaixo do topo) ---\n");
    int extraido = pto_extrair_abaixo_topo(minha_pilha);
    printf("Elemento extraido: %d\n", extraido);
    pilha_exibir_topo_abaixo(minha_pilha);

    printf("\n--- Testando Tarefa 3 (Amassar o topo) ---\n");
    pto_amassar_topo(minha_pilha, 95);
    pilha_exibir_topo_abaixo(minha_pilha);

    printf("\n--- Limpando a memoria alocada ---\n");
    pilha_liberar(minha_pilha);

    return 0;
}
