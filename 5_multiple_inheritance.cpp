#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name = name;
            this->age = age;
            cout << "Person constructor called" << endl;
        }
        
};
class Student{
    public:
        int roll;
        int class_name;
        Student(int roll,int class_name){
            this->roll = roll;
            this->class_name = class_name;
            cout << "studend destructor called" << endl;
         } 
       
};

class Boy:public Person,public Student{
    public:
        Boy(string name,int age,int roll,int class_name):Person(name,age),Student(roll,class_name){
            cout << "child class constructor called" << endl;
        }

};
int main(){
    Boy omor("omor",20,527461,14);
    cout << "Hi my name is " << omor.name << " and i am " << omor.age << " years old " << " i read in class " << omor.class_name << " and my class roll is " << omor.roll << endl;
    return 0;
}