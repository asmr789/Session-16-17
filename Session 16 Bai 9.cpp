#include <stdio.h>

void update(int *array,int *newvalue,int *n){
    *(array+*n)=*newvalue;
};
int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(int);
    int newvalue,n;
    printf("\n");
    printf("Nhap gia tri moi: ");
    scanf("%d",&newvalue);
    printf("Nhap vi tri can them:");
    scanf("%d",&n);
        update(array,&newvalue,&n);
        printf("Mang cap nhat: ");
        for (int i=0;i<size;i++) {
            printf("\t%d ",array[i]);
        }
        
    return 0;
}
