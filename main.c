#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

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
int somaValoresPonteiros(int *a, int *b){
    int resultado = *a + *b;
    return resultado;
}
void trocaValoresPonteiros(int *a, int *b){
    int atual = *a;
    *a = *b;
    *b = atual;
}
int multiplicaPonteiros(int *a, int *b){
    return *a * *b;
}
int verificaPonteiro(int *pont){
    if(*pont % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}
int somaVetoresPonteiro(int *vet, int tamanho){
    int i;
    int somaPonteiro = 0;
    for(i = 0; i < tamanho; i++){
        somaPonteiro += *(vet + i);
    }
    return somaPonteiro;
}
void invertePonteiros(int *vet, int tamanho){
    int i;
    int j;
    int atual;
    for(i = 0, j = tamanho -1; i < j; i++, j--){
        atual = *(vet + i);
        *(vet + i) = *(vet + j);
        *(vet + j) = atual;
    }
}
void ponteiroDuplo(int **pont){
    **pont = 100;
}
int vogaisPonteiro(char *str){
    int i;
    int contagemVogais = 0;
    for(i = 0; *(str + i) != '\0'; i++){
        if(*(str + i) == 'a' || *(str + i) == 'A' 
        || *(str + i) == 'e' || *(str + i) == 'E' 
        || *(str + i) == 'i' || *(str + i) == 'I' 
        || *(str + i) == 'o' || *(str + i) == 'O' 
        || *(str + i) == 'u' || *(str + i) == 'U'){
            contagemVogais++;
        }
    }
    return contagemVogais;
}
void origemDestino(char *origem, char *destino){
    int i = 0;
    while(origem[i] != '\0'){
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}
void elementosMaiores(int *vet, int tamanho, int referencia){
    int i;
    int valoresMaior = 0;
    for(i = 0; i < tamanho; i++){
        if(vet[i] > referencia){
            valoresMaior++;
        }
    }
    printf("%d elementos do vetor são maior que o valor da referência %d \n", valoresMaior, referencia);
}
int maiorElementoVetor(int *vet, int tamanho){
    int i;
    int maiorValor = vet[0];
    for(i = 0; i < tamanho; i++){
        if(vet[i] > maiorValor){
            maiorValor = vet[i];
        }
    }
    return maiorValor;
}
int caractereEmString(char *str, char caracter){
    int i;
    int contagemCaracter = 0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == caracter){
            contagemCaracter++;
        }
    }
    return contagemCaracter;
}
void maiusculaParaMinuscula(char *str){
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        
    }
}
void zerarNegativos(int *vet, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        if(vet[i] < 0){
            vet[i] = 0;
        }
    }
}
int multiplicarElementosVetores(int *vet, int tamanho){
    int i;
    int multiplicado = 1;
    for(i = 0; i < tamanho; i++){
        multiplicado *= vet[i];
    }
    return multiplicado;
}
void preencherVetor(int *vet, int tamanho){
    int i;
    int atual = 1;
    for(i = 0; i < tamanho; i++){
        vet[i] = atual;
        atual++;
    }
}
void concatenarStrings(char *str1, char *str2){
    strcat(str1, str2);
}
int contarPalavras(char *str){
    int contagemEspaco = 0;
    while(*str == ' ') str++;

    if(*str == '\0') return 0;

    while(*str != '\0'){
        if(*str == ' ' && *(str + 1) != ' ' && *(str + 1) != '\0'){
            contagemEspaco++;
        }
        str++;
    }
    return contagemEspaco + 1;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    {
    // Exercício 15 – Trocar letras maiúsculas por minúsculas
    // Crie uma função que receba uma string e altere todas as letras maiúsculas 
    // para minúsculas, usando ponteiros.
    // char str[] = "GUSTAVO";
    // maiusculaParaMinuscula(str);
    // printf("%s", str);
    }
    {
    // Exercício 16 – Zerar elementos negativos de um vetor
    // Crie uma função que receba um vetor de inteiros e seu tamanho e zere todos os valores
    // negativos usando ponteiros.
    // int vet[] = {-5,-4,2,-8,5,6};
    // int tamanho = 6;
    // int i;
    // zerarNegativos(vet, tamanho);
    // for(i = 0; i < tamanho; i++){
    //     printf("%d", vet[i]);
    // }
    
    }
    {
    // Exercício 17 – Multiplicação de todos os elementos de um vetor
    // Crie uma função que receba um vetor de inteiros e seu tamanho e retorne a multiplicação 
    // de todos os elementos usando ponteiros.
    // int vet[5] = {1,2,3,4,5};
    // int tamanho = 5;
    // int resultado = multiplicarElementosVetores(vet, tamanho);
    // printf("%d", resultado);
    }
    {
    // Exercício 18 – Preencher vetor com valores de 1 a n usando ponteiros
    // Crie uma função que receba um vetor e seu tamanho e preencha com valores de 1 até o tamanho 
    // usando ponteiros.
    // int i;
    // int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    // int tamanho = 10;
    // preencherVetor(vet, tamanho);
    // for(i = 0; i < tamanho; i++){
    //     printf("%d", vet[i]);
    // }
    }
    {
    // Exercício 19 – Concatenar duas strings usando ponteiros
    // Crie uma função que receba duas strings e concatene a segunda ao final da primeira usando ponteiros.
    // char str1[50] = "gustavo";
    // char str2[] = " santos";
    // concatenarStrings(str1, str2);
    // printf("%s", str1);
    }
    {
    // Exercício 20 – Contar palavras em uma string usando ponteiros
    // Crie uma função que conte quantas palavras existem em uma string 
    // (palavras separadas por espaço) usando ponteiros.
    // char str[50] = "gustavo   é   brabo";
    // int resultado = contarPalavras(str); 
    // printf("%d", resultado);
    }
    {
        // Exercício 14 – Contagem de caracteres específicos em string
    // Crie uma função que receba uma string e um caractere, e conte quantas vezes esse 
    // caractere aparece na string usando ponteiros.
    // char str[7] = "ana";
    // char carac = 'a';
    // int resultado = caractereEmString(str, carac);
    // printf("%d", resultado);

    }
    {
    // Exercício 13 – Maior valor de um vetor usando ponteiro
    // Crie uma função que receba um vetor e seu tamanho e retorne o maior valor do vetor usando ponteiros.
    // int vet[5] = {1,2,3,4,5};
    // int tamanho = 5;
    // int resultado = maiorElementoVetor(vet, tamanho);
    // printf("%d", resultado);
    }
    {
        // Exercício 11 – Contar elementos maiores que um valor
    // Crie uma função que receba um vetor de inteiros, seu tamanho e um valor de referência. 
    // A função deve contar quantos elementos são maiores que o valor de referência, usando ponteiros.
    // int vet[5] = {1,2,3,4,5};
    // int tamanho = 5;
    // int referencia = 2;
    // elementosMaiores(vet, tamanho, referencia);
    }
    {
    // Exercício 10 – Copiar string usando ponteiros
    // Escreva uma função que receba duas strings (origem e destino) e copie o 
    // conteúdo da origem para o destino usando ponteiros.
    // char origem[] = "gustavo";
    // char destino[50];
    // origemDestino(origem, destino);
    // printf("%s", destino);

    }
    {
    // Exercício 9 – Contagem de vogais em uma string usando ponteiro
    // Escreva uma função que conte o número de vogais em uma string usando ponteiros.
    // char str[] = "gustavo";
    // int resultado = vogaisPonteiro(str);
    // printf("%d", resultado);
    }
    {
    // Crie uma função que receba um ponteiro duplo e altere o valor apontado para 100.
    // int valor = 10;
    // int *pont = &valor;
    // int **pon = &pont;

    // ponteiroDuplo(pon);

    // printf("%d", valor);
    }
    {
    // Exercício 7 – Inversão de vetor usando ponteiros
    // Crie uma função que receba um vetor e seu tamanho, e inverta os elementos usando ponteiros.
    // int vet[5] = {1,2,3,4,5};
    // int tamanho = 5;
    // int i;

    // for(i = 0; i < tamanho; i++){
    //     printf("%d \n", *(vet + i));
    // }

    // invertePonteiros(vet, tamanho);
    
    // for(i = 0; i < tamanho; i++){
    //     printf("%d", *(vet + i));
    // }
    }
    {
    // Exercício 6 – Soma de elementos de um vetor usando ponteiros
    // Crie uma função que receba um vetor de inteiros e seu tamanho, e retorne a soma 
    // dos elementos usando ponteiros.
    // int vet[5] = {1,2,3,4,5};
    // int tamanho = 5;
    // int resultado = somaVetoresPonteiro(vet, tamanho);
    // printf("%d", resultado);

    }
    {
    // Exercício 5 – Verificação de número par usando ponteiro
    // Escreva uma função que receba um ponteiro para inteiro e retorne 1 se o valor for par, 
    // ou 0 se for ímpar.
    // int pont = 25;
    // int resultado = verificaPonteiro(&pont);
    // printf("%d", resultado);
    }
    {
    // Exercício 4 – Multiplicação de dois números usando ponteiros
    // Crie uma função que receba dois ponteiros para inteiros e retorne o produto dos valores apontados.
    // int a = 10;
    // int b = 2;
    // int resultado = multiplicaPonteiros(&a, &b);
    // printf("%d", resultado);
    
    }
    {
        // Escreva uma função troca que troque o valor de duas variáveis usando ponteiros.
        // int a = 20;
        // int b = 10;
        // trocaValoresPonteiros(&a, &b);
        // printf("%d %d", a, b);

    }
    {
        // Crie duas variáveis a e b, e um ponteiro pra cada uma. Depois crie uma função que 
        // receba dois ponteiros e retorne a soma dos valores apontados.

        // int a = 10;
        // int b = 20;
        // int *ponA = &a;
        // int *ponB = &b;
        // int resultado = somaValoresPonteiros(ponA, ponB);
        // printf("%d", resultado);
    }
    {
    // Crie uma variável inteira com valor 10, crie um ponteiro que aponte pra essa variável, e:
    // Imprima o valor da variável pelo ponteiro.
    // Altere o valor da variável pelo ponteiro para 20 e imprima novamente.
    // int var = 10;
    // int *pon = &var;
    // *pon = 20;

    // printf("%d", var);

    }
    {
    // Desafio 12 – Preenchendo um vetor
    // Crie uma função preencher que preencha um vetor com valores consecutivos (1, 2, 3...).
    // int i;
    // int vet[5];
    // int tamanho = 5;

    // preencheVetorConsecutivo(vet, tamanho);

    // for(i = 0; i < tamanho; i++){
    //     printf("%d \n", vet[i]);
    // }
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