#include <iostream>
using namespace std;
class Student
{
	char* name;
	char* email;
	int age;
public:
	Student()
	{
		name = nullptr;
		email = nullptr;
		age = 0;
	}
	Student(const char* n, const char* b, int a)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		email = new char[strlen(b) + 1];
		strcpy_s(email, strlen(b) + 1, b);
		age = a;
	}
	~Student()
	{
		delete[] name;
		delete[] email;
	}
	void Input()
	{
		char buff[64];
		cout << "enter name: ";
		cin >> buff;
		if (name != nullptr)
		{
			delete[]name;
		}
		name = new char[strlen(buff) + 1];
		strcpy_s(name, strlen(buff) + 1, buff);
		cout << "Enter email: ";
		for (int i = 0; i < 64; i++)
		{
			buff[i] = 0;
		}
		cin >> buff;
		if (email != nullptr)
		{
			delete[]email;
		}

		email = new char[strlen(buff) + 1];
		strcpy_s(email, strlen(buff) + 1, buff);
		cout << "Enter age: ";
		cin >> age;


	}
	void Print()
	{
		cout << "Name: " << name << "\tEmail: " << email << "\tAge: " << age << endl;
	}
};
int main()
{
	Student a;
	Student b("Oleg", "Oleg@gmail.com", 20);
	b.Print();
	b.Input();
	b.Print();

}