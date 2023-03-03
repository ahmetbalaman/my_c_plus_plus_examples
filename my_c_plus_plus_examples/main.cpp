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

using namespace::std;




int main() {
   // Car car("New","Like a view",123);
    // cout<<car.showMeEveryThing();
    // car.setNewKm(321);
    //cout<<
    //mainDynamicList();
    
    
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
    return 0;
}

