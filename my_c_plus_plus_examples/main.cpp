//
//  main.cpp
//  c++ dersleri
//
//  Created by Ahmet Balaman on 28.02.2023.
//
/*
#include <iostream>
#include <vector>
#include "IntCell.h"
#include "pointerlara_giris.h"
#include "function_overloading.h"
#include "dynamic_memory.h"
#include "pointer_with_class.hpp"
#include "Car_Header.h"
#include "pointers_in_class.hpp"
#include "animal.hpp"
#include "cat.hpp"
#include "other_animals.hpp"
#include "entering_files.hpp"
#include "pointer_with_arrays.h"
#include "structer_and_pointers.h"
#include "try_catch_throw.h"
#include "operator_overloading.h"

#include "entering_vectors.h"
#include "entering_virtuals.h"
#include <iostream>
#include "StackAsArray/myStack.h"

using namespace::std;
*/


#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

#define NUM_CUSTOMERS 3
#define NUM_PRODUCTS 5
#define NUM_THREADS_PER_CUSTOMER 3

typedef struct {
    int id;
    int quantity;
} Order;

typedef struct {
    int customer_ID;
    double customer_Balance;
    Order ordered_Items[NUM_THREADS_PER_CUSTOMER];
    Order purchased_Items[NUM_THREADS_PER_CUSTOMER];
    int purchased_Items_Count;
} Customer;

typedef struct {
    int product_ID;
    double product_Price;
    int product_Quantity;
} Product;

pthread_mutex_t product_mutex = PTHREAD_MUTEX_INITIALIZER;
Product products[NUM_PRODUCTS];
Customer customers[NUM_CUSTOMERS];

void printProductsInfo(const char *message) {
    printf("%s\n", message);
    printf("Product ID   Quantity  Price\n");
    for (int i = 0; i < NUM_PRODUCTS; i++) {
        printf("%-12d %-9d %.2f\n", products[i].product_ID, products[i].product_Quantity, products[i].product_Price);
    }
}

void printCustomerInfo(const Customer customer) {
    printf("Customer %d:\n", customer.customer_ID);
    printf("Initial balance: $%.2f\n", customer.customer_Balance);
    printf("Ordered products:\n");
    printf("ID   Quantity\n");
    for (int i = 0; i < NUM_THREADS_PER_CUSTOMER; i++) {
        printf("%-4d %d\n", customer.ordered_Items[i].id, customer.ordered_Items[i].quantity);
    }
    printf("Purchased products:\n");
    printf("ID   Quantity\n");
    for (int i = 0; i < customer.purchased_Items_Count; i++) {
        printf("%-4d %d\n", customer.purchased_Items[i].id, customer.purchased_Items[i].quantity);
    }
}

void *order_products(void *arg) {
    Customer *customer = (Customer *)arg;

    for (int i = 0; i < NUM_THREADS_PER_CUSTOMER; i++) {
        int product_id = customer->ordered_Items[i].id;
        int quantity = customer->ordered_Items[i].quantity;

        pthread_mutex_lock(&product_mutex);

        int product_index = -1;
        for (int j = 0; j < NUM_PRODUCTS; j++) {
            if (products[j].product_ID == product_id) {
                product_index = j;
                break;
            }
        }

        if (product_index != -1) {
            double total_cost = products[product_index].product_Price * quantity;

            if (customer->customer_Balance >= total_cost && products[product_index].product_Quantity >= quantity) {
                customer->customer_Balance -= total_cost;
                products[product_index].product_Quantity -= quantity;

                customer->purchased_Items[customer->purchased_Items_Count].id = product_id;
                customer->purchased_Items[customer->purchased_Items_Count].quantity = quantity;
                customer->purchased_Items_Count++;
            }
        }

        pthread_mutex_unlock(&product_mutex);
    }

    return NULL;
}

