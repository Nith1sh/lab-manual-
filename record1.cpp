#include <iostream>
using namespace std;
class Student 
{
private:
    int rollNO;
    string name;
public:
//constructor 5
Student(int r, string n) 
{
rollNO = r;
name = n;
cout << "student object created "<< endl;
 }

// Member function
void display() 
{
cout << "Roll Number: " << rollNO << endl;
cout << "Name: " << name << endl;
}
// Destructor
~Student() 
{
cout << "student object destroyed "<< endl;
}
};  
int main() 
{
Student s1(101, "Arun");
s1.display();
return 0;
}