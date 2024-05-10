#include <iostream>
using namespace std;

class LoginManager {
private:
    
    string userName = "admin";
    string passWord = "pass";
    
public:
    string userNameAttempt;
    string passWordAttempt;
    
    void login() {
        cout << "Please Enter the Username & Password. \nUsername : ";
        
        cin >> userNameAttempt;
        if (userNameAttempt == userName) {
            cout << "Password : ";
            
            cin >> passWordAttempt;
            if (passWordAttempt == passWord) {
                cout << "\nEntered Username and Password is correct.";
            }
            else{
                cout<<"invalid Pass";
            }
        }else{
            cout<<"invalid user";
        }
    }


};

int main() {
    LoginManager loginManagerObj;
    loginManagerObj.login();
    return 0;
}
