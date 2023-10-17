#include <iostream>

using namespace std;

class MyArray {
	
private:
	
    int size;
    
    int index = 0;
    
    int* arr;

public:
	
    MyArray(int capacity) {
    	
        arr = new int[capacity];
        
        size = capacity;
        
    }

    void display() {
    	
        for (int i = 0; i < size; i++) {
        	
            cout << arr[i] << " ";
            
        }
        
        cout << endl;  // Add a line break to separate the output.
        
    }

    void MaxArray(int val) {
    	
        if (index < size) {
        	
            arr[index] = val;
            
            index++;
            
        }
        
        else {
        	
            cout << "Array is full" << endl;
            
        }
        
    }

    void remove(int removeIndex) {
    	
        if (removeIndex >= 0 && removeIndex < size) {
        	
            for (int i = removeIndex; i < size - 1; i++) {
            	
                arr[i] = arr[i + 1];
                
            }
            
            index--;  // Decrement the index after removing an element.
            
        }
        
        else {
        	
            cout << "Invalid index for removal" << endl;
            
        }
    }

    void search(int value) {
    	
        for (int i = 0; i < size; i++) {
        	
            if (arr[i] == value) {
            	
                cout << "The value is at index " << i << endl;
                
            }
            
        }
        
    }

    int sum() {
    	
        int sum = 0;
        
        for (int i = 0; i < size; i++) {
        	
            sum += arr[i];
        }
        
        return sum;
    }

    float average() {
    	
        float avg = static_cast<float>(sum()) / size;
        
        return avg;
    }

	int slice(int start, int end){
	
		
		
		}
	}
	
    ~MyArray() {
    	
        delete[] arr; // Deallocate the dynamically allocated array in the destructor.
    }
};

int main() {
	
    MyArray ID(10);

    arr.MaxArray(8);
    arr.MaxArray(1);
    arr.MaxArray(9);
    arr.MaxArray(4);
    arr.MaxArray(5);

    arr.display();
    
    cout << "Sum: " << arr.sum() << endl;
    
    cout << "Average: " << arr.average() << endl;

    arr.remove(3);
    
    arr.search(8);
	
	int * sliced = arr.slice(2, 4);
	
	for (int i = 0; i < 2; i ++){
		
		cout << *(slice )
	}
    return 0;
}

