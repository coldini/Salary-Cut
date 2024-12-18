#include  <stdio.h>
#include <stdlib.h>


/*
*  Programmer Name: Colden Jeanmonod
* Course and semester 1057 section 004 fall 2023
* Assignment name: Salary
* Due by Oct 4 2023
*/

//Basic Deductions 
#define FICA 7.6535/100
#define FEDERAL 22.0/100
#define STATE 7.0/100
#define LOCAL 1.5/100

//Functions needed for completipn

double prompt_for_parking( void );
double prompt_gross_salary( void);
double compute_net_salary( double gross_salary, double parking,  double gym );



//This is the main function that everything runs out of.
int main () {
//These are the local variables that are needed to make the program work correctly
double gross_salary, parking, gym, compute_salary;

//This calls the function prompt gross salary so that the gross salary may be used later
gross_salary = prompt_gross_salary();

//This calls the function for prompt for parking so that the parking value may be used later in the code,
parking = prompt_for_parking();

//This just fills the gym variable with the basic cost of the gym membership.
gym = 22.50;

//This calls the compute net salary function so that the main goal of the program can be accomplished.
compute_salary = compute_net_salary(gross_salary, parking, gym);

//This just prints out the deducted salry 
printf("Your salary after deductions is %0.3lf \n", compute_salary);

return EXIT_SUCCESS;
}


/*
* Function name: compute_net_salary
* Descripion: outputs a deducted salary after teaxes and company costs
* Preconditions: gross_salary- A double representing the salar before deductions
* Preconditions(cont): parking- A double representing the amount owed for company parking.
* Preconditions(cont): gym-A double that simply represents the amount owed for a gym membership.
* postconditions: none
* Return value: new_salary-the Gross salary deducted by taxes and things owed by the company
* Globals: FICA, FEDERAL, STATE, LOCAL
*/

double compute_net_salary(double gross_salary, double parking, double gym){
//Local variables used in this function to help with keeping the information straight.
double  new_salary, fica_amount, fed_amount, state_amount, local_amount;
	//The variable new salary is to just hold the gross_salary unchanged
	new_salary = gross_salary;
	//These amount variables store the money dedcuted from the gross salary to be subtracted later
	fica_amount = gross_salary*FICA;
	fed_amount = gross_salary*FEDERAL;
	state_amount= gross_salary*STATE;
	local_amount =gross_salary*LOCAL;

	//The following just deduct all the fees from the slary variable
	new_salary = new_salary-fica_amount;
	new_salary = new_salary-fed_amount;
	new_salary = new_salary-state_amount;
	new_salary = new_salary-local_amount;
	new_salary = new_salary-parking;
	new_salary = new_salary-gym;

	//This just returns the salary after the deductions	
	return new_salary;

}


/*
* Function: prompt_gross_salary
* Description: returns the salary after the user puts in the input
* Preconditions: none
* Postconditions: None
* Return Value: salary-user inputted salary
* Globals: none
*/
double prompt_gross_salary( void ){
	//The variable that just holds the user inputted salary
	double salary;
	//This just asks what the users gross salary and then stores that value in the variable.
  printf("What was your gross salary for the year? \n");
  scanf("%lf", &salary);


//This is just the user inputted salary that was inoutted. 
return salary;

}

/*
* Function: prompt_for_parking
* Description: retuns the parking cost that the user inputs
* Preconditions: none
* Postconditions: none
* Return: type-user inputted parking cost
* Global: none
*/
double prompt_for_parking( void ){
	//This is just a holder value for the parking 
	double type;

//This just asks for the user prompt and stores the values
printf("Is the parking you owe? Is it 75, 100, or 125 dollars?  \n");
scanf("%lf", &type);
//just returns the value that the user inputted
return type;
	

}
