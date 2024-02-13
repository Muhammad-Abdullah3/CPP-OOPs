/*Write a class vehicle and create two functions in private and one in public, two function in private will be input() and display()
Function in public will be set() that will use the private function. 
Data Members are of string data type, and an integer array. The array will store true if the character at the specific index is a vowel
and false if it is a consonant
*/

#include<iostream>
#include<string>
using namespace std;
class Vehicle
{
	private:
		string name;
		int arr[5];
		void input()
		{
			cout<<"Enter the name of the vehicle:";
			getline(cin,name);
			cout<<"Enter the values of the array: ";
			for(int i = 0; i<5;i++)
				cin>>arr[i];// name.at(i)
		}
		public:
		void display();
		Vehicle()
		{
			cout<<"An object is created."<<endl;
			name = "Car";	
		}
		void set();
};
void Vehicle::display()
{
	cout<<name<<endl;
//	for(int i = 0; i<5;i++)
//				cout<<arr[i]<<endl;
}
void Vehicle::set()
{
	input();
	for(int i=0;i<(name.length());i++)
	{
		if(name.at(i)=='a'||name.at(i)=='e'||name.at(i)=='i'||name.at(i)=='o'||name.at(i)=='u')
			cout<<"The character at index "<<i<<" a vowel."<<endl;
		else
			cout<<"The character at index "<<i<<" is not a vowel."<<endl;
	}
	display();
}
int main()
{
	Vehicle v1;
	v1.display();
	/*v1.set();
	Vehicle v2,v3,v4,v5,v6;
	v2.display();
	v3.display();
	v4.display();*/
	return 0;
}