#include "my_vector.h"
#include <iostream>

template class Vector<int>;

template <typename T>
void Vector<T>::push_back(T value) {
    if (size_ > capacity_) {
			    //double the size of an array
			    capacity_ =capacity_ << 1;
			    T* new_array = new T[capacity_];		
			    for (unsigned int i = 0; i < size_; i++) {
				    new_array[i] = array_[i];
			    }
			    delete [] array_;
			    array_ = new_array;				
    }

    array_[size_] = value;
    size_++;

}



template <class T>
T& Vector<T>::pop_back() {

    if (!empty()) {
            size_--;
            return array_[size_];
    }
    return array_[size_];
 
}

template <class T>
typename Vector<T>::iter Vector<T>::begin() {
	if(!empty())
		return &array_[0];

	return end();
}

template <class T>
void Vector<T>::printv() {
        if(!empty()) {
	for(typename Vector<T>::iter a = begin(); a!= end(); a++) {
		std::cout<<*a<<std::endl;
	}
        } else {
            std::cout<<"Vec is empty: " <<std::endl;
        }    

}

template <class T>
typename Vector<T>::iter Vector<T>::end() {
    return &array_[size_];
}

template <class T>
void Vector<T>::clear() {
    delete [] array_;
    array_ = NULL;
    size_ = 0;
    capacity_ = DEFAULT_ARRAY_SIZE; 
}    

template <class T>
void Vector<T>::erase(typename Vector<T>::iter& a) {
//unimplemented

}
