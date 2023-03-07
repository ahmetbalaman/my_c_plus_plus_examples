//
//  cat.cpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 7.03.2023.
//

#include "cat.hpp"
Cat::Cat(string ad) : Animal(ad){
  
}

void Cat::makeSound(){
    cout<<Animal::getName()<<" is Meowing\n";
}
