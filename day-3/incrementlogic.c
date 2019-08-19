#include<stdio.h>
int main(){
	int a=10;
	int v=++a;// 11
	printf("%d\n",a);
	int z=++a + 30;//42
	printf("a=%d,z=%d\n",a,z);
	printf("%d\n",z++);//42-->43
	printf("%d\n",++v);//12
	printf("%d\n",++z);//44
	return 0;
}
