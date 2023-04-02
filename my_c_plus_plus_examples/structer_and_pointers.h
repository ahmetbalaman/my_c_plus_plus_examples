//
//  structer_and_pointers.h
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 10.03.2023.
//

#ifndef structer_and_pointers_h
#define structer_and_pointers_h

#include<iostream>

using namespace std;

struct StructAdress{
    string country;
    string city;
    
};

struct PersonStruct{
    int personID;
    string personName;
    string personSurname;
    int age;
    StructAdress* adres;
    double height;
};

void mainStructers(){
    PersonStruct person;
    person.personName="ahmet";
    person.personSurname="balaman";
    person.age=23;
    person.height=1.80;
    

//    equaling references
    StructAdress adres={"türkiye","şırnak"};
    person.adres=&adres;
    
//    making struct pointer and adress to person.
    PersonStruct* ptr=&person;
    cout<<ptr->adres->city<<endl;
//now we can access everything.
    
    
}

#endif /* structer_and_pointers_h */
