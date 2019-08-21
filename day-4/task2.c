//~ 2).input:1 10 5
   //~ output:5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
int main(){
	int s,e,n;
	scanf("%d%d%d",&s,&e,&n);
	int i,t=0;
	for(i=1;i<=10;i++)
	{
		t=t+n;
		printf("%d ",t);
	}
	return 0;
}
