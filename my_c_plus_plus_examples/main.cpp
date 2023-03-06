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

using namespace::std;




int main() {
    NewCar car("New","Like a view",123,4);
     cout<<car.showMeEveryThing();
     car.setNewKm(321);
    
    cout<<endl<<*(car.classPointer)<<endl;
    

    return 0;
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
