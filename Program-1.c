//Complete the given program with string declaration/initialization & read/print the string
// Instructions:-
//1) Initially, declare a string with size
//2) read the input string from user 
//3) Finally, Print the input string obtained from user.

//Expected input & output:-
//Enter a String: Vidyavardhaka
//The input string is Vidyavardhaka

#include <stdio.h>
int main() 
{
 char name[10];
 int age;                     //Declare the string
printf("Enter your first name and age: ");
scanf("%s%d",name,&age);
printf("you entered:%s%d",name,age);
}
