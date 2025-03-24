#include <iostream>

void loginPortal();
void login();
void accountRegister();
void header();

int main(){
    
    loginPortal();

    return 0;
}

void header(){
    std::cout << "---------- Bucks County Community College ----------" << std::endl;
    std::cout << '\n';
}

void loginPortal(){
    char userInput;

    system("clear");
    header();
    std::cout << '\n';
    std::cout << "Please type 'L' to Login, otherwise type 'R' if you do not have an account: ";
    std::cin >> userInput;

    if(toupper(userInput) == 'L'){
        login();        
    }
    else{

    }
}

void login(){
    system("clear");
    header();



}

void accountRegister(){

}
