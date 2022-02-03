#include <iostream>

using namespace std;
const int numbers = 20;
int top = -1;
int stack[numbers];

int isFull()
{
    if (top == numbers - 1)
        return 1;
    return 0;
}
void push(int data){
    if(!isFull()){
        top++;
        stack[top] = data;
        
    }else{
        cout << "Stack overflow";
    }

}
int isEmpty(){
    if(top == -1)
        return 1;
    return 0;

}
void pop(){
    if(!isEmpty()){
        top--;
    }
    else{
        cout << "The stack underflow";
    }
}

int peek(){
    if(!isEmpty())
        return stack[top];
    return INT16_MIN;   

}
void display(){
    if(!isEmpty()){
        for(int i=top;i>=0;i--){
            cout << stack[i] << endl;
        }
    }
}

int main(){
    int option;
    int exit;

    cout << "chose 1: to push " << endl
         << "choose 2: to peek " << endl
         << "choose 3: to pop "
         << "choose 4: to display " << endl
         << "choose 5: to exit " << endl;
    cin >> option;
    // cout << "The exit works";
    
push(400);
while(exit != 5){
    if (option == 1)
    {
        push(200);
        cout << "Press 5 to exit or any number to continue ";
        cin >> exit;
        continue;
    }
    else if (option == 2)
    {
        peek();
    }
    else if (option == 3)
    {
        pop();
    }
    else if (option == 4)
    {
        display();
    }
    else
    {
        cout << "Invalid option but your current stack is: ";
        display();
    }
}


    return 0;
}