//Sum of natural numbers
//input:1 10
//output:55
#include<stdio.h>
int main(){
	int s,e;
	scanf("%d%d",&s,&e);
	int i,sum=0,esum=0,osum=0;
	for(i=s;i<=e;i++){
		sum=sum+i;//sum+=i;
		if(i%2==0){
			esum=esum+i;
		}
		else{
			osum=osum+i;
		}
	}
	printf("Sum of %d to %d is %d\n",s,e,sum);
	printf("Even Sum of %d to %d is %d\n",s,e,esum);
	printf("odd Sum of %d to %d is %d\n",s,e,osum);

	return 0;
}
//~ sum=0,1,3,6,10,15,
//~ i=1;1<10(T)
	//~ sum=0+1-->1
//~ i=2;2<=10(T)
	//~ sum=1+2-->3
//~ i=3;3<=10(T)
	//~ sum=3+3-->6
//~ i=4;4<=10(T)
	//~ sum=6+4-->10
//~ i=5;5<=10(T)
	//~ sum=10+5-->15
	//~ 
	//~ 
//~ sum=45
//~ i=10;i<=10;
	//~ sum=45+10-->55
//~ i=11;11<=10(F)
	



