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
int trocaValores(int *a, int *b){
    int i;
    int j;
    int atual;

    atual = *a;
    *a = *b;
    *b = atual;
    printf("Agora a variável a = %d", *a);
    printf("Agora a variável b é = %d", *b);
}
void multiplicarVetores(int *vet1, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        *(vet1 + i) *= 2;
    }
    for(i = 0; i < tamanho; i++){
        printf("%d \n", *(vet1 + i));
    }
}
int somaInteiros(int *a, int *b){
    int resultado;
    resultado = *a + *b;
    return resultado;
}
int retornaMaiorEndereco(int *a, int *b){
    if(*a > *b){
        return a;
    } else {
        return b;
    }
}
void preencheVetorConsecutivo(int *vet, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        *(vet + i) = i + 1;
    }
}
int main(){

    SetConsoleOutputCP(CP_UTF8);
    // Desafio 12 – Preenchendo um vetor
    // Crie uma função preencher que preencha um vetor com valores consecutivos (1, 2, 3...).
    int i;
    int vet[5];
    int tamanho = 5;

    preencheVetorConsecutivo(vet, tamanho);

    for(i = 0; i < tamanho; i++){
        printf("%d \n", vet[i]);
    }

    {
        // 🔍 Desafio 11 – Encontrar o maior número
        // Escreva uma função que receba dois ponteiros e retorne o endereço do maior valor.
    // int a = 25;
    // int b = 45;
    // int *resultado = retornaMaiorEndereco(&a, &b);
    // printf("O maior endereço do maior valor é: %d \n", *resultado);
    }
    {
    // 🧮 Desafio 10 – Soma de dois números usando ponteiros
    // Crie uma função que receba dois ponteiros para inteiros e retorne a soma deles.
    // int a = 10;
    // int b = 20;
    // int resultado = somaInteiros(&a, &b);
    // printf("A soma de %d + %d é de: %d \n",a, b, resultado);
    }
    {
    // 📦 Desafio 9 – Função que altera um vetor
    // Crie uma função que receba um vetor de inteiros e seu tamanho, e multiplique cada elemento por 2.
    // int vet[5] = {1,2,3,4,5};
    // int tamanho = 5;
    // multiplicarVetores(vet, tamanho);
    }
    {   
    // Crie uma função void trocar(int *a, int *b) que troque os valores de duas variáveis usando ponteiros.
    // int a = 20;
    // int b = 10;
    // trocaValores(&a, &b);
    }
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