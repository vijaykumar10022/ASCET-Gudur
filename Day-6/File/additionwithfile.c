#include<stdio.h>
int main(){
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	int a,b;
	fscanf(in,"%d",&a);
	fscanf(in,"%d",&b);
	int c=a+b;
	fprintf(out,"%d",c);
	fclose(in);
	fclose(out);
	return 0;
}
