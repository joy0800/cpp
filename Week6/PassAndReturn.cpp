#include <iostream>
using namespace std;
class Student{
    public:
        char grade;
        int rollno;
        int marks;
    Student invalues(char grade,int rollno,int marks){
        Student s;
        s.grade=grade;
        s.rollno=rollno;
        s.marks=marks;
        return s;
    }
    void display(Student s){
        cout<<"Rollno of student: "<<s.rollno<<endl;
        cout<<"Grade of student: "<<s.grade<<endl;
        cout<<"Marks of student: "<<s.marks<<endl;
    }
};
int main(){
    Student obj;
    obj=obj.invalues('A',106,99);
    obj.display(obj);
    return 0;
}