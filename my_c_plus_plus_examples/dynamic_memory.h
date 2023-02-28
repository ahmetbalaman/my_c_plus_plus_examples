//
//  dynamic_memory.h
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 28.02.2023.
//

#ifndef dynamic_memory_h
#define dynamic_memory_h


#endif /* dynamic_memory_h */

#include<iostream>
using namespace::std;
void mainDynamic(){
    int *p=new int;
    //hmm what is that?
    //that is new parametry, this is allows us to rezerve a memory adress for later work
    // oh wow then what will happen after this
    //well.
    cout<<"before " << p<<" veriable ve use adress"<<endl;
    *p=7;
    //rezerved takes the number and it will rise again same pointer system.
    cout<<*p<<endl;
    //BUT WATCH OUT
    //IF YOU DONT DELETE REZERVED CATCH AFTER USE IT,
    //THIS WILL BE A BIG PROBLEM BECAUSE THE MEMORY WILL BE FULL
    delete p;
    //please note: we didnt delete p we delete adress of rezerve on p
    cout<<"see " << p<<" veriable is still here"<<endl;
    //sometimes adress of memory can be change because of unstatic system memory managment.
    
    cout<<"but " << *p<<" pointer is not"<<endl;
}

