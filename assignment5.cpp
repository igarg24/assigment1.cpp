//ques 1 -> menu drive

/*#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insertion at beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insertion at end
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert before a given value
void insertBefore(int target, int value) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    if (head->data == target) {
        insertAtBeginning(value);
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != target) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        cout << "Node " << target << " not found!\n";
    } 
	else {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Insert after a given value
void insertAfter(int target, int value) {
    Node* temp = head;
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Node " << target << " not found!\n";
    } 
	else {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Deletion from beginning
void deleteFromBeginning() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Deletion from end
void deleteFromEnd() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// Deletion of a specific node
void deleteNode(int value) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        cout << "Node " << value << " not found!\n";
    } 
	else {
        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }
}

// Search node
void searchNode(int value) {
    Node* temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == value) {
            cout << "Node " << value << " found at position " << pos << ".\n";
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Node " << value << " not found!\n";
}

// Display list
void display() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Menu
int main() {
    int choice, value, target;
    while (true) {
        cout << "Singly Linked List Menu"<endl;
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert Before Node\n";
        cout << "4. Insert After Node\n";
        cout << "5. Delete from Beginning\n";
        cout << "6. Delete from End\n";
        cout << "7. Delete Specific Node\n";
        cout << "8. Search Node\n";
        cout << "9. Display List\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertAtEnd(value);
                break;
            case 3:
                cout << "Enter target value: ";
                cin >> target;
                cout << "Enter new value: ";
                cin >> value;
                insertBefore(target, value);
                break;
            case 4:
                cout << "Enter target value: ";
                cin >> target;
                cout << "Enter new value: ";
                cin >> value;
                insertAfter(target, value);
                break;
            case 5:
                deleteFromBeginning();
                break;
            case 6:
                deleteFromEnd();
                break;
            case 7:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(value);
                break;
            case 8:
                cout << "Enter value to search: ";
                cin >> value;
                searchNode(value);
                break;
            case 9:
                display();
                break;
            case 10:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
}*/


//ques 2 -> delete duplicates

/*#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// Function to insert node at end
void insertEnd(Node*& head, int val) {
    Node* newNode = createNode(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << "->";
        temp = temp->next;
    }
    cout << endl;
}

// Function to count and delete all occurrences of key
int deleteKeyOccurrences(Node*& head, int key) {
    int count = 0;

    // Handle head nodes with key
    while (head != NULL && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        count++;
    }

    // Traverse remaining list
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (curr->data == key) {
            count++;
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return count;
}

// Driver code
int main() {
    Node* head = NULL;

    // Creating Linked List: 1->2->1->2->1->3->1
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 1);
    insertEnd(head, 3);
    insertEnd(head, 1);

    int key = 1;
    cout << "Original Linked List: ";
    printList(head);

    int count = deleteKeyOccurrences(head, key);

    cout << "Count: " << count << endl;
    cout << "Updated Linked List: ";
    printList(head);

    return 0;
}*/


//ques 3 -> middle of ll

/*#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to find the middle node
void findMiddle(Node* head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;           // Move slow by one
        fast = fast->next->next;     // Move fast by two
    }

    cout << "Middle element: " << slow->data << endl;
}

int main() {
    // Creating linked list: 1->2->3->4->5
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    findMiddle(head);

    return 0;
}*/


//ques 4 -> reverse of ll

/*#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;   
        curr->next = prev;    
        prev = curr;         
        curr = next;          
    }
    return prev;  // New head
}*/