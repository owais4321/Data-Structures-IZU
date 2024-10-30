#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next  = nullptr;
    }

};

class LinkedList {

private:
    Node* head;

public:

    LinkedList() {
        this->head = nullptr;
    }

    void insertAtBegin(int d) {
        Node* newNode = new Node(d);
        newNode->next = this->head;
        head = newNode;
        cout<<"Inserted"<<d<< "at beginning"<<endl;
    }

    void insertAtEnd(){
        //Implement this function
    }

    void viewList() {
        Node* temp = this->head;
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout<<nullptr<<endl;
    }

};

int main() {
    
    LinkedList list = LinkedList();
    list.insertAtBegin(1);
    list.insertAtBegin(2);
    list.viewList();
    return 0;
}