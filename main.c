#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void dobrarValor(int *num) {
    *num = *num * 2;
}
void trocarValores(int *a, int *b){
    int troca = *a;
    *a = *b;
    *b = troca;
    printf("O valor de a agora é: %d\n", *a);
    printf("O valor de b agora é: %d\n", *b);
}
void dobrarValores(int *vet, int tamanho){
    int i;
    int resultado;
    printf("Valores dobrados do vetor:\n");
    for(i = 0; i < tamanho; i++){
        resultado = vet[i] * 2; 
        printf("%d\n", resultado);
    }
}
int maiorValor(int *vet, int tamanho){
    int i;
    int maior = *vet;
    for(i = 0; i < tamanho; i++){
        if(*(vet + i) > maior){
            maior = *(vet + i);
        }
    }
    return maior;
}
void guardandoValores(int *vet, int tamanho){
    int i;
    int num;
    for(i = 0; i < tamanho; i++){
        printf("Digite um valor para armazena-lo no vetor: \n");
        scanf("%d", &num);
        *(vet + i) = num;
        printf("\nO vetor no indice %d é de: %d \n", i, vet[i]);
    }
}
void inverterVetor(int *vet, int tamanho){
    int i;
    int j;
    int armazena;
    for(i = 0, j = tamanho - 1; i < j; i++, j--){
            armazena = *(vet + i);
            *(vet + i) = *(vet + j);
            *(vet + j) = armazena;
    }
}
void somarVetores(int *vet1, int *vet2, int *vet3, int tamanho){
    int i;
    int resultado;
    for(i = 0; i < tamanho; i++){
        resultado = *(vet1 + i) + *(vet2 + i);
        *(vet3 + i) = resultado;
    }
}
int retornarPar(int *vet, int tamanho){
    int i;
    int numPares = 0;
    for(i = 0; i < tamanho; i++){
        if(*(vet + i) % 2 == 0){
            numPares++;
        }
    }
    return numPares;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    {
    // 🧩 Exercício 7: Contar quantos pares há no vetor
    // Crie uma função que percorra um vetor e retorne quantos números pares ele possui.
    // int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    // int tamanho = 10;
    // int numPares = retornarPar(vet, tamanho);
    // printf("A quantidade de números par no vetor é de: %d\n", numPares);
    }
    {
    // 🧩 Exercício 6: Soma de dois vetores
    // Crie uma função que receba dois vetores de mesmo tamanho, some seus elementos e armazene
    // o resultado em um terceiro vetor, tudo usando ponteiros.
    // int tamanho = 5;
    // int i;
    // int vet1[5] = {1,2,3,4,5};
    // int vet2[5] = {1,2,3,4,5};
    // int vet3[5];
    // somarVetores(vet1, vet2, vet3, tamanho);
    // for(i = 0; i < tamanho; i++){
    //     printf("%d\n", *(vet3 + i));
    // }
    }
    {
    // 🧩 Exercício 5: Inverter vetor
    // Crie uma função que inverta os elementos de um vetor usando ponteiros.
    // int vet[5] = {10,20,30,40,50};
    // int tamanho = 5;
    // int i;
    // inverterVetor(vet, tamanho);
    // for(i = 0; i < tamanho; i++){
    //     printf("%d\n", *(vet + i));
    }
    {
        // Crie uma função que leia valores digitados pelo usuário e os armazene em um vetor usando ponteiros.
        // int vet[5];
        // int tamanho = 5;
        // guardandoValores(vet, tamanho);
    }
    {
        // Crie uma função que receba um vetor de inteiros e seu tamanho, e retorne o maior valor usando ponteiros.
    // int vet[5] = {10,8,7,15,20};
    // int tamanho = 5;
    // int maior = maiorValor(vet, tamanho);
    // printf("O maior valor é de: %d\n", maior);
    }
    {
    // Crie uma função que receba dois ponteiros para inteiros e troque os valores entre eles.
    // int x = 5, y = 10;
    // trocarValores(&x, &y);
    // -----------------------------------------------------------------------------------------
    }
    {
    // Crie uma função que receba um ponteiro para um vetor de inteiros e o tamanho do vetor
    // e dobre o valor de cada elemento.
    // int vet[5] = {10,20,30,40,50};
    // int tamanho = 5;
    // dobrarValores(vet, tamanho);
}
    {
    // // int x = 10;
    // // int *p = &x;  // p guarda o endereço de x

    // // printf("Valor de x: %d\n", x);
    // // printf("Endereço de x: %p\n", &x);
    // // printf("Endereço guardado em p: %p\n", p);
    // // printf("Valor apontado por p: %d\n", *p); // *p acessa o conteúdo de x
    }   
    {
    // int valor = 5;
    // dobrarValor(&valor);
    // printf("Valor dobrado: %d\n", valor); // Vai imprimir 10
    }
    {
    // int vet[3] = {10, 20, 30};
    // int *p = vet;

    // // Acessa valores 
    // printf("%d\n", *p);     // 10
    // printf("%d\n", *(p+1)); // 20
    // printf("%d\n", *(p+2)); // 30

    // // Acessa a locação da memória
    // printf("%p\n", &p);
    // printf("%p\n", &p+1);
    // printf("%p\n", &p+2);
    }
    


    return 0;
}