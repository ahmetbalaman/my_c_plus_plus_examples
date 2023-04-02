//
//  try_catch_throw.h
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 22.03.2023.
//

#ifndef try_catch_throw_h
#define try_catch_throw_h
#include<iostream>

using namespace std;

class DivideByZeroException{
public:
    DivideByZeroException():message("Attemted Divide By Zero"){}
    const char * what() const {return message;}
    
private:
    const char *message;
};
double divideIt(int numero1,int numero2){
    if(numero2==0)
        throw DivideByZeroException();
    
    return static_cast<double> (numero1)/(numero2);
}

void tryCatchThrowExample(){
    int numero1,numero2;
    cin>>numero1>>numero2;
    try{
        double result=divideIt(numero1,numero2);
        cout<<"result is :"<<result;
    }catch(DivideByZeroException ex)
    {
        cout<<"Exception is "<<ex.what()<<endl;
    }
    
    cout<<"Finish";
}


#endif /* try_catch_throw_h */
