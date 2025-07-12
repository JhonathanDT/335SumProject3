#include <iostream> 
#include "MaxHeap.h"
#include <vector>

using namespace std;

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

    heap1.print();

    std::vector<Customer> servedCustomers;

    // for loop that deletes (serves customers)
    while( heap1.getSize() > 0 ){
        // delete the Max value in the heap
        Customer servedCustomer = heap1.deleteMax();        
        // set the service time 
        servedCustomer.setServiceTime();
        servedCustomers.push_back( servedCustomer );
    }

    // sort the vector in ascending order (based on the service time),
    sort(servedCustomers.begin(), servedCustomers.end(), [](const Customer& a, const Customer& b) {
        return a.getServiceTime() < b.getServiceTime();
    });

    /*Display sorted history*/
    cout << "\n=== Customer Service History SORTED BY SERVICE TIME ===" << endl;
    for(size_t i = 0; i < servedCustomers.size(); i++) {
        cout << "Customer: " << servedCustomers[i].getName()
             << " (Priority: " << servedCustomers[i].getPriorityLevel()
             << "), Service Time: " << servedCustomers[i].getServiceTime() << " minutes." << endl;
    }

    return 0;
}
