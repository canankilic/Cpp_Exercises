// Example rno, name, fee

#include <iostream>
#include "string.h"

class User{
	private:
		int rno;
		char name[50];
		int fee;
		
	public:
		User(int, char[], int);
		Display();
		~User();
		
};

User::User(int numara, char isim[], int para)
{
	rno= numara;
	strcpy(name, isim);
	fee = para;
}

User::Display()
{
	cout << "Number: " << User.rno << "\nName: " << User.name << "\nFee: " << User.fee << endl;
}



int main()
{
	User* myUser = new User(123, "Canan", 500);
	
	myUser->Display();
	
	destroy myUser;
	
	return 0;
}
