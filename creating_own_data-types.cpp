//struct
//example

#include <iostream>
#include <vector>

using namespace std;

struct Student{
    int id;
    int age;
    double gpa;
};

struct Point{
    double x;
    double y;
};

int main(){
    Student s;
    s.id=101;
    s.age=21;
    s.gpa=3.85;
    cout <<"Student ID: " <<s.id <<endl;
    vector <Student>students;
    students.push_back({202,22,3.95});
    students.push_back({303,20,3.90});
    students.push_back(s);
    students.push_back({404,23,4.0});

    Point p1;
    p1.x=4;
    p1.y=5;
    cout <<"Point coordinates: (" <<p1.x <<", " <<p1.y <<")" <<endl;


}
