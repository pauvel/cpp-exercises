//
//  exercise.cpp
//  exercises
//
//  Created by Paul Veliz on 10/08/24.
//

#include <iostream>

int main(){
    
    float a,b,c,d,r = 0;
    


    std::cout<<"Enter a value:"; std::cin >> a;
    std::cout<<"\nEnter b value:"; std::cin >> b;
    std::cout<<"\nEnter c value:"; std::cin >> c;
    std::cout<<"\nEnter d value:"; std::cin >> d;
    // We can set an out precision with:
    std::cout.precision(3);
    r = (a+b)/(c+d);
    std::cout<<"\nResult is: " << r << std::endl;
    
    return 0;
}
