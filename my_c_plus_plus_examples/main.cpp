//
//  main.cpp
//  c++ dersleri
//
//  Created by Ahmet Balaman on 28.02.2023.
//

#include <iostream>
#include "IntCell.h"
#include "pointerlara_giris.h"
using namespace::std;



int main() {
    IntCell data;
    
    data.write(5);
    
    cout<<data.read()<<endl;
    
    
    return 0;
}

