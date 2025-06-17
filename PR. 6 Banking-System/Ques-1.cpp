//Question-1 Banking System 
#include<iostream>
using namespace std;

class BankAccountSystem{
     private:
             int accNo;
             float accAmount;
          	 string name; 
     public:
      		void SetAccount(int accNo, string name, float accAmount) {
        	this->accNo = accNo;
        	this->name = name;
        	this->accAmount = accAmount;
    }

    int accno() {
        this->accNo;
    }

    void getDetails() {
        cout << "Account Number: " << this->accNo << endl;
        cout << "Name: " << this->name << endl;
        cout << "Amount: " << this->accAmount << endl;
    }

    void deposit(float amount) {
        accAmount += amount;
        cout << "Your Account balance: " << accAmount << endl;
    }

    void withdraw(float amount) {
        if (amount <= accAmount) {
            accAmount -= amount;
            cout << "Your Account balance: " << accAmount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }
};

int main() {
    int choice;
    BankAccountSystem accounts[50];
    int accNo, acc_No;
    float accAmount, depositAmount, withdrawAmount;
    string name;
    int check, cnt = 0, i;

    do {
    	cout<<"---------BANK MENU---------"<<endl<<endl;
        cout << "Press 1 Create Account" << endl;
        cout << "Press 2 Account Details" << endl;
        cout << "Press 3 Deposit Amount" << endl;
        cout << "Press 4 Withdraw Amount" << endl;
        cout << "Press 5 Exit" << endl<<endl;

        cout << "Enter your choice: "<<endl;
        cin >> choice;

        check = 0;

        switch (choice) {
            case 1:
                cout << "Enter Account Number: ";
                cin >> accNo;
                cout << "Enter Account Holder Name: ";
                cin >> name;
                cout << "Enter Initial Amount: ";
                cin >> accAmount;
                accounts[cnt++].SetAccount(accNo, name, accAmount);
                cout << "-----------------Account successfully created-----------------" << endl << endl;
                break;

            case 2:
                cout << "Enter Account Number: ";
                cin >> acc_No;
                for (i = 0; i < cnt; i++) {
                    if (accounts[i].accno() == acc_No) {
                        accounts[i].getDetails();
                        check = 1;
                        break;
                    }
                }
                if (check == 0) {
                    cout << "Account not found!" << endl;
                } else {
                    cout << "------------Account details displayed------------" << endl << endl;
                }
                break;

            case 3:
                cout << "Enter Account Number: ";
                cin >> accNo;
                for (i = 0; i < cnt; i++) {
                    if (accounts[i].accno() == accNo) {
                        check = 1;
                        break;
                    }
                }
                if (check == 1) {
                    cout << "Enter Deposit Amount: ";
                    cin >> depositAmount;
                    accounts[i].deposit(depositAmount);
                    cout << "-----Amount successfully deposited-----" << endl << endl;
                } else {
                    cout << "Account not found!" << endl;
                }
                break;

            case 4:
                cout << "Enter Account Number: ";
                cin >> accNo;
                for (i = 0; i < cnt; i++) {
                    if (accounts[i].accno() == accNo) {
                        check = 1;
                        break;
                    }
                }
                if (check == 1) {
                    cout << "Enter Withdraw Amount: ";
                    cin >> withdrawAmount;
                    accounts[i].withdraw(withdrawAmount);
                    cout << "-------------Amount successfully withdrawn-------------" << endl << endl;
                } else {
                    cout << "Account not found!" << endl;
                }
                break;

            case 5:
                cout << "Thank you for using our banking system!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}

