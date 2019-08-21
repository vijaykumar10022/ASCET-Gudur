//~ do_while:
		//~ syntax:
			//~ initialization;
			//~ do{
				//~ statements;
				//~ incre/decre;
			//~ }while(conditions);
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=1,sum=0;
	do{
		printf("%d ",i);
		sum=sum+i;
		i++;
	}while(i<=n);
	printf("\nSum=%d",sum);
	return 0;
}
