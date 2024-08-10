//
//  main.cpp
//  exercises
//
//  Created by Paul Veliz on 08/08/24.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    char name[15];
    int edad = 0;
    std::cout << "Introduce tu nombre:";
    std::cin >> name;
    std::cout << "\nIntroduce tu edad:";
    std::cin >> edad;
    
    
    
    std::cout << name <<" tu edad es "<< edad << std::endl;
    
    
    return 0;
}
