#include <iostream>
using namespace std;

//NODE CLASS REPRESENTATING A SINGLE NODE IN THE LINK LIST
class Node{
    public:
        int data;
        Node *next;

        Node(){
            next = NULL;
        }
};

//STACK CLASS
class Stack{
    private:
        Node *top; //Pointer to the top node of the stack

    public:
        Stack(){
            top = NULL; //Initialize the stack with a null top pointer
        }
};