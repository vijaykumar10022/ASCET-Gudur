//input:3
		//51248 5124	87459
//output:first digit=5
		//last digit =8
		//sum=5+8-->13
#include<stdio.h>
int main(){
	int n,t,i;
	scanf("%d",&t);//4
	for(i=0;i<t;i++){
		scanf("%d",&n);//518,123,456,987
		int l_digit=n%10;//-->8
		while(n>10){//518>10(T),51>10(T),5>10(F)
			n=n/10;//518/10-->51,51/10-->5
		}
		int f_digit=n;
		printf("First Digit=%d\n",f_digit);
		printf("Last Digit=%d\n",l_digit);
		printf("Sum=%d\n",f_digit+l_digit);
		printf("Product=%d\n",f_digit*l_digit);
	}
	return 0;
}
