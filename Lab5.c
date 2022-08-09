#include <stdio.h>

void main(void){

int ID;

printf("please enter your ID:\n");

scanf("%d",&ID);

switch (ID){

case 1234:
printf("welcome Ahmed");
break;

default:
printf("wrong ID");
}
}