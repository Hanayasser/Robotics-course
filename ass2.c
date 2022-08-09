#include <stdio.h>

void main(void){

int ID,password=-1;

printf("please enter your ID:\n");
scanf("%d",&ID);


switch(ID){
	case 9933:
	printf("please enter your password:\n");
	scanf("%d",&password);
	
	break;
	
	default:
     printf("incorrect ID\n");
	
}	
	switch(password){
		
		case 7112:
		printf("hana\n");
		break;
		
		case -1:
		break;
		
		default:
		printf("incorrect password\n");
	
	}
}

 