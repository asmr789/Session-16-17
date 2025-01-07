#include <stdio.h>

void printArray(int*arr,int *size){
    for (int i=0;i<*size;i++){
        printf("Phan tu %d: %d\n",i,*(arr+i));
    }
}

int main(){
    int Array[]={1,2,3,4,5};
    int size=sizeof(Array)/sizeof(int);
    printf("Cac phan tu trong mang\n");
    printArray(Array,&size);

    return 0;
}
