#include <iostream>
using namespace std;

class Test{
	private: 
		int a;
	public:
		
		Test(int a)
		{
			this->a = a;
		}
		
		void test()
		{
			cout << "Test Metodu" << endl;
		}
		
		int getValue ()const
		{
		
			//this ->a = 20; 16	13	[Error] assignment of member 'Test::a' in read-only object
			return this->a;
		}
};

int main()
{
	Test test1(10);
	
	cout << test1.getValue() << endl;


	
	
	return 0;
}
