#include<stdio.h>
int main(){
	//~ int v=70;
	//~ printf("%c",v);//Ascii to character
	//~ char ch='r';
	//~ printf("%d",ch);//Character to Ascii
	int i;
	for(i=0;i<=127;i++){
		printf("%d).%d-->%c\n",i,i,i);
	}
	return 0;
}
