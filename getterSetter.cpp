#include<iostream>
using namespace std;

class Index{

    public:
    int val;
    char c;

    void print(){
        cout<<c<<endl;
    }

    // getter for int
    int getVal(){
        return val;
    } 

    // getter for char
    char getC(){
        return c;
    }

    // Setter int
    void setVal(int x){
        val = x;
    }

    // Setter val
    void setC(char y){
        c = y;
    }



};

int main(){

    Index I;
    I.setVal(10);
    I.setC('P');

    cout<<"Val is: "<<I.getVal()<<endl;
    cout<<"Char is: "<<I.getC()<<endl;
    
    return 0;
}