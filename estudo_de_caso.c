/*Alocação dinamica.Ponteiros,Passagem por Referencia,
 operaçoes em pilha e estouro de memoria por recursao
 1: estrutura da Pilha e Alocação:*/

 typedef struct pilha {
    int *dados;
    int topo;
    int capacidade;
} t_Pilha;  /*um ponteiro para inteiro,Em vez de usar um array fixo, como (int dados[10]), a pilha usa alocasão dinâmica 
            malloc para definir o tamanho do array em tempo de execuçaõ.
            int topo: guarda a posição onde o elemento sera inserido (e representa o numero total de elementos na pilha). 
            int capacidade: quantidade maxima de elementos que o vetor dinamico pode armazenar. */




            // construção da pilha 

         
void constroi_pilha(int capacidade, t_Pilha *p) {

   p-> dados = (int *)malloc(sizeof(int)*capacidade); 
   p-> topo = 0;
   p-> capacidade = capacidade; 

}   /* o que faz: reserva a memoria dinamica para o array dados do tamanho da capacidade *sizeof(int) bytes.*/


    // verificaçao do estado