#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name = name;
            this->age = age;
            cout << "constructor called" << endl;
        }
        string proffesion(){
            return "I am a student";
        }
};
class Student:public Person{
    public:
        int salary = 00000;
        Student(string name,int age): Person(name,age){
            cout << "student constructor called" << endl;
        }
};
int main(){
   Student omor("Omor faruk",20);
   cout << "my name is " << omor.name << endl << "my age is " << omor.age << endl;
   
 
    return 0;
}