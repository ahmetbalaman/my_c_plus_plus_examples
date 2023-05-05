//Header file: stackADT.h

#ifndef H_StackADT 
#define H_StackADT 
 
template <class Type>
class stackADT
{
public:
    virtual void foo() = 0;
    virtual bool bar() const = 0;
    virtual bool baz() const = 0;
    virtual void qux(const Type& newItem) = 0;
    virtual Type quux() const = 0;
    virtual void corge() = 0;
    
};
        
#endif
