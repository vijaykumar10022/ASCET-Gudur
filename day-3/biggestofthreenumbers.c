//To find biggest of three numbers
//input:10 20 30
//output: 30 is the biggest value
#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);//10 20 30 40 
	if(a>b&&a>c&&a>d){//10>20&&10>30&&10>40
		printf("%d is a big value",a);
	}
	else if(b>c&&b>d){//20>30&&20>40
		printf("%d is a big value",b);
	}
	else if(c>d){//30>40
		printf("%d is a big value",c);
	}
	else{
		printf("%d is a big value",d);
	}
	return 0;
}

