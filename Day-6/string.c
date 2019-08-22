#include<stdio.h>
#include<string.h>
int main(){
	//~ char ch[10];
	//~ scanf("%s",ch);
	//~ gets(ch);
	//~ fgets(ch,sizeof(ch),stdin);
	//~ printf("%s",ch);
	//~ puts(ch);
	char ch1[]="Welcometoapssdc";
	char ch2[]="Hi vijay";
	printf("%d\n",strlen(ch1));
	printf("%s\n",strlwr(strupr(strcat(ch2,ch1))));
	char ch3[]="HII ASCET";
	printf("%s\n",strlwr(ch3));
	char ch4[20];
	strcpy(ch4,ch3);
	printf("%s\n",ch4);
	return 0;
}




//~ string.h
//~ -->Strlen()-->Find length of string
//~ -->strcat()-->Combine both strings
//~ -->strupr()-->lower to Upper
//~ -->strlwr()-->upper to lower
//~ -->strcpy()-->Copy 












