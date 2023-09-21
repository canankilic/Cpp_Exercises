#include <iostream>
using namespace std;

struct Address{
	string cityName;
	int No;
	
};

struct Employee{
	int id;
	string name;
	string department;
	Address* address;
};

int main()
{
	Employee employee;
	employee.id = 12;
	employee.name = "canan";
	employee.department = "comp";
	
	Address adres = {"ankara", 5};
	
	employee.address = &adres;
	
	Employee* ptr = &employee;
	
	cout << ptr->address->cityName << endl;
	cout << employee.address->cityName << endl;
	
	return 0;
}
