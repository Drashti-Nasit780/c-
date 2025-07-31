//linked list
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
private:
    Node* head;
    int count;

public:
    LinkedList() {
        head = NULL;
        count = 0;
    }

    void create(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        count++;
        cout << " Node inserted successfully"<<endl;
    }
    void view() {
        if (head == NULL) {
            cout << " List is empty"<<endl;
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "Total Nodes: " << count << endl;
    }

    
    void update(int position, int newData) {
        if (position < 0 || position >= count) {
            cout << " Invalid position."<<endl;
            return;
        }
        Node* temp = head;
        for (int i = 0; i < position; i++) {
            temp = temp->next;
        }
        temp->data = newData;
        cout << "?? Node updated successfully.\n";
    }

    void deleteNode(int position) {
        if (head == NULL || position < 0 || position >= count) {
            cout << "Invalid position."<<endl;
            return;
        }

        Node* temp;
        if (position == 0) {
            temp = head;
            head = head->next;
        } else {
            Node* prev = head;
            for (int i = 0; i < position - 1; i++) {
                prev = prev->next;
            }
            temp = prev->next;
            prev->next = temp->next;
        }
        delete temp;
        count--;
        cout << " Node deleted successfully."<<endl;
    }
};

int main() {
    LinkedList list;
    int choice, data, position;

    while (true) {
        cout << "===== MENU ====="<<endl;
        cout << "1. Create (Insert at end)"<<endl;
        cout << "2. View List\n";
        cout << "3. Update Node at position"<<endl;
        cout << "4. Delete Node at position"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            list.create(data);
            break;

        case 2:
            list.view();
            break;

        case 3:
            cout << "Enter position to update : ";
            cin >> position;
            cout << "Enter new data: ";
            cin >> data;
            list.update(position, data);
            break;

        case 4:
            cout << "Enter position to delete : ";
            cin >> position;
            list.deleteNode(position);
            break;

        case 0:
            cout << " Thank you for using Linked List program"<<endl;
            return 0;

        default:
            cout << " Invalid choice. Try again."<<endl;
        }
    }
    return 0;
}
