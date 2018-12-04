/*
    Maxwell Goulding-Miles
    Fatma Serce
    Assignment #5
    CS 300
*/

#include <iostream> 
#include <sstream>
#include <fstream>
#include <string>
#include <time.h>
#include "Hashing.h"

using namespace std;

Hashing hashmap;
string upc, name;
clock_t t;
ifstream myfile;


int main(){
    myfile.open("upc_corpus.txt");
    getline(myfile, name);
    //hashmap.getIndex(UPC("12345","testing"));
    unsigned long long test;

    while (!myfile.eof()){
        getline(myfile, upc, ',');
        getline(myfile, name);
        UPC temp (upc, name);
        hashmap.insertValue(temp);
    }
    string userinput;
    getline(cin, userinput);
    UPC temp (userinput);
    t = clock();
    cout << hashmap.search(temp) << endl;
    t = clock() - t;
    cout << "Time: " << t << " milliseconds" << endl;
}