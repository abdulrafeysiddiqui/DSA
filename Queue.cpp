#include <iostream>

#define MAX_SIZE 100

using namespace std;

class Queue {
	
private:
	
    int arr[MAX_SIZE];
    
    int front, rear;

public:
	
    Queue() {
    	
        front = -1;
        
        rear = -1;
    }

    bool isEmpty() {
    	
        return (front == -1 && rear == -1);
        
    }

    bool isFull() {
    	
        return (rear + 1) % MAX_SIZE == front;
        
    }

    void enqueue(int value) {
    	
        if (isFull()) {
        	
            cout << "Queue is full. Cannot enqueue.\n";
            
            return;
            
        } else if (isEmpty()) {
        	
            front = rear = 0;
            
        } else {
        	
            rear = (rear + 1) % MAX_SIZE;
            
        }
        
        arr[rear] = value;
        
        cout << value << " enqueued to the queue.\n";
        
    }

    void dequeue() {
    	
        if (isEmpty()) {
        	
            cout << "Queue is empty. Cannot dequeue.\n";
            
            return;
            
        } else if (front == rear) {
        	
            front = rear = -1;
            
        } else {
        	
            front = (front + 1) % MAX_SIZE;
        }
    }

    int getFront() {
    	
        if (isEmpty()) {
        	
            cout << "Queue is empty.\n";
            
            return -1;
        }
        
        return arr[front];
    }

    int getRear() {
    	
        if (isEmpty()) {
        	
            cout << "Queue is empty.\n";
            
            return -1;
            
        }
        
        return arr[rear];
        
    }
};

int main() {
	
    Queue queue;

    queue.enqueue(5);
    
    queue.enqueue(10);
    
    queue.enqueue(15);

    cout << "Front element: " << queue.getFront() << endl;
    
    cout << "Rear element: " << queue.getRear() << endl;

    queue.dequeue();

    cout << "Front element after dequeue: " << queue.getFront() << endl;

    // Additional enqueue and dequeue to demonstrate circular behavior
    
    queue.enqueue(20);
    
    queue.dequeue();

    cout << "Front element after enqueue and dequeue: " << queue.getFront() << endl;

    return 0;
}
