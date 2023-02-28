//
//  function_overloading.h
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 28.02.2023.
//

#ifndef function_overloading_h
#define function_overloading_h


#endif /* function_overloading_h */

#include<iostream>

using namespace::std;
void overLoadingFunction();
void overLoadingFunction(string whatCode);
void overLoadingFunction(int loadCode);


void overLoadingMain(){
    overLoadingFunction();
    overLoadingFunction("hiii its me");
    overLoadingFunction(12);

}

void overLoadingFunction(){
    cout<<"what?"<<endl;
}

void overLoadingFunction(string whatCode){
    cout<<"just some text with same function: " <<whatCode<<endl;
    
}
void overLoadingFunction(int loadCode){
    cout<<"Load code is :"<<loadCode<<endl;
}

