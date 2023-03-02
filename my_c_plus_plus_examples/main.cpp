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

#include "entering_class.h"

using namespace::std;




int main() {
    Car car("New","Like a view",123);
    
    
    cout<<car.showMeEveryThing();
    
    car.setNewKm(321);
    cout<<car.showMeKm();
    
    
    //mainDynamicList();
    return 0;
}

