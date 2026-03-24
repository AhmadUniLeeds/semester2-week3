
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Ahmad Tanveer
 * ID: 201988541
 */

 int main( void ) {

    // define and initialise variables for the problem data 
      
      float salary = 36250.00;  //Initialised the variable for salary and assigned £36250.00
      float NI_rate = 8.00;  //Initialised the variable for National Insurance rate and assigned 8%
      float tax_rate = 15.00;  //Initialised the variable for Tax Rate and assigned 15%
      float NI_contribution = 0.00;  //Initialised the variable for National Insurance contribution
      float tax_contribution = 0.00;  //Initialised the variable for Tax contribution
      float take_home_salary = 0.00;  //Initialised the variable for take home salary
      float salary_after_NI_contribution = 0.00; //Initialised the variable for salary after National Insurance contribution

    // calculate the deductions and final take-home salary

      // National Insurance Deductions:

      NI_contribution = salary * (NI_rate / 100); //Calculated the amount of National Insurance contribution and assigned it to its variable
      salary_after_NI_contribution = salary - NI_contribution; //Deducted the National Insurance contribution from the salary and assigned it to its variable

      // Tax Deductions:

      if (salary_after_NI_contribution > 12500.00) //Checks if salary is more than £12500 and elegible to be taxed
      {
         tax_contribution = (salary_after_NI_contribution - 12500.00) * (tax_rate / 100); //Calculated the amount of Tax contribution and assigned it to its variable

      }

      // Final Take-Home Salary:

      take_home_salary = salary_after_NI_contribution - tax_contribution; //Calculated the take-home salary and assigned it to its variable

    // Use only these print statement with appropriate formatting and variable names
      printf("Salary £%.2f\n",salary);
      printf("NI contribution £%.2f\n",NI_contribution);
      printf("Tax contribution £%.2f\n",tax_contribution);
      printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }