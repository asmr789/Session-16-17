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
    printf("Ho ten: ");
    fgets(s.name,50,stdin);
    s.name[strcspn(s.name,"\n")]='\0';
    printf("Tuoi: ");
    fgets(s.age,50,stdin);
    s.age[strcspn(s.age,"\n")]='\0';
    printf("So dien thoai: ");
    fgets(s.phoneNumber,50,stdin);
    s.phoneNumber[strcspn(s.phoneNumber,"\n")]='\0';
    printf("Thong tin sinh vien:\n");
    printf("Ho ten: %s\n",s.name);
    printf("Tuoi: %s\n",s.age);
    printf("So dien thoai: %s\n",s.phoneNumber); 
    
    return 0;
}
