#include<stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;      
    printf("Gia tri cua x:%d\n",x);
    printf("Dia chi cua x:%d\n",&x);
    printf("Gia tri cua x:%d\n",*ptr);
    printf("Dia chi cua x:%d\n",&ptr);

    return 0;
}
