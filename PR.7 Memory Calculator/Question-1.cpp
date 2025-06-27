//Question :- 1 Memory Calculator//
#include <iostream>
#include <vector>
using namespace std;

template <typename D>
class MemoryC {
private:
    D id;
    string name;

public:
    MemoryC(D id, string name){
        this->id = id;
        this->name = name;
    }
    void display() {
        cout << "Student Details:" << endl;
        cout << "ID        : " << id << endl;
        cout << "Name      : " << name << endl;
    }
    D getID() {
        return id;
    }
};

int main() {
    int ch, id;
    string name;
    vector<MemoryC<int>> student;

    while(1) {
        cout << "======= Student Management Menu ======="<<endl;
        cout << " Press 1  Add New Student" << endl;
        cout << " Press 2  Show All Students" << endl;
        cout << " Press 3  Remove Student ID" << endl;
        cout << " Press 4  Search Student ID" << endl;
        cout << " Press 5  Exiting Program" << endl;
        cout << "======================================="<<endl;

        cout <<"Enter your choice: ";
        cin >> ch;
        
        if (ch == 5) {
            cout << "Thank you for using Student Manager" << endl;
            break;
        }
        switch (ch){
            case 1:
                cout << "Enter Your Student ID: ";
                cin >> id;
                cout << "Enter Name of Student: ";
                cin >> name;
                student.push_back(MemoryC<int>(id, name));
                cout << "Student Added Successfully!" << endl;
                break;

            case 2:
                if (student.empty()) {
                    cout << "No student records found! Add some students first" << endl;
                } else {
                    cout << "List of All Students:"<<endl;
                    for (int i = 0; i < student.size(); i++) {
                        student[i].display();
                    }
                }
                break;

            case 3:
                if (student.empty()) {
                    cout << "No students to remove" << endl;
                } else {
                    cout << "Enter ID of the student you want to remove: ";
                    cin >> id;

                    int index = -1;
                    for (int i = 0; i < student.size(); i++) {
                        if (student[i].getID() == id) {
                            index = i;
                            break;
                        }
                    }

                    if (index != -1) {
                        student.erase(student.begin() + index);
                        cout << "Student removed successfully!" << endl;
                    } else {
                        cout << "Student with ID " << id << " not found in the list" << endl;
                    }
                }
                break;

           case 4:
        	
            if(student.empty()) {
                cout<<"--No Student to found"<<endl;
            } else{
                cout<<"Enter of student ID search: ";
                cin>>id;
                for(int i = 0; i < student.size(); i++) {
                    if(student[i].getId() == id) {
                        cout<<"Student is found"<<endl;
                        student[i].display();
                        break;
                    }
                    if(i == student.size() - 1) {
                        cout<<"Student is dose not found"<<endl;
                    }
                }
            } 
            break;
             default:
                cout << "Invalid choice! Please choose a valid menu number" << endl;
        }
    }
    return 0;
}
