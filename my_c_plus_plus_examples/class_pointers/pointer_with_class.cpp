//
//  pointer_with_class.cpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 2.03.2023.
//

#include "pointer_with_class.hpp"


//Constructors
Person::Person(string _name,string _surname,int _age){
    name=_name;
    surname=_surname;
    age=_age;
}
Person::~Person(){
    cout<<endl<<Person::name<<" Was Destroyed..."<<endl;
};
void Person::getEverything(){
    cout<<"Name : "<<name<<" Surname :"<<surname <<" Age: "<<age;
    
}
