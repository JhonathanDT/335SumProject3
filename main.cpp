#include <iostream> 
#include "MaxHeap.h"
#include <vector>

using namespace std;

template <class Comparable>
void deleteAll(MaxHeap<Comparable>& heap)
{
    int size = heap.getSize();
    for(int i = 0; i < size; i++)
        cout<<heap.deleteMax()<<" ";
    cout<<endl;
}

int main(){

    // create customers (from the struct)
    Customer Customer1("Abeebah");
    Customer Customer2("Babeebah");
    Customer Customer3("Cabeebah");
    Customer Customer4("Dabeebah");
    Customer Customer5("Eabeebah");
    Customer Customer6("Fbeebah");
    Customer Customer7("Gabeebah");
    Customer Customer8("Habeebah");
    Customer Customer9("Iabeebah");
    Customer Customer10("Jabeebah");

    MaxHeap<Customer> heap1;
    heap1.insert(Customer1);
    heap1.insert(Customer2);
    heap1.insert(Customer3);
    heap1.insert(Customer4);
    heap1.insert(Customer5);
    heap1.insert(Customer6);
    heap1.insert(Customer7);
    heap1.insert(Customer8);
    heap1.insert(Customer9);
    heap1.insert(Customer10);

    // heap1.print();

    // for loop that deletes (serves customers)
        // set the service time 

    // add the served customers in a vector 

    // sort the vector in ascending order (based on the service time),

    return 0;
}


// #include "MaxHeap.h"
// #include<iostream>

// using namespace std;

// template <class Comparable>
// void deleteAll(MaxHeap<Comparable>& heap)
// {
//     int size = heap.getSize();
//     for(int i = 0; i < size; i++)
//         cout<<heap.deleteMax()<<" ";
//     cout<<endl;
// }

// int main()
// {
//     MaxHeap<int> heap1;
//     heap1.insert(10);
//     heap1.insert(-3);
//     heap1.insert(17);
//     heap1.insert(4);
//     heap1.insert(1);
//     heap1.insert(100);

//     heap1.print();

//     double arr[] = {2.718, .618, 1.618, 3.14, -1, 1.414, .707};
//     MaxHeap<double> heap2(arr, 7);
//     heap2.print();

//     // test delete
//     cout<<"First Delete: ";
//     deleteAll(heap1);
//     cout<<"Second Delete: ";
//     deleteAll(heap1);

//     cout<<"First Delete: ";
//     deleteAll(heap2);
//     cout<<"Second Delete: ";
//     deleteAll(heap2);

//     return 0;
// }