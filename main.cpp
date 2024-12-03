#include <iostream>
#include <string>
using namespace std;

class User{
    private: 
        string userID; 
        string name;
        string password;

        bool _ValidateLogIn(string _Name, string _Password, User arrUser[10]){
            bool isSuccess = false;
            for (int i=0; i<10; i++){
                if (_Name == arrUser[i].name && _Password == arrUser[i].password){
                    isSuccess = true;
                    break;
                }
            }
            if (isSuccess){
                cout << "LogIn is Success" << endl; 
                return isSuccess; 
            }
            cout << "invalid username or password" << endl;
            return isSuccess;
        }

    public:
        User(string _userID, string _name, string _password){
            User::userID = _userID;
            User::name = _name;
            User::password = _password;
        }

        User(){}

        void createUser();
        
        void logIn(User arrUser[10]){
            string _Name, _Password; 
            system ("cls");
            cout << "enter username and password" << endl;
            cout << "==============" << endl; 
            cout << "username" << endl;
            cin >> _Name; 
            cout << "Password" << endl; 
            cin >> _Password; 
        }

        bool validatePassword();
        void LogOut();
};

class Librarian {
    private:
        int staffID;
    public:
        string addNewBook();
        string editBookAvailability();
        string removesBook();
        string manageMembers();
};

class Member {
    private:
        int memberID;
        int joinDate;
    public:
        void rentBook();
        int selectDate(); 
        string selectBook();
        string viewRentalistory();
};

class BookName {
    private:
        int bookID;
        int releaseDate;
        bool status;
        string availabilityDate;
    public: 
        void getBookDetails();
        bool updateStatus();
        void checkAvailability();
};

class RentalTransaction {
    private:
        int transactionID; 
        int bookID;
        int memberID;
        int rentDate;
        int returnDate;
        string status; 
    public:
        string createRental();
        bool updateStatus();
};

int main(){

    User arrUser[10];
    User user;
    arrUser[0] = User("001", "starinduu", "rinduimut");
    arrUser[1] = User("002", "hnmlna", "mumunimut"); 
    arrUser[2] = User("003", "abhinaweyes", "kitaimut");

    while(true){ 
        cout << "Hello, amBOOKers" << endl;
        cout << "1. List book availability" << endl; 
        cout << "2. Rent a book" << endl; 
        
    }
    return 0; 
}