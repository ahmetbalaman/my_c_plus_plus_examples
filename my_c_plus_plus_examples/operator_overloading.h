//
//  operator_overloading.h
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 22.03.2023.
//

#ifndef operator_overloading_h
#define operator_overloading_h


class OperatorOvarLoad{
public:
    OperatorOvarLoad(int xval,int yval){
        x=xval;
        y=yval;
    }
    bool operator==(const OperatorOvarLoad& rhs) const{
        return ((x==rhs.x) && (y==rhs.y));
    }
private:
    int x;
    int y;
};

void operatorOvarLoadMain(){
    OperatorOvarLoad A(3,2);
    OperatorOvarLoad B(3,3);
    OperatorOvarLoad C(2,2);
    OperatorOvarLoad D(2,2);
    if(A==B){
        std::cout<<"its Same!"<<endl;
    }else{
        std::cout<<"Nope!"<<endl;
    }
    if(B==C){
        std::cout<<"its Same!"<<endl;
    }else{
        std::cout<<"Nope!"<<endl;
    }
    if(C==D){
        std::cout<<"its Same!"<<endl;
    }else{
        std::cout<<"Nope!"<<endl;
    }
    
}


#endif /* operator_overloading_h */
