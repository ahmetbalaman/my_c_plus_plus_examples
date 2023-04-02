//
//  main.cpp
//  c++ dersleri
//
//  Created by Ahmet Balaman on 28.02.2023.
//

#include <iostream>
#include <vector>
#include "IntCell.h"
#include "pointerlara_giris.h"
#include "function_overloading.h"
#include "dynamic_memory.h"
#include "pointer_with_class.hpp" 
#include "Car_Header.h"
#include "pointers_in_class.hpp"
#include "animal.hpp"
#include "cat.hpp"
#include "other_animals.hpp"
#include "entering_files.hpp"
#include "pointer_with_arrays.h"
#include "structer_and_pointers.h"
#include "try_catch_throw.h"
#include "operator_overloading.h"
#include "entering_vectors.h"
#include "entering_virtuals.h"
using namespace::std;


void forEachExample();
void vectorMain();


int main() {
//    mainWithArrays();
//    mainStructers();
//    tryCatchThrowExample();
//    operatorOvarLoadMain();
//    vectorMain();
    Base virtual1;
    Derived delivered1;
    virtual1.func();
    delivered1.func();
    
    return 0;
}

void forEachExample(){
    int a[]={1,2,3,4};
    
    for(int item:a){
        cout<<item<<endl;
    }
}
void inheritance(){
    Animal animal("animal");
    animal.eat();
    animal.sleep();
    
    Cat cat("Happy");
    cat.makeSound();
    
    Dog dog("BullDog");
    dog.makeSound();
    
    Bird bird("Cici Kuş");
    bird.makeSound();
}

void classInPointer(){
    NewCar*car=new NewCar("New","Like a view",123,4);
    
     cout<<car->showMeEveryThing();
     car->setNewKm(321);
    cout<<endl<<" pointer Car Door Number: "<<*(car->classPointer)<<endl;
    cout<<endl<<"Not pointer Car  Method Calling: "<<car->showMeKm()<<endl;
    NewCar car2("mrb","123",3,4);
    cout<<endl<<"Not pointer Car Door Number: "<<*(car2.classPointer)<<endl;
    cout<<endl<<"Not pointer Car  Method Calling: "<<car2.showMeKm()<<endl;
    cout<<car2.showMeEveryThing();
    
    delete car;
}

void carDestructor(){
    Person ahmet("Ahmet","Balaman",20);
    Person samanta("Samanta","sister",25);
    ahmet.getEverything();
    Person *pointerAhmet;
    cout<<endl;
    pointerAhmet=&ahmet;
    pointerAhmet->getEverything();
    pointerAhmet=&samanta;
    cout<<endl;
    pointerAhmet->getEverything();
    pointerAhmet=new Person("bu yeni","gerçek",22);
    cout<<endl;
    pointerAhmet->getEverything();
    delete pointerAhmet;
    cout<<endl;
}



void vectorMain(){
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    v.pop_back();
    v.erase(v.end() - 1);
    cout<<"another delete logic:"<<v[1];
    
    
    int t=v[v.size()-1];
    cout<<"is it : "<<t;
    
    v.pop_back();
    
}
