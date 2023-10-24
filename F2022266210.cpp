#include <iostream>

using namespace std;

class Stack {
	
private:
	
    int *dynamicarray;
    
    int size;
    
    int top;

public:
	
    Stack() {
    	
        size = 5;
        
        top = -1;
        
        dynamicarray = new int[size];
        
    }

    bool push(int x) {
    	
        if (isFull()) {
        	
            cout << "Stack Overflow" << endl;
            
            return false;
            
        } else {

            top++;
            
            dynamicarray[top] = x;
            
            return true;
            
        }
        
    }

    int pop() {
    	
        if (isEmpty()) {
        	
            cout << "Stack Underflow" << endl;
            
            return -1; // Return a special value to indicate failure
            
        } else {
        	
            int x = dynamicarray[top];
            
            top--;
            
            return x;
            
        }
    }

    bool isFull() {
    	
        return top == size - 1;
        
    }

    bool isEmpty() {
    	
        return top == -1;
        
    }

    void display() {
    	
        for (int i = top; i >= 0; i--) {
        	
            cout << dynamicarray[i] << endl;
            
        }
        
    }

    ~Stack() {
    	
        delete[] dynamicarray;
        
    }
    
};

int main() {
	
    Stack s;

    s.push(5);
    
    s.push(10);
    
    s.push(11);

    s.display(); // Display is connected to POP, when Display is called - The value gets popped

    if (s.isFull()) {
    	
        cout << "The stack is full." << endl;
        
    }

    if (s.isEmpty()) {
    	
        cout << "The stack is empty." << endl;
        
    }

    return 0;
}
