#include<iostream>
#include"importclass.cpp" // import class from another file
using namespace std;

// class - Template / Blueprint
class Hero{

    // Properties of a class
    int val;
};

// class - access

class Access{

    public:
    int accessMe;
    char accMe;
};

int main(){

    //Object of a class
    Hero prat;
    //Printing size of Hero prat object
    cout<<"Size of prat object: "<<sizeof(prat)<<endl;

    //Using imported class from another file
    import imp1;
    cout<<"Size of imp1 object: "<<sizeof(imp1)<<endl;
    

    // Accessing data members of a class
    Access A;
    cout<<"Access Me Integer Value is: "<<A.accessMe<<endl;
    cout<<"Access Me char value is : "<<A.accMe<<endl;


    return 0;
}


// Access Modifier: - Defines Scope of Variables 
// By default Private

/*
    Private:
    Can be access only inside the class.

    Public:

    Can be access Inside and Outside the class both

*/