#include <stdio.h>

int main() {
    int senha = 0;

    while (senha != 1234) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    
        if(senha == 1234) {
           printf("acesso liberado\n"); 
        } 
       
    }
    
    return 0;
    
    }