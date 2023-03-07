//
//  cat.hpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 7.03.2023.
//

#ifndef cat_hpp
#define cat_hpp


#include <iostream>
#include "animal.hpp"
using namespace std;


class Cat: public Animal{
public:
    Cat(string ad);
    void makeSound();
};


#endif /* cat_hpp */
