//~ -->Strucure: User defined data type
	//~ int,float,double,char-->All datatype elements store
	//~ struct structurename{
		//~ varaibles;
		//~ arrays
	//~ }reference ;
		//~ 


//~ Student:name-->String
		//~ Roll-->Srting
		//~ phone Number -->int
		//~ gmail -->String
		//~ fee-->float
		
#include<stdio.h>
struct student{
	char name[10];
	char roll_num[10];
	long long int ph_no;
	char gmail[20];
	int fee;
};
int main(){
	struct student std;
	printf("Enter No of Student Data:");
	int c;
	scanf("%d",&c);
	for(int i=0;i<c;i++){
		printf("Enter Student Name:");
		scanf("%s",std.name);
		printf("Enter Student Roll Number:");
		scanf("%s",std.roll_num);
		printf("Enter Studetn Phone Number:");
		scanf("%lld",&std.ph_no);
		printf("Enter Student Gmail:");
		scanf("%s",std.gmail);
		printf("Enter Student Fee:");
		scanf("%d",&std.fee);
		printf("Student Data :\n");
		printf("Name  | RollNumber	| Phone		| Gmail	|  		fee\n");
		printf("%s\t%s\t%lld\t%s\t%d",std.name,std.roll_num,std.ph_no,std.gmail,std.fee);
		printf("\n");
	}
	return 0;
}
		
