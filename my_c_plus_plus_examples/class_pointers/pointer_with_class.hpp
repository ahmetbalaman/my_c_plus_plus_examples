//
//  pointer_with_class.hpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 2.03.2023.
//

#ifndef pointer_with_class_hpp
#define pointer_with_class_hpp

#include <iostream>

using namespace std;

class Person{
    
public:
    
    //Constructors
    Person(string _name,string _surname,int _age);
    
    //Destructors
    ~Person();
    void getEverything();

    
private:
    string name;
    string surname;
    int age;
};


#endif /* pointer_with_class_hpp */

