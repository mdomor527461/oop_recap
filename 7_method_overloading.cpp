#include<bits/stdc++.h>
using namespace std;
//creating c++ class
class Calculator{
    public:
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }
       

};
int main(){
    Calculator casio;
    cout << casio.sum(10,20) << endl;
    cout << casio.sum(10,20,50) << endl;
    return 0;
}