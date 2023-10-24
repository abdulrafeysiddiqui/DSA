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
    	
        if (top < size - 1) {
        	
            top++;
            
            dynamicarray[top] = x;
            
            return true;
            
        } else {
        	
            cout << "Stack Overflow" << endl;
            
            return false;
            
        }
    }

    int pop() {
    	
        if (top >= 0) {
        	
            int x = dynamicarray[top];
            
            top--;
            
            return x;
            
        } else {
        	
            cout << "Stack Underflow" << endl;
            
            return -1; // Return a special value to indicate failure
        }
    }

    ~Stack() {
    	
        delete[] dynamicarray;
        
    }
};

int main() {
	
    Stack s;

    s.push(5);
    
    int poppedValue = s.pop();
    
    if (poppedValue != -1) {
    	
        cout << "Popped value: " << poppedValue << endl;
        
    }
    
    return 0;
}

