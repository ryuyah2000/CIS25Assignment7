// asks for 3 names, stores them in an array, then prints out the first one
// code by Ryuya Hirota

#include <iostream>
#include <string>

int main() {
    std::string names[3] = { "" , "", "" };
    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter name (" << i << "):" << std::endl;
        std::cin >> names[i];
    }
    
    std::cout << "The first name you input is " << names[0];
    return 0;
}
