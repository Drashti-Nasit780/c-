//Question-1 Dynamic Memory Allocation

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;


void insertAtBeginning(int value) {
    Node* newNode = new Node(); 
    newNode->data = value;      
    newNode->next = head;       
    head = newNode;             
    cout<<"Node inserted at beginning"<<endl;
}

void search(int key) {
    Node* temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            cout <<"Key found at position"<<pos<<endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout<<"Key not found"<<endl;
}

void deleteNode(int key) {
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout<<"Key not found. Cannot delete"<<endl;
        return;
    }

    if (prev == NULL) {
        head = head->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
    cout<<"Node with key "<<key<<"deleted"<<endl;
}


void reverseList() {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    cout<<"List reversed"<<endl;
}


void display() {
    Node* temp = head;
    cout<<"Current List:";
    while (temp != NULL) {
        cout<<temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    int ch, val;

    while(1){
        cout << "========= MENU ========="<<endl;
        cout << "1. Insert at Beginning"<<endl;
        cout << "2. Search a Key"<<endl;
        cout << "3. Delete a Node"<<endl;
        cout << "4. Reverse the List"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> ch;
        if(ch==0){
        	cout<<"Thank you so much...."<<endl;
        	break;
		}

        switch (ch) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> val;
                insertAtBeginning(val);
                display();
                break;

            case 2:
                cout<<"Enter key to search: ";
                cin>>val;
                search(val);
                break;

            case 3:
                cout<<"Enter key to delete: ";
                cin>>val;
                deleteNode(val);
                display();
                break;

            case 4:
                reverseList();
                display();
                break;
                
            default:
                cout<<"Invalid choice. Try again!"<<endl;
        }
    }

    return 0;
}
