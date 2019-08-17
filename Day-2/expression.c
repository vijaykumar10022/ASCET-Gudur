//~ //f(x)=6x^2+3*x*x+(2*x)+10
  //~ f(1)=6*((1)^2)+(3*1*1)+(2*1)+10
	  //~ =	6+3+2+10
	  //~ =21
#include<stdio.h>
#include<math.h>
int main(){
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	int expre=6*pow(x,2)+3*x*x+2*x+10;
	printf("f(%d)=%d",x,expre);
	return 0;
}
