#include<stdio.h>
void caculateSum(int a,int b,int *rs);
int main(){
	int x=20;
	int y=39;
	int sum=0;
	caculateSum(x,y,&sum);
	printf("Tong 2 so %d va %d la %d",x,y,sum);
	return 0;
}
void caculateSum(int a,int b,int *rs){
	*rs= a+b;
}

