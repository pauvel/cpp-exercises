//
//  exercise4.cpp
//  exercises
//
//  Created by Paul Veliz on 10/08/24.
//

#include <iostream>


int main(){
    
    int x,y,aux = 0;
    
    std::cout<<"Enter <x> val: ";std::cin>>x;
    std::cout<<"Enter <y> val: ";std::cin>>y;
    
    std::cout<<"[INIT]El valor de x es=" << x << "\nel valor de y ="<< y << std::endl;
    
    aux = x;
    x = y;
    y = aux;
    
    std::cout<<"[SWAPED]El valor de x es=" << x << "\nel valor de y ="<< y << std::endl;
    
    
    
    return 0;
}
