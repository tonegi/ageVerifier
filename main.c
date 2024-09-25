#include <stdio.h>

int main(void) {
  int age;
  printf("Enter your age: ");
    scanf("%d",&age);
  if ((age >= 18) && (age <= 67)) {
    printf("You can donate blood");
    }  
  else 
    printf("You cannot donate blood");
   
  return 0;
}
