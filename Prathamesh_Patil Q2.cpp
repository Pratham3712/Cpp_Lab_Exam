/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
class named 'Rectangle' with a function named 'Area' which returns the area.Length*/
#include<iostream>
using namespace std;
class Rectangle
{
	public:
	int Area(int a,int b)
	{
		return a*b;
	} 
};

int main()
{
	Rectangle R1,R2;
	cout<<"==========================================\n";
	cout<<"Area of Rectangle R1 = "<<R1.Area(4,5);
	cout<<"\n\nArea of Rectangle R2 = "<<R2.Area(5,8);
	cout<<"\n==========================================";
}