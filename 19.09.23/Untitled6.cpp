#include <iostream>

using namespace std;

class Employee{
	private:
		string name;
		int age;
		int salary;
	
	public:
		Employee(string name, int age, int salary)
		{
			this->name = name;
			this->age = age;
			this->salary = salary;	
		}
		
		friend void showInfos(Employee employee);
		
};

void showInfos(Employee employee)
{
	cout << employee.name << " " << employee.age << " " << employee.salary << endl;
}

int main()
{
	Employee emp("Canan", 24, 2333432);
	
	showInfos(emp);
	
	
	return 0;
}
