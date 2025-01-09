#include<stdio.h>
#include<string.h>

struct Sinhvien{
    char name[50];
    char age[50];
    char phoneNumber[50];
};
typedef struct Sinhvien Sinhvien;

int main(){
    Sinhvien s[5];
    for(int i=0;i<5;i++){
    printf("Nhap thong tin sinh vien %d\n",i+1);
    printf("Ho ten: ");
    fgets(s[i].name,50,stdin);
    s[i].name[strcspn(s[i].name,"\n")]='\0';
    printf("Tuoi: ");
    fgets(s[i].age,50,stdin);
    s[i].age[strcspn(s[i].age,"\n")]='\0';
    printf("So dien thoai: ");
    fgets(s[i].phoneNumber,50,stdin);
    s[i].phoneNumber[strcspn(s[i].phoneNumber,"\n")]='\0';
	}
	
    for(int i=0;i<5;i++){
    printf("Thong tin sinh vien %d \n",i+1);
    printf("Ho ten: %s\n",s[i].name);
    printf("Tuoi: %s\n",s[i].age);
    printf("So dien thoai: %s\n",s[i].phoneNumber); 
	}

    return 0;
}
