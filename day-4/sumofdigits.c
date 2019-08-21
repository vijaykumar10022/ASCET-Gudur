//~ input:587432,412
//~ outpu:5+8+7+4+3+2-->29,4+1+2-->7
//Digit sum
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);//412
	int sum=0;
	while(n!=0){//412!=0(T),41!=0(T),4!=0(T),0!=0(F)
		int last=n%10;//412%10-->2,41%10-->1,4%10-->4
		sum=sum+last;//0+2-->2,2+1-->3,3+4-->7
		n=n/10;//412/10-->41,41/10-->4,4/10-->0
	}
	printf("%d",sum);
	return 0;
}
