//~ input:5
//~ explanation:5*1+2 + 5*2+3 +5*3+4 +5*4+5 +5*5+6
			//~ 7	  +	13    +19    + 25 +31 -->?
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<=n;i++){
		int v=(n*i)+(i+1);
		printf("%d ",v);
		sum=sum+v;
	}
	printf("--->%d ",sum);//332
	int rsum=0;
	while(sum!=0){//332!=0(T),33!=0(T),3!=0(T),0!=0(F)
		int last=sum%10;//332%10-->2,33%10-->3,3%10-->3
		rsum=rsum+last;//0+2-->2,2+3-->5,5+3-->8
		sum=sum/10;//332/10-->33,33/10-->3,3/10-->0
	}
	printf("\nFinal sum=%d\n",rsum);
	return 0;
}
