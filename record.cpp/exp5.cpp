#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Student
{
public:
    string name;
    int mark;
    char grade;
};

int main()
{
    vector<Student> students = {
        {"Arun", 85, ' '},
        {"Bala", 72, ' '},
        {"Kumar", 91, ' '},
        {"Ravi", 65, ' '}
    };

    // Sort students based on marks
    sort(students.begin(), students.end(),
         [](const Student& a, const Student& b)
         {
             return a.mark > b.mark;
         });

    // Assign grades using transform
    transform(students.begin(), students.end(), students.begin(),
              [](Student student)
              {
                  if (student.mark >= 90)
                  {
                      student.grade = 'A';
                  }
                  else if (student.mark >= 75)
                  {
                      student.grade = 'B';
                  }
                  else if (student.mark >= 50)
                  {
                      student.grade = 'C';
                  }
                  else
                  {
                      student.grade = 'F';
                  }
                  return student;
              });

    // Find the first student scoring above 80
    auto it = find_if(students.begin(), students.end(),
                      [](const Student& student)
                      {
                          return student.mark > 80;
                      });

    // Calculate total marks using accumulate
    int total = accumulate(students.begin(), students.end(), 0,
                           [](int sum, const Student& student)
                           {
                               return sum + student.mark;
                           });
    double average = students.empty()
                         ? 0.0
                         : static_cast<double>(total) / students.size();

    // Display results
    cout << "Student Grade Analyzer\n";
    cout << "---------------------\n";
    cout << "Name\tMark\tGrade\n";
    for (const Student& student : students)
    {
        cout << student.name << "\t"
             << student.mark << "\t"
             << student.grade << endl;
    }

    if (it != students.end())
    {
        cout << "\nFirst student scoring above 80: "
             << it->name << endl;
    }

    cout << "Total Marks: " << total << endl;
    cout << "Average Mark: " << average << endl;
    return 0;
}
