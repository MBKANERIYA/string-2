#include <stdio.h> 
#include <string.h> 
 
main() 
{ 
    char email[100]; 
    char password[100]; 
 
 
    printf("Enter your email = "); 
    gets(email);
 
    printf("Enter your password  = "); 
    gets(password);
 
    if(strcmp(email,"mbkaneriya1998@gmail.com")==0)
	{ 
	
 		printf("\n Correct E-mail ID");
 		
    }
	else
	{ 
   	
	   	printf("\n Incorrect E-mail ID"); 
	   	
	} 
	
	if(strcmp(password,"maulik@024")==0)
	{ 
	
        printf("\n Correct password"); 
        
    }
	else
	{ 
	
    	printf("\n Incorrect password"); 
    	
	}
 
} 
