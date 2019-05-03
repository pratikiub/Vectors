#include "my_vector.h"
#include<iostream>
int main () {

	Vector<int> obj1(5);
	obj1.push_back(1);
	obj1.push_back(2);
	obj1.push_back(3);
	obj1.push_back(4);
	obj1.printv();
        std::cout<<obj1.pop_back()<<std::endl;
        std::cout<<obj1.pop_back()<<std::endl;
	obj1.printv();
        obj1.clear();
	obj1.printv();
	return 0;

}
