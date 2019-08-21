#include<stdio.h>
int main(){
	int n1=20,n2=40;
	printf("%d\n",n1++);//20-->21
	int n=n1+n2;//21+40-->61
	printf("%d\n",--n);//60
	n=++n1;//22
	printf("%d\n",++n*2);//23*2-->46
	return 0;
}
