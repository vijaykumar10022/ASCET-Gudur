//~ -->Assignment operators:
				//~ +=,-=,*=,/=,%=
//~ a=10
//~ b=20
//~ a=a+b
//~ a-->30
//~ a+=b
#include<stdio.h>
int main(){
	int a=10,b=5;
	a+=b;//a=a+b
	printf("%d\n",a);
	b+=a;//b=b+a;//20
	printf("%d\n",b);
	a-=b;//a=a-b;//15-20=-5
	printf("%d\n",a);
	printf("a=%d b=%d\n",a,b);
	b-=a;//b=b-a;//20-(-5)-->25
	printf("%d\n",b);
	a=20;
	a*=3;//a=a*3;//60
	printf("%d\n",a);
	b/=a;//b=b/a;//20/60
	printf("%d\n",b);//
	b=300;
	a=200;
	a%=b;//a=a%b;//60%120
	printf("%d\n",a);//
	return 0;
}
