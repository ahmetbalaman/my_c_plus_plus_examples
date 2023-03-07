//
//  entering_files.cpp
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 7.03.2023.
//

#include "entering_files.hpp"


void fileWrite(){
    fstream file;
    file.open("new.txt",ios::out);
    if(!file.is_open()){
        cout<<"File Can't crated";
    }else{
        
        string str="hello world\nHELLO\n ZA WARUDO";
        
        file<<str;
        file.close();
    }
    
}


void fileRead(){
    fstream file;
    file.open("new.txt",ios::in);
    if(!file.is_open()){
        cout<<"File Can't crated";
    }else{
        
        string str;
        while(
              getline(file,str)){
                  cout<<str<<endl;
              }
        
        
        file.close();
    }
    
}
