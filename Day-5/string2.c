#include<stdio.h>
int main(){
	char ch[10];
	fgets(ch,sizeof(ch),stdin);
	puts(ch);
	return 0;
}
