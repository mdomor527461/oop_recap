#include<bits/stdc++.h>
using namespace std;
//creating c++ class
class Person{
    public:
        //attributes or properties
        string name;
        int age;
        int salary = 00000;
        string qualification = "Diploma Engineer";
        //constructor
        Person(string name,int age){
            this->name = name;
            this->age = age;
            cout << "constructor called" << endl;
        }
        ~Person(){
            cout << "destructor called" << endl;
        }
        //class method
        void work(){
            cout << "I am a Programmer" << endl;
        }

};
int main(){
    Person omor("Omor Faruk",20);
    omor.work();
    cout << "my name is " <<  omor.name << endl;
    cout << "and i am " << omor.age << " years old" << endl;
    //dynamic object
    // Person * omor = new Person("omor",20);
    // cout << omor->age << endl;
    // cout << omor->name << endl;
    return 0;
}