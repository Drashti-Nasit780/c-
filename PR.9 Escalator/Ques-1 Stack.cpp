#include <iostream>
using namespace std;

class Stack {
     private:
        int *arr;
        int top;
        int capacity;
     public:
        Stack(int size) {
        capacity = size;
        arr = new int[capacity]; 
        top = -1;
}

    ~Stack() {
       delete[] arr; 
    }

    bool isFull() {
       return top == capacity - 1;
    }

    bool isEmpty() {
       return top == -1;
    }

   void push(int value) {
       if (isFull()) {
           cout << "Stack Overflow! Cannot push " << value << endl;
       }else {
           arr[++top] = value; 
           cout << value << " pushed to stack." << endl;
       }
    }

     int pop() {
       if (isEmpty()) {
             cout << "Stack Underflow! Stack is empty." << endl;
             return -1; 
       }else{
              int poppedValue = arr[top--]; 
              return poppedValue;
        }
     }

    int peek() {
       if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1; 
       } else {
             return arr[top];
       }
    }

     void display(){
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
         cout << endl;
        }
     }
};
int main(){
     int size,choice,value;
     cout << "Enter stack size: ";
     cin >> size;
     Stack stack(size); 
    do {
       cout << "--- Stack Menu ---"<<endl;
       cout << "1. Push"<<endl;
       cout << "2. Pop"<<endl;
       cout << "3. Peek"<<endl;
       cout << "4. Display Stack"<<endl;
       cout << "5. Exit"<<endl;
	   cout << "Enter your choice: ";
       cin >> choice;
   switch(choice) {
   case 1:
        cout << "Enter value to push: ";
        cin >> value;
        stack.push(value);
   break;
   case 2:
        value = stack.pop();
        if (value != -1) {
        cout << "Popped value: " << value << endl;
        }
   break;
   case 3:
        value = stack.peek();
        if (value != -1) {
        cout << "Top element is: " << value << endl;
        }
   break;
   case 4:
         stack.display();
   break;
   case 5:
          cout << "Exiting the program..." << endl;
   break;
   default:
           cout << "Invalid choice. Please try again." << endl;
  }
  }while (choice != 5);
        return 0;
}
