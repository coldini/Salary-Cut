#include <stdio.h>
#include <stdlib.h>


#define FICA 7.6535/100
#define FEDERAL 22.0/100
#define STATE 7.0/100
#define LOCAL 1.5/100



double net_salary(double gross_salary, double parking, double gym );


int main(){

     double gross_salary, parking, gym, computed_salary;

	printf("What is your salary before deductions?");

	scanf("%lf",&gross_salary);

	printf("How much are you paying for parking? 75,100,125?");

	scanf("%lf", &parking);

	gym = 22.50;

	computed_salary = net_salary(gross_salary, parking, gym);
		
	printf("Your computed salary is %0.3lf \n", computed_salary);


return EXIT_SUCCESS;



}


double net_salary ( double gross_salary, double parking, double gym){


	double new_salary, fica_amount,fed_amount,state_amount,local_amount;

	new_salary = gross_salary;
	fica_amount = FICA * gross_salary;
	fed_amount = FEDERAL* gross_salary;
	state_amount = STATE * gross_salary;
	local_amount = LOCAL * gross_salary;

	
	printf("debug print: new salary is %lf\n", new_salary);

	new_salary = new_salary - fica_amount;
		printf("debug print: new salary is %lf\n", new_salary);
	new_salary = new_salary-fed_amount;
		printf("debug print:new salary is %lf\n", new_salary);

	new_salary = new_salary- state_amount;
		printf("debug print: new salary is %lf\n", new_salary);

	new_salary = new_salary- local_amount;
		printf("debug print: new salary is %lf \n", new_salary);
	new_salary = new_salary-parking;
		printf("debug print: new salary is %lf \n", new_salary);
	new_salary = new_salary-gym;
	printf("debug print: new salary is %lf /n", new_salary);

	
return new_salary;


}

