//~ -->Logical operators:
				//~ &&,||,!
				//~ AND,OR,NOT 
//~ Logical AND(&&):
		//~ -->Two or More Conditions
		//~ 
	//~ Condition1	condition2	condition1&&condition2
		//~ T			F			F
		//~ T			T			T
		//~ F			F			F
		//~ F			T			F
//~ Logical OR(||):
//~ 
	//~ Condition1	condition2	condition1||condition2
	//~ 
		//~ T			F			T
		//~ T			T			T
		//~ F			F			F
		//~ F			T			T
		//~ 
//~ Logical NOT(!):
		//~ Conditions		Result
			//~ T				F
			//~ F				T
		//~ 
		//~ 
				//~ 
	//~ 
	//~ 

#include<stdio.h>
int main(){
	//~ int v1=20,v2=50;
	//logical AND(&&)
	//~ if((v1<=v2)&&(v2==50)&&(10!=20)){
			//~ 
		//~ printf("True");
	//~ }
	//~ else{
		//~ printf("False");
	//~ }
	//~ logical OR(||)
	//~ int v1=20,v2=50;
	//~ if(!((v1!=20)||(v2==v1) || (v1>=v2))){
		//~ printf("True");
	//~ }
	//~ else{
		//~ printf("False");
	//~ }
	int v1=20,v2=50;
	if(((10<=20)||(v2==v1)) &&((v1>=v2)||(10!=20))
 	{
		printf("True");
	}
	else{
		printf("False");
	}
	return 0;
}














