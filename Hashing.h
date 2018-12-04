/*
    Maxwell Goulding-Miles
    CS 300
    Fatma Serce
    Assignment 5
*/

#include "LinkedList.h"
#include "UPC.h"
#include <iostream>

using namespace std;

class Hashing{
    LinkedList<UPC> hashmap[1000];

    public:
    Hashing(){

    }

    ~Hashing(){

    }

    // Returns the index of where to insert the UPC
    unsigned long long getIndex(UPC current){
        unsigned long long index = stoull(current.upc) % 1000;
        return index;
    }

    // Calls the getIndex function and inserts the UPC object
    // into the returned index's linked list
    void insertValue(UPC current){
        int index = getIndex(current);
        hashmap[index].inserFirst(current);
    }

    // Searches for a matching UPC code from the given UPC,
    // loops through the correct index's linked list until it has
    // found the right item, and returns the name of the item
    string search(UPC _toFind){
        int index = getIndex(_toFind);
        node<UPC>* current = hashmap[index].head;
        while (current != NULL){
            if (current->data.upc == _toFind.upc){
                return current->data.name;
            } else {
                current = current->next;
            }
        }
        return "not found";
    } 
};