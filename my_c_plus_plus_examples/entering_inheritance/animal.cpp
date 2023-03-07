//
//  animal.cpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 7.03.2023.
//

#include "animal.hpp"


Animal::Animal(string _name){
    name=_name;
};
void Animal::eat(){
    cout<<name<<" is Eating \n";
};
void Animal::sleep(){
    cout<<name <<" is Sleeping \n";
};
string Animal::getName(){
    return name;
};

