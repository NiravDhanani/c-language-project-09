#include <stdio.h>
struct emp{
	
	char name[50];
	char email[50];
	char designation[50];
	int  salary;
	char city[50]; 
	char contact[50];   
};

void inpute(struct emp employee[],int n);
void outputefile(struct emp employee[],int n);

void main(){
	int n;
	
	
	printf("ENTER NO. OF EMPLOYEE :  ");
	scanf("%d",&n);
	struct emp employee[n];
	inpute(employee,n);
	outputefile(employee,n);
		
		
}

void inpute(struct emp employee[],int n){
	int i;
	
	printf("\n\n**********personal information**********\n\n");
	for(i=0;i<n;i++){
		printf("\nInput Data Of Employee - %d\n", i + 1);
		printf("Enter Name of Employee :- ");
		scanf("%s",&employee[i].name);
		
		printf("Enter Email of Employee :- ");
		scanf("%s",&employee[i].email);
		
		printf("Enter Designation of Employee :- ");
		scanf("%s",&employee[i].designation);
		
		printf("Enter salary of Employee :- ");
		scanf("%d",&employee[i].salary);
		
		printf("Enter city of Employee :- ");
		scanf("%s",&employee[i].city);
		
		printf("Enter contact of Employee :- ");
		scanf("%s",&employee[i].contact);
	}	
}


void outputefile(struct emp employee[],int n){
	
	int i;
	
	FILE *file;
	      file = fopen("Employee-data.txt","w");
	      
	fprintf(file,"\n\n**********personal information**********\n\n");
	
	for(i=0;i<n;i++){
		fprintf(file,"\n\n");
		printf("\nInput Data Of Employee - %d\n", i + 1);
		fprintf(file," Name        :- %s \n",employee[i].name);
		fprintf(file," Email       :- %s@gmail.com\n",employee[i].email);
		fprintf(file," Designation :- %s \n",employee[i].designation);
		fprintf(file," salary      :- %d \n",employee[i].salary);
		fprintf(file," city        :- %s \n",employee[i].city);
		fprintf(file," contact     :- %s \n\n",employee[i].contact);
		fprintf(file,"\n");	
	}	

	fprintf(file,"\n\n**********Thank You**********\n\n");
	
	fclose(file);
	
 }



