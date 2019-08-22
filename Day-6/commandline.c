//~ -->Command Line Arguments
//~ 
//~ -->static a=20
//~ -->Dynamic -->scanf("%d",&a);
//input:10 20
//output:addition of  10 and 20 is 30
#include<stdio.h>
#include<stdlib.h>
int main(int c,char **data){
	//~ int a=atoi(data[1]);
	//~ int b=atoi(data[2]);
	//~ printf("Addition of %d and %d is %d\n",a,b,a+b);
	//~ input:5!
	//~ output:5*4*3*2*1-->120
	int n=atoi(data[1]);
	int fact=1,i;
	for(i=n;i>=1;i--){
		fact=fact*i;
		printf("%d*",i);
	}
	printf("\nFactorial of %d is %d",n,fact);
	return 0;
}
