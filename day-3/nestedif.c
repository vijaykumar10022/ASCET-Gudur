//~ n=10
//~ -->even
	//~ -->divisible by 5
		//~ -->it is divisible by 5
			//~ -->quotint odd
				//~ -->it is even number
			//~ -->not
				//~ -->it is a odd number
	//~ -->not divisible
		//~ -->it is not divisible by 5	
//~ -->not even
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);//10
	if(n%2==0){
		printf("%d is a even Number\n",n);
		if(n%5==0){
			printf("%d is Divisible by 5\n",n);
			int q=n/5;
			if(q%2==0){
				printf("%d is a even",q);
			}
			else{
				printf("%d is a odd",q);
			}
		}
		else{
			printf("%d is not Divisible by 5\n",n);
		}
	}
	else{
		printf("%d is not a even number\n",n);
	}
	return 0;
}

