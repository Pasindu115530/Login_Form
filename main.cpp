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
        void LoginUser(){
            string name,pass;
            cout << "Enter your username : " ;
            cin >> name;
            cout << "Enter your password : " ;
            cin >> pass;
            for(int i = 0 ; i < users.size() ; i++){
                if(users[i].getName() == name && users[i].getPassword() == pass){
                    cout << "Login Sucessfully......." << endl;
                    break;
                }
                else{
                    cout << "Wrong Passwod " << endl;
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

    }
 }while(op != 6);
    return 0;
}