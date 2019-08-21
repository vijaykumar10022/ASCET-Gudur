//input:500 599
//output:182H1A0501
		 //~ 182H1A0502
		 //~ 182H1A0503
		 //~ 
		 //~ 
		 //~ 182H1A0599
#include<stdio.h>
int main(){
	int s,e,i;
	scanf("%d%d",&s,&e);
	for(i=s;i<=e;i++){
		printf("182H1A0%d 172H1A0%d 162H1A0%d\n",i,i,i);
	}
	return 0;
}
