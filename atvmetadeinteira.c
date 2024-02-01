#include <stdio.h>
int main(){
    int idade;
    printf("Digite a sua idade:\n");
    scanf("%i", &idade);
    if (idade <= 18 || idade >= 50){
        printf("METADE");
    }
    else{
        printf("INTEIRA");
    }
return 0;
}
