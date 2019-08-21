//~ -->505
//~ -->123456
//~ 
//~ 
//~ if(username==505){//505
	//~ if(password==123456){//987456
		//~ printf("Welcome to Gmail");
	//~ }
	//~ else{
		//~ printf("Invalid PAssword");
	//~ }
//~ }
//~ else{
	//~ printf("Invalid username");
//~ }
#include<stdio.h>
int main(){
	int username,password;
	printf("Enter User name to login:");
	scanf("%d",&username);//502
	if(username>=500&&username<600){//T
		printf("Enter Password:");
		scanf("%d",&password);//12345
		if(password==12345){//T
			printf("Welcome to C programming...!!\n");
		}
		else{
			printf("Invalid Password..!!");
		}
	}
	else{
		printf("Invalid User name..!!");
	}
	return 0;
}
