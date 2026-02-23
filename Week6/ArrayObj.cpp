#include <iostream>
using namespace std;
class Student{
    public:
        int rollno;
        int marks;
        Student(){
            rollno=0;
            marks=0;
        }
        Student(int r,int m) : rollno(r),marks(m){}
        void display(Student s){
            cout<<"Roll no of the student:"<<s.rollno<<endl;
            cout<<"Marks of student: "<<s.marks<<endl;
        }
};
int main(){
    Student s[4];
    s[0] = Student(1, 85);
    s[1] = Student(2, 90);
    s[2] = Student(3, 78);
    s[3] = Student(4, 88);

    for (int i = 0; i < 4; i++) {
        s[i].display(s[i]);
    }
}