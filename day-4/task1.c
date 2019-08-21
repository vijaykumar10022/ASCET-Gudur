//~ 
//~ 1).input:9
   //~ output:divisibility count is 3(1,3,9)
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,count=0;
	printf("Divisibilities are :");
	for(i=1;i<=n;i++)
	{
		if(n%i==0){
			count++;
			printf("%d ",i);
		}
	}
	printf("\n%d divisibility count is %d",n,count);
	return 0;
}
