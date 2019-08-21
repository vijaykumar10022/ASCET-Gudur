//~ -->Funiton with out arguments and with return value
	//~ input:Sub function 
	//~ output:main
#include<stdio.h>
int sub();//Funtion declaration
int main(){
	int s=sub();//Funtion calling
	printf("%d\n",s);
	return 0;
}
int sub(){//Futnion defination
	int a,b;
	scanf("%d%d",&a,&b);
	int res=a-b;
	printf("Subtration of %d and %d is",a,b);
	return res;
}
