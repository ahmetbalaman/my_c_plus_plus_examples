//
//  other_animals.cpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 7.03.2023.
//

#include "other_animals.hpp"


Dog::Dog(string name): Animal(name){
    
}
void Dog::makeSound(){
    cout<<Animal::getName() <<" is saying : wof woff\n";
}

Bird::Bird(string name): Animal(name){
    
}
void Bird::makeSound(){
    cout<<Animal::getName() <<" is saying : cik cik\n";
}
