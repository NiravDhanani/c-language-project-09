#include <stdio.h>

typedef struct employees{
	int id;
	char name[20];
	int age;
	int salary; 
	float exp;
	char cmp[20];
}emp;

void inpute(int n,emp employees[]);
void press(int n,emp employees[]);
void age(int n,emp employees[]);
void salary(int n,emp employees[]);
void experience(int n,emp employees[]);

void main(){
	int n,key;
	
	printf("Enter No of Employee : ");
	scanf("%d",&n);
	
	emp employees[n];
	inpute(n,employees);
	press(n,employees);
}

void inpute(int n,emp employees[]){
	int i;
	
	
	for(i=0;i<n;i++){
		printf("\n inpute %d employee data \n ",i+1);
		printf("Enter Id of employee : ");
	    scanf("%d",&employees[i].id);
	    printf("Enter Name of employee : ");
	    scanf("%s",&employees[i].name);
	    printf("Enter Age of employee : ");
	    scanf("%d",&employees[i].age);
	    printf("Enter Salary of employee : ");
	    scanf("%d",&employees[i].salary);
	    printf("Enter Experience of employee : ");
	    scanf("%f",&employees[i].exp);
	    printf("Enter company name of employee : ");
	    scanf("%s",&employees[i].cmp);
	}
}

void press(int n,emp employees[]){
	int ad;
    printf("\n\n"); 
    printf("Press 1 for Age data \nPress 2 for salary data Press \n3 for experince data \n");
    scanf("%d",&ad);
    switch(ad){
    	case 1:{
    		age(n,employees);
    			press(n,employees);
			break;
		}
		case 2:{
			salary(n,employees);
				press(n,employees);
			break;
		}
		case 3:{
			experience(n,employees);
				press(n,employees);
			break;
		}

		default:{
			printf("not valide option");
			break;
		};
	}
}

void age(int n,emp employees[]){
	int i,k,key;
	
	printf("enter age :");
	scanf("%d",&k);

	printf("press 1 for greater \npress 2 for less age : ");
	scanf("%d",&key);
	switch(key){
    	case 1:{
    	   for(i=0;i<n;i++){
		      if(employees[i].age>=k){
		     	printf("%s age is %d",employees[i].name,employees[i].age);
		        }
	       }
	       	break;
		}
		
		
		case 2:{
    		for(i=0;i<n;i++){
		      if(employees[i].age<=k){
		     	printf("%s age is %d\n",employees[i].name,employees[i].age);
		        }
	       }
	       break;
		}
		default:{
			printf("not valide option");
			break;
		};
			
	}
}

void salary(int n,emp employees[]){
	int i,k,key;
	
	printf("enter salary :");
	scanf("%d",&k);

	printf("press 1 for greater \npress 2 for less age : ");
	scanf("%d",&key);
	switch(key){
    	case 1:{
    	   for(i=0;i<n;i++){
		      if(employees[i].salary>=k){
		     	printf("%s salary is %d\n",employees[i].name,employees[i].salary);
		      }
	       }
	       break;
		}
			
		
		case 2:{
    		for(i=0;i<n;i++){
		      if(employees[i].salary<=k){
		     	printf("%s salary is %d",employees[i].name,employees[i].salary);
		      }
	       }
	       break;
		}
		default:{
			printf("not valide option");
			break;
		};
			
	}
}
// experience 
void experience(int n,emp employees[]){
	int i,k,key;
	
	printf("enter experience :");
	scanf("%d",&k);

	printf("press 1 for greater \npress 2 for less age : ");
	scanf("%d",&key);
	switch(key){
    	case 1:{
    	   for(i=0;i<n;i++){
		      if(employees[i].exp>=k){
		     	printf("%s exeperience is %.2f\n",employees[i].name,employees[i].exp);
		      }
	       }
	       break;
		}
			
		case 2:{
    		for(i=0;i<n;i++){
		      if(employees[i].exp<=k){
		     	printf("%s exeperience is %.2f",employees[i].name,employees[i].exp);
		      }
	       }
	       break;
		}
		default:{
			printf("not valide option");
			break;
		};		
	}
}
//void utern(int n,emp employees[]){
//	int ad;
//    printf("\n\n"); 
//    printf("Press 1 for Age data \nPress 2 for salary data Press \n3 for experince data \n");
//    scanf("%d",&ad);
//    switch(ad){
//    	case 1:{
//    		age(n,employees);
//			break;
//		}
//		case 2:{
//			salary(n,employees);
//			break;
//		}
//		case 3:{
//			experience(n,employees);
//			break;
//		}
//		default:{
//			printf("not valide option");
//			break;
//		};
//	}
//}

    


