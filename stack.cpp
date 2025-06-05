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
            Node *newNode = new Node();             //1. Alocate memory for the new node
            newNode->data = value;                  //2. Assign value
            newNode->next = top;                    //3. Set the next pointer of the new node to the current
            top = newNode;                          //4. Update the top pointer to the new node
            cout << "Push Value" << value << endl;
            return value;
        }

        //IsEmpty operation: Check if the stack is empty
        bool isEmpty(){
            return top == NULL; //Return true if the top pointer is NULL, indicating an empty stack
        }

        //Pop operation: Remoce the topmost element drom the stack
        void pop(){
            if (isEmpty()){
                cout << "Stack Is Empty." << endl;
                return; //If the stack is empty, print a message and return
            }
            cout << "Popped Value " << top->data << endl;
            top = top->next; //Update the top pointer to the next node
        }

        //Peek/Pop operation: Retrieve the value of the topmost element withoit removing it
        void peek(){
            if(isEmpty()){
                cout << "List Is Empty." << endl;
                return; //If the stack is empty, print a message and return
            }
            else{
                Node *current = top;
                while (current != NULL){
                    cout << current->data << " " << endl;
                    current = current->next;
                }
                cout << endl;
            } //Return the value of the top node
        }
};

int main(){
    Stack stack;

    int choice = 0;
    int value;

    while(choice !=4){
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: \n";
        cin >> choice;

        switch (choice){
            case 1:
                cout << "Enter The Value To Push: ";
                cin >> value;
                stack.push(value); //Push the entered value onto the stack
                break;
            case 2:
                stack.pop(); //Pop the topmost element from the stack
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                cout << "Exiting Program." << endl;
                break;
            default:
                cout << "Invalid Choice. Try Again." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}