#include <iostream>
using namespace std;
class Student 
{
private:
    int rollno1;
    string name;
public:
//constructor 5
Student(int r, string n) 
{
rollno1 = r;
name = n;
cout << "student object created "<< endl;
 }

// Member function
void display() 
{
cout << "Roll Number: " << rollno1 << endl;
cout << "Name: " << name << endl;
}
// Destructor
~Student() 
{
cout << "student object destroyed "<< endl;
}
};  
int main() {
    int rollno;
    string name;
    cout << "Enter Roll Number: "<<endl;
    cin >> rollno;
    cout << "Enter Name: "<<endl;
    cin >> name;
    Student s1(rollno,name);
s1.display();

return 0;
}