#include <stdio.h>
#include <stdlib.h>
#include "pilha_estudo.h"

#define max 10

struct pilha
{
    int dados[max];
    int topo;
};

Pilha* pto_cria(void) {
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    if (p != NULL)
    {
        p->topo = -1;
    }
    return p;

}

void pilha_liberar(Pilha *p) {
    free(p);
}
int pilha_esta_vazia(Pilha *p) {
    return p->topo == max -1;
}
int pilha_esta_vazia(Pilha *p) {
    return p->topo == -1;
}


//terefa 1

void pilha_exbir_topo_abaixo(Pilha *p){
    if (p == NULL || pilha_esta_vazia(p)) {
        printf("Pilha vazia ou nao alocada!\n");
        return;
    }
    printf("Pilha (topo -> Base): ");
    for (int i = p->topo; i>= 0; i--){
        printf("[%d]", p->dados[i]);
    }
    printf("\n");
}
//tarefa 2


int pto_extrair_abaixo_topo(Pilha *p) {
    if (p ==    NULL || p -> topo < 1 ) {
        printf ("Nao ha elemento sufuciente abaixo do topo para extrair");
        return -1;
    }
    int elemento_abaixo = p->dados[p->topo -1];
    p->dados[p->topo -1] = p->dados [p->topo];
    p->topo --;

    return elemento_abaixo;

}

//tarefa 3


void pto_amassar_topo(Pilha *p, int novo) {
    if (p == NULL ) return;
    if (pilha_esta_vazia(p)) {
        p-> topo ++;
        p->dados[p->topo] = novo;
        return;
    }
    if (novo > p->dados [p->topo] ) {
        p->dados[p->topo] = novo;
    }else if (!pilha_esta_cheia(p)) {
        p->topo++;
        p->dados[p->topo] = novo;
    }

}



//tarefa 4



void pto_amassar_pilha(Pilha *p, int novo) {
    if (p == NULL) return;

    while (!pilha_esta_vazia(p) && novo > p->dados [p-> topo])
    {
        p->topo --;
    }
    if (!pilha_esta_cheia(p))
    {
        p->topo++;
        p->dados[p->topo] = novo;
    }
    
}


//tarefa 5

void pto_sobrecarrega_pilha(Pilha *p, int novo) {
    if (p == NULL) return;

    if (p->topo < max - 2) {
        p->topo++; p->dados[p->topo] = novo;
        p->topo++; p->dados[p->topo] = novo;
    } 
    else if (p->topo == max - 2 || p->topo == max - 1) {
        p->topo--; // Elimina 1 do topo para abrir vaga
        p->topo++; p->dados[p->topo] = novo;
        printf("Pilha sem espaco duplo! Eliminado topo antigo e inserido %d uma vez.\n", novo);
    }
}

//tarefa 6


int pto_empilhar_preservando_um(Pilha *p, int novo) {
    if (p == NULL || p->topo >= max - 2) {
        printf("Erro: Empilhamento negado para preservar o ultimo espaco de seguranca!\n");
        return 0; 
    }
    
    p->topo++;
    p->dados[p->topo] = novo;
    return 1; 
}
