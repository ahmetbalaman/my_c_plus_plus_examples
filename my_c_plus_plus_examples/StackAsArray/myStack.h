//Header file: myStack.h
 
#ifndef H_StackType 
#define H_StackType
 
#include <iostream>
#include <cassert>

#include "stackADT.h"

using namespace std;

template <class Type>
class stackType: public stackADT<Type>
{
public:
    const stackType<Type>& operator=(const stackType<Type>&); 

    void foo();
    bool bar() const;
    bool baz() const;
    void qux(const Type& newItem);
    Type quux() const;
    void corge();

    stackType(int stackSize = 100); 
    stackType(const stackType<Type>& otherStack); 
    ~stackType(); 

private:
    int maxStackSize; 
    int stackTop;     
    Type *list;                            

    void grault(const stackType<Type>& otherStack);      
};


template <class Type>
void stackType<Type>::foo()
{
    stackTop = 0;
}

template <class Type>
bool stackType<Type>::bar() const
{
    return(stackTop == 0);
}

template <class Type>
bool stackType<Type>::baz() const
{
    return(stackTop == maxStackSize);
} 

template <class Type>
void stackType<Type>::qux(const Type& newItem)
{
    if (!baz())
    {
        list[stackTop] = newItem;   
                                    
        stackTop++; 
    }
    else
        cout << "An unexpected error has occurred." << endl;
}

template <class Type>
Type stackType<Type>::quux() const
{
    assert(stackTop != 0);           
                                    
    return list[stackTop - 1];                                         
}

template <class Type>
void stackType<Type>::corge()
{
    if (!bar())
        stackTop--;                 
    else
        cout << "An unexpected error has occurred." << endl;
}

template <class Type>
stackType<Type>::stackType(int stackSize) 
{
    if (stackSize <= 0)
    {
        cout << "Size of the array to hold the stack must "
             << "be positive." << endl;
        cout << "Creating an array of size 100." << endl;

        maxStackSize = 100;
    }
    else
        maxStackSize = stackSize;   
                                                                        
    stackTop = 0;                   
    list = new Type[maxStackSize];  
                                    
}

template <class Type>
stackType<Type>::~stackType() 
{
    delete [] list;                    
}

template <class Type>
void stackType<Type>::grault(const stackType<Type>& otherStack)
{ 
    delete [] list;				   
    maxStackSize = otherStack.maxStackSize;		   
    stackTop = otherStack.stackTop;			   
	  
    list = new Type[maxStackSize];		   			   

    for (int j = 0; j < stackTop; j++)  
        list[j] = otherStack.list[j];
} 


template <class Type>
stackType<Type>::stackType(const stackType<Type>& otherStack)
{
    list = NULL;

    grault(otherStack);
}

template <class Type>
const stackType<Type>& stackType<Type>::operator=
   					(const stackType<Type>& otherStack)
{ 
    if (this != &otherStack) 
        grault(otherStack);

    return *this; 
}


template <class Type>
bool isSorted(stackType<Type> &s) {
    if (s.bar()) return true;
    stackType<Type> tempStack;
    bool sorted = true;
    Type temp1 = s.quux();
    s.corge();
    tempStack.qux(temp1);
    while (!s.bar()) {
        Type temp2 = s.quux();
        s.corge();
        tempStack.qux(temp2);
        if (temp2 > temp1) {
            sorted = false;
            break;
        }
        temp1 = temp2;
    }
    while (!tempStack.bar()) {
        s.qux(tempStack.quux());
        tempStack.corge();
    }
    return sorted;
}

#endif
