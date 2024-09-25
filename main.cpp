#include<iostream>
#include<vector>
#include<string>

using namespace std;

char cho;

class User{
    private:
        string username,password;
    public:
        User(string name, string pass) {
            username = name;
            password = pass;
        }  

        string getName(){
            return username;
        } 

        string getPassword(){
            return password;
        }
};
class UserManager{
    private:
        vector<User> users;
    public:
        void RegisterUser(){
            string username,password;
            cout << "Enter your name  : " ;
            cin >> username;
            cout << "Enter your password : " ;
            cin >> password;

            User newUser(username , password);
            users.push_back(newUser);

            cout << " User Register Sucessfullyy....." << endl;
        }     

 void LoginUser() {
    string cho; // Declare cho here to use in the loop
    do {
        string name, pass;
        cout << "Enter your username: ";
        cin >> name;
        cout << "Enter your password: ";
        cin >> pass;

        bool loginSuccess = false; // Flag to track successful login

        for (int i = 0; i < users.size(); i++) {
            // Check for matching username and password
            if (users[i].getName() == name && users[i].getPassword() == pass) {
                cout << "Login Successfully......." << endl;
                loginSuccess = true; // Set flag to true
                break; // Exit the loop since the user is found
            }
        }

        if (!loginSuccess) { // If login was not successful
            cout << "Wrong username or password." << endl;
            cout << "Do you want to try again? (Y/N): ";
            cin >> cho;
        } else {
            cho = "N"; // If successful, set cho to "N" to exit the loop
        }

    } while (cho != "N" && cho != "n"); // Repeat until user chooses to exit
}


       void ShowUser(){
            for(int i = 0 ; i < users.size() ; i ++){
                cout << i+1 << " user name is " <<  users[i].getName() << endl;
            }
       }
       void DeleteUser(){
            string name;
            cout << "Enter the name do you want to delete :  " ;
            cin >> name;
            for(int i = 0 ; i < users.size() ; i ++){
                if(users[i].getName() == name){
                    users.erase(users.begin()+i);
                    break;

                }

            }
       }

};


int main(){
    UserManager usermanage;

   int op;
 do{
  
    cout << "01.Register User " << endl;
    cout << "02.Login User " << endl;
    cout << "03.Show User " << endl;
    cout << "04.delete User " << endl;
    cout << "05.Exit " << endl;
    cout << "Enter your choice : " << endl;
    cin >> op;

    switch(op){
        case 1:
            usermanage.RegisterUser();
            break;
        case 2:
            usermanage.LoginUser();  
            break;
        case 3:
            usermanage.ShowUser();
            break;
        case 4:
            usermanage.DeleteUser();
            break;
        case 5:
            cout << "Thank you for joining with us....." << endl;    



    }
 }while(op != 5);
    return 0;
}