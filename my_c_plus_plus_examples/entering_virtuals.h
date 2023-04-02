//
//  entering_virtuals.h
//  my_c_plus_plus_examples
//
//  Created by Ahmet Balaman on 22.03.2023.
//

#ifndef entering_virtuals_h
#define entering_virtuals_h


class Base {
public:
    virtual void func() {
        std::cout << "Base::func() called\n";
    }
};

class Derived : public Base {
public:
    void func() override {
        std::cout << "Derived::func() called\n";
    }
};


#endif /* entering_virtuals_h */
