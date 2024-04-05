#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void addNode(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteAll(Node* curr) {
        if (curr == nullptr) {
            return;
        }

        deleteAll(curr->next);
        cout << "Deleted Node with value: " << curr->data << endl;
        delete curr;
    }

    void deleteAllElements() {
        deleteAll(head);
        head = nullptr;
    }
};

int main() {
    LinkedList list;

    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.addNode(4);
    list.addNode(5);

    list.deleteAllElements();

    return 0;
}
