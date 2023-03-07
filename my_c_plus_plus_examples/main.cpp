//
//  main.cpp
//  c++ dersleri
//
//  Created by Ahmet Balaman on 28.02.2023.
//

#include <iostream>
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

using namespace::std;




int main() {
    fileWrite();
    fileRead();
    
    
    return 0;
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
