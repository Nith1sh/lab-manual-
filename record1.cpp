#include <iostream>
using namespace std;
class Student {
    private:
        string rollNO;
        int name;
    public:
        //constructor
        Student(string r, int n) {
            rollNO = r;
            name = n;
        }

        //Member function to display roll number and name
        void display() {
            cout << "Student object created with Roll Number: " << rollNO << endl;
        }
        // Destructor
        ~Student() {
            cout << "Destructor called for Student with Roll Number: " << rollNO << endl;
        }
};  
int main() {
    // Creating an object of Student class
    Student s1("A123", 20);
    s1.display();
    
    return 0;
}