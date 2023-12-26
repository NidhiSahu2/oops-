#include<iostream>
using namespace std;
class Address
{
public:
string city,countre;
Address(string city,string countre)	
{
	this->city=city;
	this->countre=countre;
}
	
};
class student
{
	Address* address;
	public:
	int roll;
	string name;
	student(int roll , string name, Address* address){
	
	this->roll=roll;
	this->name=name;
	this->address=address;
}
	void display()
	{
		cout<<roll<<" "<<name<<" "<<" "<<address->city<<" "<< address->countre<<endl;
	}
	
};
int main()
{
Address a1("new york","USA");
student s1(10,"sum",&a1);
s1.display();
	
}
