//~ ).input:1 10 2
   //~ Explanation:1^2*2 2^2*2 3^2*2 4^2*2 5^2*2
   //~ output: 2 8 18 32 48 72 98 128 162 198
#include<stdio.h>
#include<math.h>
int main() {
	int s,e,n;
	scanf("%d%d%d",&s,&e,&n);
	int i;
	for(i=s;i<=e;i++)
	{
		int v=pow(i,n);
		printf("%d ",v*n);
	}
	return 0;
}
