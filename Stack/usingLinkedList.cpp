// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int val){
        data = val;
    }
};

class Stack{
    
    Node* head;
    int stack_size;
    
    public:
    
    Stack(){
        head = NULL;
        stack_size = 0;
    }
    
    void push(int val){
        
        Node* temp = new Node(val);
        
        temp->next = head;
        head = temp;
        stack_size++;
        
        cout<<"Element "<< val <<" pushed into stack"<<endl;
    }
    
    void pop(){
        
        if(stack_size == 0){
            cout<<"stack empty"<<endl;
            return;
        }
        
        Node* temp = head;
        head = head->next;
        delete(temp);
        stack_size--;
    }
    
    void top(){
        cout<<head->data<<endl;
        return;
    }
    
    void size(){
        cout<<"stack size is "<<stack_size<<endl;
        return;
    }
    
    int isEmpty(){
        if(stack_size == 0){
            return 0;
        }
        return 1;
    }
    
    void displayStack(){
        
        if(head == NULL){
            cout<<"Empty stack"<<endl;
            return;
        }
        cout<<"___"<<endl;
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
            temp = temp->next;
        }
        cout<<"___"<<endl;
        return;
    }
};

int main() {
    
    Stack s1;
    s1.displayStack();
    s1.push(3);
    s1.push(4);
    s1.push(12);
    s1.displayStack();
    
    s1.size();
    s1.top();
    
    
    return 0;
}
