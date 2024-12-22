#include<stdio.h>
int main (){
	struct student {
		char name [50];
		int age;
		char phoneNumber[10];
	};
	struct student student1 = {
		"Nguyen Khac Hung" ,
		18,
		"0353141596",
	};
	printf ("ten cua sinh vien la : %s\n",student1. name);
	printf ("tuoi cua sinh vien la : %d\n",student1. age);
	printf ("so dien thoai cua sinh vien la : %s\n",student1. phoneNumber);
	
	return 0 ;
}
