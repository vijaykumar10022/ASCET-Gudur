//Arithmatic operators:
//~ input:10 20
//~ output:
		//~ Addition of 10 and 20 is 30
		//~ Subtration of 10 and 20 is -10
		//~ Multiplication of 10 and 20 is 200
		//~ division of 10 and 20 is 0
		//~ Modulo division of 10 and 20 is 10
#include<stdio.h>
int main(){
	int v1,v2;
	scanf("%d%d",&v1,&v2);
	printf("Addition of %d and %d is %d\n",v1,v2,v1+v2);
	printf("Subtration of %d and %d is %d\n",v1,v2,v1-v2);
	printf("Multiplication of %d and %d is %d\n",v1,v2,v1*v2);
	printf("Division of %d and %d is %d\n",v1,v2,v1/v2);
	printf("Modulo division of %d and %d is %d\n",v1,v2,v1%v2);
	return 0;
}
		

