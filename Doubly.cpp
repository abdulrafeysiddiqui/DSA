#include <iostream>

using namespace std;

struct Node {
	
    int data;
    
    Node* prev;
    
    Node* next;
    
    Node(int value) : data(value), prev(NULL), next(NULL) {}
    
};

class DoublyLinkedList {
	
private:
	
    Node* head;

public:
	
    DoublyLinkedList() : head(NULL) {}

    void insertAtBeginning(int value) {
    	
        Node* newNode = new Node(value);

        if (head == NULL) {
        	
            head = newNode;
            
        } else {
        	
            newNode->next = head;
            
            head->prev = newNode;
            
            head = newNode;
            
        }
    }

    void insertAtEnd(int value) {
    	
        Node* newNode = new Node(value);

        if (head == NULL) {
        	
            head = newNode;
            
        } else {
        	
            Node* temp = head;
            
            while (temp->next != NULL) {
            	
                temp = temp->next;
                
            }
            
            temp->next = newNode;
            
            newNode->prev = temp;
        }
    }

    // Function to insert a node at a specific position
    
    void insertAtPosition(int value, int position) {
    	
        Node* newNode = new Node(value);

        if (position <= 0) {
        	
            // Insert at the beginning if position is 0 or negative
            
            newNode->next = head;
            
            if (head != NULL) {
            	
                head->prev = newNode;
                
            }
            
            head = newNode;
            
        } else {
        	
            // Insert at the specified position
            
            Node* temp = head;
            
            for (int i = 0; i < position - 1 && temp != NULL; ++i) {
            	
                temp = temp->next;
            }

            if (temp != NULL) {
            	
                newNode->next = temp->next;
                
                newNode->prev = temp;
                
                if (temp->next != NULL) {
                	
                    temp->next->prev = newNode;
                    
                }
                
                temp->next = newNode;
            }
        }
    }

// Function to delete the first node
    
    void deleteFirst() {
    	
        if (head != NULL) {
        	
            Node* temp = head;
            
            head = head->next;

            if (head != NULL) {
            	
                head->prev = NULL;
                
            }

            delete temp;
            
        }
    }

    // Function to delete the last node
    
    void deleteLast() {
    	
        if (head != NULL) {
        	
            Node* temp = head;
            
            while (temp->next != NULL) {
            	
                temp = temp->next;
                
            }

            if (temp->prev != NULL) {
            	
                temp->prev->next = NULL;
                
            } else {
            	
                head = NULL;
                
            }

            delete temp;
            
        }
    }

    // Function to delete a node by its index
    
    void deleteByIndex(int index) {
    	
        if (head != NULL && index >= 0) {
        	
            Node* temp = head;

            for (int i = 0; i < index && temp != NULL; ++i) {
            	
                temp = temp->next;
                
            }

            if (temp != NULL) {
            	
                if (temp->prev != NULL) {
                	
                    temp->prev->next = temp->next;
                    
                } else {
                	
                    head = temp->next;
                    
                }

                if (temp->next != NULL) {
                	
                    temp->next->prev = temp->prev;
                    
                }

                delete temp;
            }
        }
    }

    void deleteNode(int value) {
    	
        Node* current = head;

        while (current != NULL && current->data != value) {
        	
            current = current->next;
            
        }

        if (current != NULL) {
        	
            if (current->prev != NULL) {
            	
                current->prev->next = current->next;
                
            } else {
            	
                head = current->next;
                
            }

            if (current->next != NULL) {
            	
                current->next->prev = current->prev;
                
            }

            delete current;
            
        }
    }


    void display() {
    	
        Node* temp = head;
        
        while (temp != NULL) {
        	
            cout << temp->data << " ";
            
            temp = temp->next;
            
        }
        
        cout << endl;
    }
};

int main() {
	
	cout << "Abdul Rafey Siddiqui - F2022266210" << endl;
	
    DoublyLinkedList dll;

    dll.insertAtBeginning(3);
    
    dll.insertAtBeginning(2);
    
    dll.insertAtBeginning(1);
    
    dll.display();

    dll.insertAtEnd(4);
    
    dll.insertAtEnd(5);
    
    cout << "Doubly Linked List: ";
    
    dll.display();

    dll.deleteNode(2);
    
    cout << "Doubly Linked List after deletion: ";
    
    dll.display();
    
    dll.insertAtPosition(10, 2);
    
    cout << "Doubly Linked List after inserting at position 2: ";
    
    dll.display();

    dll.deleteFirst();
    
    cout << "Doubly Linked List after deleting the first node: ";
    
    dll.display();

    dll.deleteLast();
    
    cout << "Doubly Linked List after deleting the last node: ";
    
    dll.display();

    dll.deleteByIndex(1);
    
    cout << "Doubly Linked List after deleting node at index 1: ";
    
    dll.display();

    return 0;
}
