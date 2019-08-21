//~ input:5 10
//~ output:5 6 7 8 9 10
#include<stdio.h>
int main(){
	int i,s,e;
	printf("Enter Strating &ending values:");
	scanf("%d%d",&s,&e);//10 20
	for(i=s;i<=e;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
	return 0;
}
