#include <iostream>

using namespace std;

int main() {
	
    int size = 1; // Initial size of the array
    
    int capacity = size; // Capacity of the array
    
    int *array = new int[capacity]; // Dynamically allocate memory for the initial array

    int numElements = 0; // Number of elements currently in the array
	
	cout << "------------------------------" << endl;
	
	cout << "Abdul Rafey Siddiqui" << endl;
	
	cout << "------------------------------" << endl;
	
	cout << endl;
	
    cout << "Enter elements for the array (enter -1 to stop):" << endl;

    int input;
    
    while (true) {
    	
    	cout << endl;
    	
        cin >> input;

        if (input == -1) {
        	
        	break;
            
        }

        // Check if the array is full, if yes, resize it by doubling its capacity
        
        if (numElements >= capacity) {
        	
            int *newArray = new int[capacity * 2]; // Allocate new memory with doubled capacity

            // Copy elements from the old array to the new array
            
            for (int i = 0; i < numElements; ++i) {
            	
                newArray[i] = array[i];
                
            }

            // Update capacity
            
            capacity *= 2;

            // Release memory occupied by the old array
            
            delete[] array;

            // Update the pointer to the new array
            
            array = newArray;
            
        }

        // Add the input element to the array
        
        array[numElements] = input;
        
        numElements++;
        
    }

    // Output the elements in the array
    
    cout << endl;
    
    cout << "Array elements:" << endl;
    
    cout << endl;
    
    for (int i = 0; i < numElements; ++i) {
    	
        cout << array[i] << " ";
        
    }
    
    cout << endl;

    // Release memory occupied by the array
    
    delete[] array;

    return 0;
}

