#include <stdio.h>
struct Student {
    char name[100];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student student;
    printf("Nhap ten sinh vien: ");
    fgets(student.name, sizeof(student.name), stdin); 
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &student.age);
    getchar(); 
    printf("nhap so dien thoai sinh vien: ");
    fgets(student.phoneNumber, sizeof(student.phoneNumber), stdin);  
    printf("\nTh�ng tin sinh vi�n:\n");
    printf("T�n: %s", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s", student.phoneNumber);

    return 0;
}

