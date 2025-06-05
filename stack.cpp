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

        //Push operation: Insert an element onto the top od the stack
        int push(int value){
            Node *newNode = new Node(); 
            newNode->data = value;
            newNode->next = top;
            top = newNode;
            cout << "Push Value" << value << endl;
            return value;
        }
};