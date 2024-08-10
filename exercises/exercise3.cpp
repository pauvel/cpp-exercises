//
//  exercise3.cpp
//  exercises
//
//  Created by Paul Veliz on 10/08/24.
//

#include <iostream>

int main3(){
    // Math expression: a+(b/c)/d+(e/f)
    
    float a,b,c,d,e,f, result = 0;
    
    std::cout<<"/nEnter <a>: "; std::cin>>a;
    std::cout<<"/nEnter <b>: "; std::cin>>b;
    std::cout<<"/nEnter <c>: "; std::cin>>c;
    std::cout<<"/nEnter <d>: "; std::cin>>d;
    std::cout<<"/nEnter <e>: "; std::cin>>e;
    std::cout<<"/nEnter <f>: "; std::cin>>f;
    
    result = (a+(b/c)) / (d+(e/f));
    
    std::cout<<"/nThe result is: " << result;
    
    
    return 0;
}
