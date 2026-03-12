#include<stdio.h>
//EX2 TP4
int max(int a , int b ){
    if (a>b){
        return a;
    }
    else {
        return b;
    }
}

int main(){

    int a, b;
    printf("Entrer a,b: ");
    scanf("%d", &a);
    printf("Entere b: ");
    scanf("%d", &b);

    printf("Max is : %d", max(a, b));
    return 0;
}
