// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Stack{
    
    public:
        int *arr;
        int top;
        int stack_size;
    
    
    Stack(int val){
        stack_size = val;
        arr = new int[val];
        top = -1;
    }
    
    void push(int val){
        
        if(top == stack_size-1){
            cout<<"Stack overflow";
            return;
        }
        
        top++;
        arr[top] = val;
        cout<<"Element "<< val <<" pushed into stack"<<endl;
    }
    
    void pop(){
        top--;
    }
    
    int peek(){
        return arr[top];
    }
    
    int size(){
        return stack_size;
    }
    
    bool isEmpty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }
    
    void displayStack(){
        for(int i=top; i>-1; i--){
            cout<<arr[i]<<endl;
        }
        return;
    }
};

int main() {
    Stack s1(20);
    s1.push(12);
    s1.push(40);
    s1.push(3);
    s1.displayStack();
    s1.pop();
    s1.pop();
    s1.displayStack();
    cout<<s1.isEmpty()<<endl;
    cout<<s1.peek();
    return 0;
}
