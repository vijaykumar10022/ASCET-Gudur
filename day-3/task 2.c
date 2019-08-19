//~ 2).input:10 20(Without using Third variable);swapping
    //~ output:20 10 
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);//a=10 ,b=20
	printf("before swaping-->a=%d,b=%d\n",a,b);
	//with using third variable
	//~ t=a;//t=10
	//~ a=b;//a=20
	//~ b=t;//b=10
	//with out using third variable
	//~ a=a+b;//a=10+20-->30
	//~ b=a-b;//b=30-20 -->10
	//~ a=a-b;//a=30-10 -->20
	//with out using third variable
	a=a^b;//10 -->01010
		  //20--> 10100
				//-------
			//	  11110-->30
					
	b=b^a;//20-->10100
		  //30-->11110
				//-------
			//	 01010 -->10
	a=a^b;//30-->11110
		 //10--->01010
				//------
			//	 10100-->20
	printf("after swaping-->a=%d,b=%d\n",a,b);
	return 0;
}
