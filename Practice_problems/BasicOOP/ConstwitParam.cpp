#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		int age;
		string name;
	public:
		Student(int a,string n)
		{
			age = a;
			name = n;
			//cout<<"Object Created successfully";
		}	
		void display()
		{
			cout<<"\nName of the student:"<<name;
			cout<<"\nAge of the student:"<<age;
		}
};
int main()
{
	Student s1(19,"Sojhla Zaheen");
	s1.display();
	return 0;
}