int main() {
    srand(time(NULL));

    for (int i = 0; i < NUM_PRODUCTS; i++) {
        products[i].product_ID = i + 1;
        products[i].product_Price = rand() % 200 + 1;
        products[i].product_Quantity = rand() % 10 + 1;
    }

    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        customers[i].customer_ID = i + 1;
        customers[i].customer_Balance = rand() % 200 + 1;
        customers[i].purchased_Items_Count = 0;

        for (int j = 0; j < NUM_THREADS_PER_CUSTOMER; j++) {
            customers[i].ordered_Items[j].id = rand() % NUM_PRODUCTS + 1;
            customers[i].ordered_Items[j].quantity = rand() % 5 + 1;
        }
    }

    printProductsInfo("Initial products:");

    pthread_t threads[NUM_CUSTOMERS];
    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        pthread_create(&threads[i], NULL, order_products, (void *)&customers[i]);
    }

    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        pthread_join(threads[i], NULL);
    }

    printProductsInfo("Updated products:");

    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        printCustomerInfo(customers[i]);
    }

    pthread_mutex_destroy(&product_mutex);

    return 0;
}














/*

void forEachExample();
void vectorMain();


int main()
{
    stackType<int> stack1;
    stack1.qux(1);
    stack1.qux(2);
    stack1.qux(3);
    if(isSorted(stack1)){
        cout << "Stack 1 Dizi Sıralı "<<endl;
    }else{
        cout << "Stack 1 Dizi Sıralı Değil"<<endl;
    }
        stackType<int> stack2;
        stack2.qux(3);
        stack2.qux(2);
        stack2.qux(1);
    if(isSorted(stack2)){
        cout << "Stack 2 Dizi Sıralı "<<endl;
    }else{
        cout << "Stack 2 Dizi Sıralı Değil"<<endl;
    }
       return 0;
}

void forEachExample(){
    int a[]={1,2,3,4};
    
    for(int item:a){
        cout<<item<<endl;
    }
}
void inheritance(){
    Animal animal("animal");
    animal.eat();
    animal.sleep();
    
    Cat cat("Happy");
    cat.makeSound();
    
    Dog dog("BullDog");
    dog.makeSound();
    
    Bird bird("Cici Kuş");
    bird.makeSound();
}

void classInPointer(){
    NewCar*car=new NewCar("New","Like a view",123,4);
    
     cout<<car->showMeEveryThing();
     car->setNewKm(321);
    cout<<endl<<" pointer Car Door Number: "<<*(car->classPointer)<<endl;
    cout<<endl<<"Not pointer Car  Method Calling: "<<car->showMeKm()<<endl;
    NewCar car2("mrb","123",3,4);
    cout<<endl<<"Not pointer Car Door Number: "<<*(car2.classPointer)<<endl;
    cout<<endl<<"Not pointer Car  Method Calling: "<<car2.showMeKm()<<endl;
    cout<<car2.showMeEveryThing();
    
    delete car;
}

void carDestructor(){
    Person ahmet("Ahmet","Balaman",20);
    Person samanta("Samanta","sister",25);
    ahmet.getEverything();
    Person *pointerAhmet;
    cout<<endl;
    pointerAhmet=&ahmet;
    pointerAhmet->getEverything();
    pointerAhmet=&samanta;
    cout<<endl;
    pointerAhmet->getEverything();
    pointerAhmet=new Person("bu yeni","gerçek",22);
    cout<<endl;
    pointerAhmet->getEverything();
    delete pointerAhmet;
    cout<<endl;
}



void vectorMain(){
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    v.pop_back();
    v.erase(v.end() - 1);
    cout<<"another delete logic:"<<v[1];
    
    
    int t=v[v.size()-1];
    cout<<"is it : "<<t;
    
    v.pop_back();
    
}

*/

/*
 sister elif
 #include <iostream>
 #include <vector>
 using namespace std;

 int main() {
     int n;
     cin >> n;

     vector<int> shelf_sizes(n);
     int total_capacity = 0;
     for (int i = 0; i < n; i++) {
         cin >> shelf_sizes[i];
         total_capacity += shelf_sizes[i];
     }

     int m;
     cin >> m;

     for (int i = 0; i < m; i++) {
         int book_number;
         cin >> book_number;

         if (book_number > total_capacity) {
             cout << "Book number " << book_number << " does not fit in any shelf." << endl;
         } else {
             int shelf_number = 1;
             int books_on_shelf = shelf_sizes[0];
             while (book_number > books_on_shelf) {
                 shelf_number++;
                 books_on_shelf += shelf_sizes[shelf_number-1];
             }
             cout << shelf_number << endl;
         }
     }

     return 0;
 }

 */
