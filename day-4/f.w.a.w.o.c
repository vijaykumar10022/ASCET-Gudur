//~ -->funtion with arguments and with out return value
	//~ input:main
	//~ output:sub funtion
#include<stdio.h>
void mul(int a,int b);
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	mul(a,b);//Funtion calling ,Actual Arguments
	return 0;
}
void mul(int a,int b){
	printf("Multiplication of %d and %d is %d",a,b,a*b);
}
