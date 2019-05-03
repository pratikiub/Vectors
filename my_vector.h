#include <iostream>

#define DEFAULT_ARRAY_SIZE 100

template <typename T>
class Vector {
	typedef T* iter;
	public:
		Vector(unsigned int size) {
			size_ = 0;
			capacity_ = DEFAULT_ARRAY_SIZE;
			array_ = new T[capacity_];
		}

		bool empty() {
			return size_ == 0;
		}

		void push_back(T a);

		T& pop_back();

		void erase(iter& a);

		unsigned int size() {
			return size_;
		}

		iter begin();

		iter end();

		void printv();
		void clear();


private:
	T * array_;
	unsigned int size_;
	unsigned int capacity_;

};
