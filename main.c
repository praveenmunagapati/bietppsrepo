 #include <stdio.h>

int main(void) {


/*
 * a number divieds itself and one
 *
 * example 1,2,3,5,7,11,13...
 *
 */
 /*
   algorithm
   step 1 : read number a
   step 2 : check whether the number is divisible by 1 to that number
   step 3 : if it is divisible
   step 4 : print is prime
   step 5 : if not  it is not prime

  */
 /*
   1 bit on off 0 1
   bit 1 bit 2
   2 power n

   octals hexadecimal
  */

 int a;//declaration 4 bytes
 a = 30; //initialiastion
 //
 // printf("%d \n",a);
 // // a is variable
 // // named memory location
 // printf("%p \n",&a);
 // printf("%d \n",*(&a));

 //int 5var;//wrong //shouldnot start with number
//int some where;//somewhere
 //int somewhere;
 //int some_where;
 //int _var;

/*
 *auto

 break

 case

 char

 const

 continue

 default

 do

 double

 else

 enum

 extern

 float

 for

 goto

 if

 int

 long

 register

 return

 short

 signed

 sizeof

 static

 struct

 switch

 typedef

 union

 unsigned

 void

 volatile

 while

*/

// int While;


 // 15

 // for (int i = 1; i<= a; i = i+1) {
 //  printf("%d\t",i);
 // }
a = 5;
int count = 0;
 for (int i = 1; i<= a; i = i+1) {
      if(a%i==0) {
       count = count + 1;
      }

 }

 if(count == 2) {
  printf("a is prime");
 }else {
  printf("a is not prime");

 }


 return 0;
}