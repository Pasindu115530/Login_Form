#include<iostream>
#include<vector>
#include<string>

using namespace std;

class User{
    private:
        string username,password;
    public:
        User(string name, string pass) {
            username = name;
            password = pass;
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


};

int main(){
    UserManager usermanage;

    int op;
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
    }

    return 0;
}