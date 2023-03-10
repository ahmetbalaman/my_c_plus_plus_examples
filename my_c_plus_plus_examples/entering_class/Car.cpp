//
//  Car.cpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 2.03.2023.
//

#include "Car_Header.h"


//Contructors
Car::Car(string _carName,string _carType,int _km){
    carName=_carName;
    carType=_carType;
    km=_km;
}



string Car::showMeKm(){
    
    return "\nKm: "+to_string(km);
}

string Car::showMeName(){
    return "\nName:"+carName;
}
string Car::showMeCarType(){
    return "\nType:"+carType;
}
string Car::showMeEveryThing(){
    
    return "\nCar Name: " + carName + " CarType: " + carType + " Car Km: " + to_string(km);
}

void Car::setNewName(string _name){
    
    carName=_name;
}
void Car::setNewType(string _type){
    carType=_type;
}
void Car::setNewKm(int _km){
   //YOU CAN CHECK VERİABLE İS NEGATİVE OR WHAT EVER TOO
    
    if(_km<0){
        km=0;
    }else{
        
        km=_km;
    }
}
