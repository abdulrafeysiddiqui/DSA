#include <iostream>

using namespace std;

// Node class represents each node in the linked list

class Node {

public:

    int data;

    Node* next;

    // Constructor to initialize a new node

    Node(int value) : data(value), next(NULL) {}

};

// LinkedList class represents the linked list

class LinkedList {

private:

    Node* head;

public:

    // Constructor to initialize an empty linked list

    LinkedList() : head(NULL) {}

    // Function to insert a new node at the beginning of the list

    void insertAtBeginning(int value) {

        Node* newNode = new Node(value);

        newNode->next = head;

        head = newNode;

        cout << value << " inserted at the beginning.\n";

    }

    // Function to insert a new node at the end of the list

    void insertAtEnd(int value) {

        Node* newNode = new Node(value);

        if (!head) {

            head = newNode;

        } else {

            Node* temp = head;

            while (temp->next) {

                temp = temp->next;

            }

            temp->next = newNode;

        }

        cout << value << " inserted at the end.\n";

    }

    // Function to delete a node with a specific value

    void deleteNode(int value) {

        if (!head) {

            cout << "List is empty. Nothing to delete.\n";

            return;
        }

        if (head->data == value) {

            Node* temp = head;

            head = head->next;

            delete temp;

            cout << value << " deleted from the list.\n";

            return;

        }

        Node* temp = head;

        while (temp->next && temp->next->data != value) {

            temp = temp->next;

        }

        if (!temp->next) {

            cout << value << " not found in the list.\n";

        } else {

            Node* toDelete = temp->next;

            temp->next = temp->next->next;

            delete toDelete;

            cout << value << " deleted from the list.\n";
        }
    }

    // Function to display the elements of the linked list

    void display() {

        Node* temp = head;

        while (temp) {

            cout << temp->data << " ";

            temp = temp->next;

        }

        cout << "\n";

    }

};

int main() {

    LinkedList list;

    list.insertAtBeginning(3);

    list.insertAtEnd(5);

    list.insertAtEnd(7);

    list.display();

    list.insertAtBeginning(1);

    list.display();

    list.deleteNode(5);

    list.display();

    list.deleteNode(8);

    return 0;
}
