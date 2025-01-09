#include<stdio.h>
#include<string.h>

struct Sinhvien{
    char name[50];
    char age[50];
    char phoneNumber[50]; 
};
typedef struct Sinhvien Sinhvien;

int main(){
    Sinhvien s;
    strcpy(s.name,"Do Tien Phuc");
    strcpy(s.age,"19");
    strcpy(s.phoneNumber,"0333333330"); 
    printf("Thong tin sinh vien:\n");
    printf("Ho ten: %s\n",s.name);
    printf("Tuoi: %s\n",s.age);
    printf("So dien thoai: %s\n",s.phoneNumber); 
    
    return 0;
}
