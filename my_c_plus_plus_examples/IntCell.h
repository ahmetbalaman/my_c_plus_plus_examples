//
//  Header.h
//  c++ dersleri
//
//  Created by Ahmet Balaman on 28.02.2023.
//

#ifndef Header_h
#define Header_h

#endif /* Header_h */




class IntCell{
public:
    IntCell(){
        storedValue=0;
    }
    IntCell(int initialValue){
        initialValue=storedValue;
    }
    
    int read(){return storedValue;}
    void write(int x){
        storedValue=x;
    }
private:
    int storedValue;
};
