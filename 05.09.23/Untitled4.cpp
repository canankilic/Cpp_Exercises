#include <iostream>
using namespace std;

struct Student{
	int id;
	char letter;
};

int main()
{
	cout << "Int " << sizeof(int) << endl;
	cout << "Char " << sizeof(char) << endl;
	cout << "double " << sizeof(double) << endl;
	
	cout << "Struct " << sizeof(Student) << endl;
	
	return 0;
}
