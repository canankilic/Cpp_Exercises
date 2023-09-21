#include <iostream>
// BELLEK SIZINTISI
using namespace std;

class Employee{
	public:
		string *s;
		int *i;
		
		
		Employee(string str, int ivalue)
		{
			s = new string;
			i = new int;
			
			*s = str;
			*i = ivalue;
		}
		
		void show()
		{
			cout << "String: " << *s << "\nInt: "<< *i;
		}
		
		~Employee(){
			delete s;// BELLEK SIZINTISI engelleme
			delete i;// BELLEK SIZINTISI engelleme
			cout << "\nDestructor called. " << endl;
		}
};

int main()
{
	Employee *emp = new Employee("Canan", 24);
	
	emp->show();
	
	delete emp; // *empin bellekte kapladigi yeri siler
	return 0;
}
