#include <iostream>
#include <stack>
#include <string>

using namespace std;

class MinStack {
	
private:
	
    stack<int> mainStack;
    
    stack<int> minValStack;

public:
	
    void push(int x) {
    	
        mainStack.push(x);
        
        if (minValStack.empty() || x <= getMin()) {
        	
            minValStack.push(x);
            
        }
    }

    void pop() {
    	
        if (!mainStack.empty()) {
        	
            if (mainStack.top() == getMin()) {
            	
                minValStack.pop();
                
            }
            
            mainStack.pop();
            
        }
        
    }

    int top() {
    	
        return mainStack.empty() ? -1 : mainStack.top();
        
    }

    int getMin() {
    	
        return minValStack.empty() ? -1 : minValStack.top();
        
    }
    
};

bool isBalancedExpression(const string &expression) {
	
    stack<char> brackets;

    for (size_t i = 0; i < expression.size(); ++i) {
    	
    	char c = expression[i];
    	
        if (c == '(' || c == '{' || c == '[') {
        	
            brackets.push(c);
            
        } else if (c == ')' || c == '}' || c == ']') {
        	
            if (brackets.empty() || (c == ')' && brackets.top() != '(') ||
            
                (c == '}' && brackets.top() != '{') || (c == ']' && brackets.top() != '[')) {
                	
                return false;
                
            }
            
            brackets.pop();
            
        }
        
    }

    return brackets.empty();
    
}

int main() {
	
    string expression = "{[()]()}";
    

    if (isBalancedExpression(expression)) {
    	
        cout << "The expression is balanced." << endl;
        
    } else {
    	
        cout << "The expression is not balanced." << endl;
        
    }

    MinStack minStack;

    minStack.push(3);
    
    minStack.push(5);
    
    minStack.push(2);
    
    minStack.push(1);

    cout << "Minimum value: " << minStack.getMin() << endl;

    minStack.pop();
    
    minStack.pop();

    cout << "Minimum value after popping: " << minStack.getMin() << endl;

    return 0;
}

