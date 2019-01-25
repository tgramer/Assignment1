/*
 *  File: Assignment 1
 *  Author Teresa Gramer
 *  Date 2/1/2019
 *
 */


#include <stdlib.h>
#include <stdio.h>

int main(int arg, char **argv) {

int number;

printf("Enter an integer"); //prompts user to imput a number

scanf("%d", number); //user imputs number

if (number > 0) {
printf("%d is positive", number );  //for a positve number
  }

else if(number < 0){
printf("%d is negative");  //for a negative number
}

else {
   printf("error");
}

if(number % 2 = 0){
   printf("and even");   //for an even number
}

else if(number % 2 = 1){
   printf("and odd");   //for an odd number 
}

else{
  printf("nothing");
}

  return 0;
}
