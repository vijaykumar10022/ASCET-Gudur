//~ -->Funiton with out arguments and with return value
	//~ input:sub funtion 
	//~ output:series-subfunctions,sum-main
#include<stdio.h>
int series2();
int main(){	
	printf("\nsum=%d",series2());
	return 0;
}
int series2(){
	int a,b;
	scanf("%d%d",&a,&b);
	int i,sum=0;
	for(i=a;i<=b;i++)
	{
		sum=sum+i;
		printf("%d ",i);
	}
	return sum;
}
