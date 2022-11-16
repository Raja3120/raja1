#include<iostream>
using namespace std;
class student{
    int roll_no;
    string name;
    public:
    void read(int a,string x)
    {   name=x;
        roll_no=a;
    }
    void display()
    {   cout<<"student name is"<<"\t"<<name;
        cout<<"\nstudent roll no"<<"\t"<<roll_no;
    }
};
int main(){
    student raja;
    raja.read(3,"raja");
    raja.display();
    return 0;
}