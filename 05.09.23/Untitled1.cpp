#include <iostream>
using namespace std;

struct Employee {
	int id;
	string name;
	string department;	
	
};

void showEmployee(Employee employee)
{
	cout << "Id: " << employee.id << endl;
	cout << "Name: " << employee.name << endl;
	cout << "Department: " << employee.department << endl;

}

void show(Employee* ptremp)
{
	cout << "Id: " << ptremp->id << endl;
}
int main()
{
	Employee employee1 = {12, "canan kilic", "computer"};
	show(&employee1);
	
	return 0;
}
