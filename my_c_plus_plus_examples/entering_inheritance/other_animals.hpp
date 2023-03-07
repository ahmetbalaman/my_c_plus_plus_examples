//
//  other_animals.hpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 7.03.2023.
//

#ifndef other_animals_hpp
#define other_animals_hpp

#include <iostream>
#include "animal.hpp"
using namespace::std;


class Dog : public Animal{
public:
    Dog(string name);
    void makeSound();
    
    
};
class Bird : public Animal{
public:
    Bird(string name);
    void makeSound();
    
};



#endif /* other_animals_hpp */
