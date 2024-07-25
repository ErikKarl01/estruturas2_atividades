#include<stdio.h>

int f(int n, int* cont){
    (*cont)++;
    if(n == 0){
    return 1;
    }
    return f(n-1, cont) + 1/f(n-1, cont);
}

int main(void){
    int cont = 0;
    float valor = f(20, &cont);
    printf("%f, %d", valor, cont);
    return 0;
}
