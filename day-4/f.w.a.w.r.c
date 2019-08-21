//~ -->funtion with arguments and with return value
		//~ input:main
		//~ output:main
#include<stdio.h>
int div(int a,int b);
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int m=div(a,b);
	printf("Division of %d and %d is %d\n",a,b,m);
	return 0;
}
int div(int a,int b){
	int d=a/b;
	return d;
}
