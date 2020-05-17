#include <iostream>
#include "lib/library.h"
#include "lib/Person.h"
#include "lib/Array.h"

int main() {

    std::cout << LIB_LIBRARY_H::CountPeople() << std::endl;
    Person *p1 = new Person(1,2);
    Person *p2 = new Person(3,4);
    std::cout << LIB_LIBRARY_H::CountPeople() << std::endl;
    delete(p1);
    delete(p2);
    std::cout << LIB_LIBRARY_H::CountPeople() << std::endl;
    char arr[5] = { 'a', 'b', 'c', 'd', 'e' };
    Array<char> a(arr, 5);
    a.print();
    return 0;
}
