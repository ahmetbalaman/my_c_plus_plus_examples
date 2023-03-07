//
//  entering_class.h
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 1.03.2023.
//

#ifndef entering_class_h
#define entering_class_h


#include <iostream>

using namespace std;


class Car{
public:
    Car(string _carName,string _carType,int _km);
    string showMeKm();
    string showMeCarType();
    string showMeName();
    string showMeEveryThing();
    void setNewName(string _name);
    void setNewType(string _type);
    void setNewKm(int _km);
    
    
    //Encapsulation!!!
private:
    string carName;
    string carType;
    int km;
};


#endif /* entering_class_h */
