#include <iostream>

using namespace std;

class Employee{
	public:
		Employee()
		{
			cout << "Constructor called." << endl;
		}
		
		~Employee(){
			cout << "Destructor called. " << endl;
		}
};

int main()
{
	Employee *emp = new Employee();
	
	delete emp; // *empin bellekte kapladigi yeri siler
	return 0;
}
