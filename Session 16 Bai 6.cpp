#include <stdio.h>

void foundDigits(int *array,int *found,int *size){
	int a=1;
    for(int i=0;i<*size;i++){
    	if(*found==*(array+i)){
    		printf("Phan tu %d nam o vi tri %d\n",*found,i+1);
			a=0;		
		}
	}
	if(a==1)
	printf("Khong co trong mang");
};
int main(){
    int array[]={1,5,4,7,6,2,7,10};
    int size=sizeof(array)/sizeof(int);
    int found=0;
    printf("Nhap phan tu tim kiem: ");
    scanf("%d",&found);
    foundDigits(array,&found,&size);
        
    return 0;
}
