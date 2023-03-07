//
//  animal.hpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 7.03.2023.
//

#ifndef animal_hpp
#define animal_hpp

#include <iostream>
using namespace std;


class Animal{
public:
    Animal(string _name);
    void eat();
    void sleep();
    string getName();
private:
    string name;
};

#endif /* animal_hpp */
