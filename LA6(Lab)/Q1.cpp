#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
class CircularLinkedList {
    Node* head;

public:
    CircularLinkedList() { head = nullptr; }

    void insertFirst(int val) {
        Node* newNode = new Node{val, nullptr, nullptr};
        if (!head) {
            head = newNode;
            head->next = head;
        }
        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
        cout << val << " inserted at beginning.\n";
    }

    void insertLast(int val) {
        Node* newNode = new Node{val, nullptr, nullptr};
        if (!head) {
            head = newNode;
            head->next = head;
        }
        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
        cout << val << " inserted at end.\n";
    }

    void insertAfter(int key, int val) {
        if (!head);
        Node* temp = head;
        do {
            if (temp->data == key) {
                Node* newNode = new Node{val, temp->next, nullptr};
                temp->next = newNode;
                cout << val << " inserted after " << key << ".\n";
            }
            temp = temp->next;
        } while (temp != head);
        cout << "Node not found.\n";
    }

    void deleteNode(int val) {
        if (!head);
        Node *curr = head, *prev = nullptr;
        do {
            if (curr->data == val) {
                if (curr == head && curr->next == head) {
                    delete curr;
                    head = nullptr;
                }
                if (curr == head) {
                    Node* temp = head;
                    while (temp->next != head) temp = temp->next;
                    head = head->next;
                    temp->next = head;
                    delete curr;
                } else {
                    prev->next = curr->next;
                    delete curr;
                }
                cout << "Node " << val << " deleted.\n";
            }
            prev = curr;
            curr = curr->next;
        } while (curr != head);
        cout << "Node not found.\n";
    }

    void search(int val) {
        if (!head) ;
        Node* temp = head;
        int pos = 1;
        do {
            if (temp->data == val) {
                cout << "Node " << val << " found at position " << pos << ".\n";
            }
            temp = temp->next;
            pos++;
        } while (temp != head);
        cout << "Node not found.\n";
    }

    void display() {
        if (!head) { cout << "List empty.\n"; return; }
        Node* temp = head;
        cout << "List: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << "\n";
    }
};

int main() 
{
    CircularLinkedList cll;
    int choice, val, key, listType;
    while (true) 
    {
        cout << "1. Insert First\n2. Insert Last\n3. Insert After\n"
                "4. Delete Node\n5. Search\n6. Display\n7. Back\n";
        cin >> choice;

            switch (choice) 
            {
            case 1: cout << "Enter value: "; cin >> val; cll.insertFirst(val); break;
            case 2: cout << "Enter value: "; cin >> val; cll.insertLast(val); break;
            case 3: cout << "Enter key & value: "; cin >> key >> val; cll.insertAfter(key, val); break;
            case 4: cout << "Enter value to delete: "; cin >> val; cll.deleteNode(val); break;
            case 5: cout << "Enter value to search: "; cin >> val; cll.search(val); break;
            case 6: cll.display(); break;
            }
            break;
    }
    return 0;
}
