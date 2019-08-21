//~ -->funtion with out arguments and with out return value
		//input:sub function reading(sf)
		//output:sub function display(pf)
#include<stdio.h>
void add();//Funtion Declaration
int main(){
	add();//function calling 
	add();
	add();
	return 0;
}
void add(){//Sub funtion or funtion defination
	int a,b;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	printf("Addition of %d and %d is %d\n",a,b,a+b);
}

