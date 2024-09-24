#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
        string proffesion(){
            return "I am a student";
        }
    private:
        string name ="omor faruk";
    public:
        string getname(){
            return name;
        }
        void setname(string name){
            this->name = name;
        }
};
int main(){
    Person omor;
    // cout << omor.name << endl;
    omor.setname("Abu bakar");
    cout << omor.getname() << endl;//getname er maddhome name niye asha
    return 0;
}