#include "employee.h"
#include "employee.cpp"

int main()
{
	employee employee;
	
	employee.id = 12;
	
	employee.name = "Canan";
	
	employee.salary = 300000;
	
	employee.showInfos();
	
	return 0;
}
