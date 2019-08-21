//~ input:1582
//~ ouput:2*4+8*4+5*4+1*4-->?64-->10
//~ -->funtion with arguments and with out return value
	//~ input:main
	//~ output:subfuntion
	
#include<stdio.h>
void digit_count_pro_sum(int n){
	int count=0;
	int t=n;
	while(n!=0){//to find count
		count++;
		n=n/10;
	}
	printf("Count is %d \n",count);
	int sum=0;
	while(t!=0){
		int last=t%10;//separate last digit
		sum=sum+(last*count);//last*count -->sum
		printf("%d*%d+",last,count);//expression 
		t=t/10;//filter one by one digit
	}
	printf("\nSum=%d\n",sum);//overall sum
	int t2=sum;
	int sum2=0;
	while(t2!=0){
		sum2=sum2+t2%10;
		t2=t2/10;
	}
	printf("Final Sum=%d ",sum2);
}
int main(){
	int n;
	scanf("%d",&n);
	digit_count_pro_sum(n);
}


