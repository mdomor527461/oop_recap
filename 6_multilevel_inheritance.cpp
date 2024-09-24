#include<bits/stdc++.h>
using namespace std;
class GrandFather{
    public:
        void dada(){
            cout << "tera baap ka baap hu be thoda sa sambhal ke" << endl;
        }
};
class Father:public GrandFather{
    public:
        void baap(){
            cout << "baap baap hota hai" << endl;
        }
};
class Child:public Father{
    public:
        void sele(){
            cout << "naya jamane ka ladka hu samajhne main thoda sa mushkil to hogai" << endl;
        }
};
int main(){
    Child rocky;
    rocky.dada();
    rocky.baap();
    rocky.sele();
    return 0;
}