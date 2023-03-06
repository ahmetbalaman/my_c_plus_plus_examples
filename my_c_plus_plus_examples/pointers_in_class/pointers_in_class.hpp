//
//  pointers_in_class.hpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 6.03.2023.
//

#ifndef pointers_in_class_hpp
#define pointers_in_class_hpp

#include <iostream>

using namespace std;
#endif /* pointers_in_class_hpp */

class NewCar{
public:
    NewCar(string _carName,string _carType,int _km,int doorNumber);
    ~NewCar();
    string showMeKm();
    string showMeCarType();
    string showMeName();
    string showMeEveryThing();
    void setNewName(string _name);
    void setNewType(string _type);
    void setNewKm(int _km);
    
    int *classPointer; //Pointer
    
    //Encapsulation!!!
private:
    string carName;
    string carType;
    int km;
};
