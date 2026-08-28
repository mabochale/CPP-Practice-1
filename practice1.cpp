#include <iostream>
#include <string>
int main(){
    std::cout << "Hello, Please Enter Your age: " << std::endl;
    std::string age;
    std::cin >> age;

int ageInt = std::stoi(age);
if (ageInt < 18){
    std::cout << "You are too young to buy GTA VI." << std::endl;
}if (ageInt >= 18 && ageInt < 65){
    std::cout << "You Are Eligible to buy GTA VI." << std::endl;
}else{
    std::cout << "You are a senior citizen." << std::endl;
    return 0;
}
}