//~ i/p:1 10 5
//~ o/p:5 10 15 20 25 30 35 40 45 50-->
//~ 
//~ -->funtion with arguments and with out return value
	//~ input:main
	//~ output:subfuction
#include<stdio.h>
void series(int s,int e,int n);//declaration
int main(){
	int s,e,n;
	scanf("%d%d%d",&s,&e,&n);
	series(s,e,n);//calling
	return 0;
}
void series(int s,int e,int n){//defination
	int i;
	for(i=s;i<=e;i++){
		printf("%d ",n);
		n=n+5;
	}
}
