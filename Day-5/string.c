#include<stdio.h>
#include<string.h>
int main(){
	//~ char ch[10];  
	//~ scanf("%s",ch);
	//~ gets(ch);
	//~ printf("%s",ch);
	char ch[]="Vijay@123!@#";
	
		//overall count-->12
		//~ Albates count-->5
				//~ capital count-->1
				//~ small count-->4
		//~ integers count-->3
		//~ special symbols count-->4
		int i,count=0,a_count=0,s_count=0,c_count=0,sp_count=0,i_count=0;
		for(i=0;ch[i]!='\0';i++){
			count++;
			if((ch[i]>='a'&&ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z')){
				a_count++;
			}
			else if((ch[i]>='0' && ch[i]<='9')){
				i_count++;
			}
			else{
				sp_count++;
			}
			if((ch[i]>='a'&&ch[i]<='z')){
				s_count++;
			}
			if((ch[i]>='A' && ch[i]<='Z')){
				c_count++;
			}
			
		}
		printf("count =%d\n",count);
		printf("Alfabets count =%d\n",a_count);
		printf("Small Count = %d\n",s_count);
		printf("Capital Letters =%d\n",c_count);
		printf("Special Symbols Count =%d\n",sp_count);
		printf("Integers count =%d\n",i_count);
		//~ printf("%d",strlen(ch));
	
	return 0;
}
				
