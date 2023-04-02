//
//  pointer_with_arrays.h
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 10.03.2023.
//

#ifndef pointer_with_arrays_h
#define pointer_with_arrays_h

#include<iostream>

using namespace std;
void readArray1D(string *ptr,int size){
    cout<<"read array fonction:"<<endl;
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<endl;
    }
}
void readArray2D(string **pointer2D,int row,int column){
    for(int row=0;row<3;row++){
        cout<<"{\n";
        for(int column=0;column<3;column++)
            cout<<"{"<< *(*(pointer2D+row)+column)<<"},\n";
        cout<<"\n}";
    }
}

//its like pointer but...

void ref(){
    int a=5;
    int &ref=a;
    ref=6;
    cout<<a;
    
//    if I create ref first I have to equalize what is it.
//    int &ref;
//    i cant make ref before i equalize.
    
    
}
void arrays_with_pointer(){
    //1D arrays.
    string array[]={"Hello","World","Reference This"};
    string *pointer=array;
    string *anotherPointer=&array[2];
    cout<<*(pointer+1)<<endl;
    cout<<*(anotherPointer)<<endl;
    
    readArray1D(array,3);
    
    //2D arrays.
    string **pointer2D=new string*[3];
    *pointer2D = new string[3]{
        "dimensional 00","dimensional 01","dimensional 02"
    };
    *(pointer2D+1) = new string[3]{
        "dimensional 10","dimensional 11","dimensional 12"
    };
    *(pointer2D+2) = new string[3]{
        "dimensional 20","dimensional 21","dimensional 22"
    };
    readArray2D(pointer2D,3,3);
   
}


//const pointers can change adress but cant change inside of adress
void const_with_pointers(const int *ptr1,const int*ptr2){
    for(;ptr1!=ptr2;ptr1++){
        cout<<*ptr1<<endl;
    }
    
}
void mainWithArrays(){
//    arrays_with_pointer();
//    ref();
    int array[]={1,2,3,4,5,6,7,8,9};
    const_with_pointers(array+2,array+5);
    
}



#endif /* pointer_with_arrays_h */
