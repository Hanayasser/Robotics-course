#include <stdio.h>

void main(void){

int number;

printf("please enter number:\n");

scanf("%d",&number);

if(number%2 == 0){

printf("number is even");

}
else {

printf("number is odd");

}
}