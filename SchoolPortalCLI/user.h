#pragma once
#include <string>

class User{
    
public:
    User(std::string first_Name, std::string last_Name, std::string email, std::string password);

    void fullName();


private:
    std::string first_Name;
    std::string last_Name;
    std::string email;
    std::string password;

};
