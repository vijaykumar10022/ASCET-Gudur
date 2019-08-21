//~ -->funtion with arguments and with return value
		//~ input:main
		//~ output:main
//~ by using funtions
//~ -->123456
//~ -->21
#include<stdio.h>
int digit_sum(int n);//declaration
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",digit_sum(n));//funtion call
	return 0;
}
int digit_sum(int n){//defination
	int sum=0;
	while(n!=0){//while(n>0)
		int last=n%10;
		sum=sum+last;
		n=n/10;
	}
	return sum;
}
