//
//  pointerlara_giris.h
//  c++ dersleri
//
//  Created by Ahmet Balaman on 28.02.2023.
//

#ifndef pointerlara_giris_h
#define pointerlara_giris_h


#endif /* pointerlara_giris_h */

#include<iostream>

using namespace::std;


//Preload Functions:

int normalEqualFunction(int x);
void pointerEqualFunction(int *x_);
void tryX(int x);
void tryXWithPointer(int *x);


void pointerlaraGiris(){
    /*
    
    //first example
    int x=6;
    int x2=4;
    int *ptr;
    ptr=&x;

    cout<<*ptr<<endl;
    cout<<&x<<endl ;
    cout<<*ptr<<endl;
   
    x2=normalEqualFunction(x2);
    cout<<"normal "<<x2<<endl;
    
    //MUCH FASTER AND LESS WORK!! İTS CRAZY
    pointerEqualFunction(&x);
    cout<<"pointer: "<<x<<endl;
    
     */
    
    int arr[]={1,2,3};
    
    int *ptr;
    ptr=arr;
    
    cout<<*ptr<<endl;
    cout<<*ptr+1<<endl;
    cout<<*ptr+2<<endl<<endl;
    cout<<ptr[0]<<endl;  cout<<ptr[1]<<endl;  cout<<ptr[2]<<endl;
    
    
    int x=5;
    tryX(10);
    cout<<x<<endl;
    //looks like there is no same x... but wait a second what if we use pointers
    tryXWithPointer(&x);
    cout<<"pointer: "<<x<<endl;
    //AND İTS WORKS!! İTS CRAZY
  
    
    
}
int normalEqualFunction(int x){
    x=34;
    return x;
    
}
void pointerEqualFunction(int *x_){
    *x_=34;
}

void tryX(int x){
    x=30;
    cout<<x<<endl;
}

void tryXWithPointer(int *x){
    *x=30;
}
