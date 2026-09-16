#ifndef PILHA_H
#define PILHA_H

typedef struct  pilha Pilha;

// Definição opaca da estrutura para encapsulamento

Pilha* pilha_criar (void);
void pilha_liberar (Pilha *p);
int pilha_esta_cheia (Pilha *p);
int pilha_esta_vazia (Pilha *p);

void pilha_exibir_topo_abaixo (Pilha *p);
int pilha_extrair_abaixo_topo (Pilha *p);
void pilha_amassar_topo (Pilha *p,int novo);
void pilha_amassar_pilha (Pilha *p,int novo);
void pilha_sobrecarregar_pilha (Pilha *p,int novo);
void pilha_empilhar_preservando_um (Pilha *p,int novo);

#endif