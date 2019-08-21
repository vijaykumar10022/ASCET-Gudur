//~ while:
	//~ syntax:
		//~ initialization;
		//~ while(conditions){
			//~ statments;
			//~ incre/decre;
		//~ }
//~ //natural numbers by using while loop
//~ input:10
//~ output:1 2 3 4 5 ...10
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=n;
	while(i>=1){
		printf("%d ",i);
		i--;
	}
	return 0;
}
