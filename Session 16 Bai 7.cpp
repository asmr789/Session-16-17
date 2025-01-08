#include <stdio.h>

void bubblesort(int *array,int *size){
    int temp;
    for(int i=0;i<*size-1;i++){         
        for (int j=0;j<*size-i-1;j++){ 
            if(*(array+j)>*(array+j+1)){
                temp=*(array+j);
                *(array+j)=*(array+j+1);
                *(array+j+1)=temp;
            }
        }
    }
    for(int i=0;i<*size;i++){
        printf("%d ",*(array+i));
    }
};
int main(){
    int array[]={1,5,4,7,6,2,7,10};
    int size=sizeof(array)/sizeof(int);
    bubblesort(array,&size);

    return 0;
}
