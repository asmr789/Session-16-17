#include <stdio.h>

int swap(int *a,int *b,int *sum){
    *sum=*a+*b;
    return *sum;
}

int main(){
    int a=10,b=100;
    int sum=0;
    swap(&a,&b,sum);
    printf("%d \n",sum);
    
    return 0;
}