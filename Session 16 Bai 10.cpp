#include <stdio.h>

void deletevalue(int *array,int *del,int *size){
    for(int i=*del;i<*size;i++){
    	*(array+i)=*(array+i+1);
	}
	(*size)--;
	printf("Mang da xoa: ");
	for(int i=0;i<*size;i++){
        printf("\t%d ",*(array+i));
    }
};
int main(){
    int array[]={1,2,3,4,5,6,7,89,9,10,8};
    int size=sizeof(array)/sizeof(int);
    int del;
    printf("Nhap vi tri xoa: ");
    scanf("%d",&del);
    deletevalue(array,&del,&size);
        
    return 0;
}