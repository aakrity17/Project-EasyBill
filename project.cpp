#include<stdio.h>
#include<conio.h>
#include<string.h>
//Global Variable Declaration
int count = 5;
//Function Declaration

void userInfo();

//Validator Function
void validator(char user[], char pass[]){

	if(strcmp(user, "admin")==0 && strcmp(pass, "pass")==0)
	 	{
			printf("\nYou are logged in!!!");		  				
		}
	else{
		count = count - 1;
 		 	if(count > 0){
		 		 printf("\n You have %d tries remaining!!! \n", count);
				 userInfo();
		 	}
			else{
				 printf("\nYou attempted more than 3 times... Please try again in a moment!!!\n");
			}
		}
}

void welcomeScreen(){
    printf("**********Welcome to EASYBILL********** \n");
}
//Takes user's information...
void userInfo(){
	 char username[20], password[20];
	 printf("Enter your username: ");
	 scanf("%s", username);
	 printf("\nEnter your password: ");
	 scanf("%s",password);
	 
	 //	 Information validator...
	 validator(username,password);
}		   
int main(){
    welcomeScreen();
	userInfo();
}
