/*Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class. Write
member functions to accept and display Student information also display count of students. (Use Static
data member and Static member function)*/
#include<iostream>
using namespace std;
class Student
{
	private:
		   int Roll_No;
		   string student_Name;
	
	public:
	
	  void Set_Data()
	{
		
		
		cout<<"\nEnter Name of Student--> ";
		cin>>student_Name;
		cout<<"\nEnter Roll No--> ";
		cin>>Roll_No;
	}
	
	   void Display_Data()
	{
		
		
		cout<<"\n\nStudent Name : "<<student_Name;
		cout<<"\nStudent Roll No : "<<Roll_No;
		cout<<"\n\n=======================================";
	  	
	}	
};

int main()
{
	Student s;
	int Size,i,count=0;
	
	cout<<"\nHow Many Students Data You Want To Enter ";
	cin>>Size;
	for(i=0;i<Size;i++)
	{
		s.Set_Data();
		s.Display_Data();
		count++;
	}
	cout<<"\n\nCount of Total Student = "<<count;
	
}