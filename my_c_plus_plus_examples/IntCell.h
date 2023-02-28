//
//  Header.h
//  c++ dersleri
//
//  Created by Ahmet Balaman on 28.02.2023.
//

#ifndef Header_h
#define Header_h

#endif /* Header_h */



#include<iostream>

using namespace::std;


class IntCell{
public:
    IntCell(){
        storedValue=0;
    }
    IntCell(int initialValue){
        storedValue=initialValue;
    }
    int read(){return storedValue;}
    void write(int x){
        storedValue=x;
    }
private:
    int storedValue;
};

class IntCellAdvanced{
public:
    IntCellAdvanced(int initialValue=1):storedValue(initialValue){
        
    }
    int read()const {return storedValue;}
    void write(int x){
        storedValue=x;
    }
private:
    int storedValue;
};

void IntCellMain(){
    
    IntCell data1;
    
    IntCell data2=IntCell(20);
    
    IntCellAdvanced data3;
    IntCellAdvanced data4=IntCellAdvanced(5);
    
    
    
    cout<<data1.read()<<endl;
    cout<<data2.read()<<endl;
    cout<<"advanced :"<<data3.read()<<endl;
    cout<<"advanced :"<<data4.read()<<endl;
}
