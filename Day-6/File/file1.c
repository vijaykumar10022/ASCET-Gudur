#include<stdio.h>
int main(){
	//inserting data into File
	//~ FILE *fd=fopen("apssdc.txt","w");
	//~ char data[30];
	//~ fgets(data,30,stdin);//Data Read
	//~ fputs(data,fd);//To Store in file
	//~ fclose(fd);
	
	//Retriving data from file
	FILE *fd=fopen("apssdc.txt","r");
	char data[30];
	fgets(data,sizeof(data),fd);
	puts(data);
	fclose(fd);
	return 0;
}
