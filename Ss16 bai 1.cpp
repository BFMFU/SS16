#include<stdio.h>
int main(){
	int n=8;
	int *ptr=&n;
	//cach 1 su dung bien chinh
	printf("Gia tri cua bien la: %d\n",n);
	printf("Dia chi cua bien la: %d\n",(int *)&n);
	//cach 2 su dung con tro
	printf("Gia tri cua bien la: %d\n",*ptr);
	printf("Dia chi cua bien la: %d\n",ptr);
	return 0;
}
