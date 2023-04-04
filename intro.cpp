#include<iostream>
#include"importclass.cpp" // import class from another file
using namespace std;

// class - Template / Blueprint
class Hero{

    // Properties of a class
    int val;
};



int main(){

    //Object of a class
    Hero prat;
    //Printing size of Hero prat object
    cout<<"Size of prat object: "<<sizeof(prat)<<endl;

    //Using imported class from another file
    import imp1;
    cout<<"Size of imp1 object: "<<sizeof(imp1)<<endl;
    


    return 0;
}