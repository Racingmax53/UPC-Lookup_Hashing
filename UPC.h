/*
        Maxwell Goulding-Miles
        Fatma Serce
        Assignment #5
        CS 300
*/
#include <iostream>
#include <stdlib.h>

using namespace std;
class UPC{
    public:
    string upc;
    string name;

    UPC(){

    }

    UPC(string _upc){
        upc = _upc;
    }

    UPC(string _upc, string _name){
        upc = _upc;
        name = _name;
    }

    void toString(){
        cout << upc << " " << name << endl;
    }

    bool operator < (UPC other){
        if (upc.length() < other.upc.length()){
            return true;
        } else {
        return upc < other.upc;
        }
    }

    bool operator > (UPC other){
        if (upc.length() > other.upc.length()){
            return true;
        } else {
        return upc > other.upc;
        }
    }
};