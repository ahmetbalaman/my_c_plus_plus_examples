//
//  pointers_in_class.cpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 6.03.2023.
//

#include "pointers_in_class.hpp"


//Contructors
NewCar::NewCar(string _carName,string _carType,int _km,int doorNumber){
    carName=_carName;
    carType=_carType;
    km=_km;
    classPointer=new int(doorNumber);
    //  *classPointer=doorNumber;same thing

     
}



string NewCar::showMeKm(){
    
    return "\nKm: "+to_string(km);
}

string NewCar::showMeName(){
    return "\nName:"+carName;
}
string NewCar::showMeCarType(){
    return "\nType:"+carType;
}
string NewCar::showMeEveryThing(){
    
    return "\nCar Name: " + carName + " CarType: " + carType + " Car Km: " + to_string(km);
}

void NewCar::setNewName(string _name){
    
    carName=_name;
}
void NewCar::setNewType(string _type){
    carType=_type;
}
void NewCar::setNewKm(int _km){
   //YOU CAN CHECK VERİABLE İS NEGATİVE OR WHAT EVER TOO
    
    if(_km<0){
        km=0;
    }else{
        
        km=_km;
    }
}
