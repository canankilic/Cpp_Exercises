#include <iostream>

using namespace std;

class Employee{
	private:
		string name;
		int age;
		
	public:		
		void setAge(int yas)
		{
			if (yas < 0)
			{
				cout << "Invalid value" << endl;
			}
			else
			{
				age = yas;
			}
			
		}
		void setName(string isim)
		{
			name = isim;
		}	
		
		
		string getName()
		{
			return name;
		}	
		int getAge()
		{
			return age;
		}
		
};


int main()
{
	Employee* employee = new Employee();
	
	employee->setName("canan");
	employee->setAge(25);
	
	cout << employee->getName() << endl;
	cout << employee->getAge() << endl;

	
	
	return 0;
}
