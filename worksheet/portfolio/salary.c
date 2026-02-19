/* salary.c */

#include <stdio.h>

/*--------------------- *\
|* Potrfolio submission  |
|------------------------|
|* Name: Sam Dillon      |
|* ID: 201960792         |
\*----------------------*/


//////// CONSTANTS ////////
#define NATIONAL_INSURANCE_RATE 0.08f
#define TAX_RATE 0.15f

#define MINIMUM_WAGE 12.5e3f /* £12.5k */
#define SALARY 36250.00f
//////// CONSTANTS ////////


int main() {

   //Calculations
   float salary = SALARY; //Start var as const value.

   float nationalInsurance = (salary * NATIONAL_INSURANCE_RATE);
   salary -= nationalInsurance; //Take away NI contrib.
   float tax = (salary - MINIMUM_WAGE) * TAX_RATE;
   salary -= tax; //Take away tax contrib.

    
   //Show values
   printf("Salary £%.2f\n", SALARY);
   printf("NI contribution £%.2f\n", nationalInsurance);
   printf("Tax contribution £%.2f\n", tax);
   printf("Take home salary £%.2f\n", salary);

   return 0;
}
