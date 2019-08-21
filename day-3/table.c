//~ input:7
//~ output:7*1=7
	   //~ 7*2=14
	   //~ 7*3=21
	   //~ 
	   //~ 
	   //~ 7*10=70
#include<stdio.h>
int main(){
	int n;
	printf("Enter Table value:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	return 0;
}
