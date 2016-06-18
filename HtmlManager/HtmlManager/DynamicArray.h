/*
DYNAMIC ARRAY C++ IMPLEMENTATION
22.10.2015
*/

#ifndef _DYNAMIC_ARRAY_H_
#define _DYNAMIC_ARRAY_H_

#include <ostream>

template <typename T>
class DynamicArray {
public:
	DynamicArray(size_t);
	DynamicArray();
	~DynamicArray();
	DynamicArray(DynamicArray<T> const &);
	DynamicArray& operator=(DynamicArray<T> const &);
	T& operator[](size_t);
	const T& operator[](size_t) const;
	void push_back(T const & element);
	void removeAt(size_t);
	size_t getLength() const;
private:
	void releaseMemory();
	void copy(DynamicArray<T> const &);
	bool isEmpty();
private:
	static const size_t DefaultCapacity = 15;
	size_t size;
	size_t capacity;
	T* data;
};


// -------------------------------------------

template <typename T>
DynamicArray<T>::DynamicArray(size_t capacity) : size(0), capacity(capacity), data(new T[capacity]) {
}

template <typename T>
DynamicArray<T>::DynamicArray() : size(0), capacity(DefaultCapacity), data(new T[capacity]) {
}

template <typename T>
DynamicArray<T>::~DynamicArray() {
	releaseMemory();
}

template <typename T>
DynamicArray<T>::DynamicArray(DynamicArray<T> const & otherData) {
	copy(otherData);
}

template <typename T>
DynamicArray<T> & DynamicArray<T>::operator=(DynamicArray<T> const & otherData) {
	if (this != &otherData) {
		releaseMemory();
		copy(otherData);
	}
	return *this;
}

template <typename T>
T& DynamicArray<T>::operator[](size_t index) {
	if (index >= size) {
		throw "Index out of bounds exception\n";
	}
	return data[index];
}

template <typename T>
const T& DynamicArray<T>::operator[](size_t index) const {
	if (index >= size) {
		throw "Index out of bounds exception\n";
	}
	return data[index];
}

// -------------------------------------------

template <typename T>
void DynamicArray<T>::releaseMemory() {
	delete[] data;
	data = nullptr;
}

template <typename T>
void DynamicArray<T>::copy(DynamicArray<T> const & otherData) {
	this->data = new T[otherData.capacity];
	for (size_t i = 0; i < otherData.size; i++) {
		data[i] = otherData[i];
	}
	capacity = otherData.capacity;
	size = otherData.size;
}

template <typename T>
bool DynamicArray<T>::isEmpty() {
	return size == 0;
}

// -------------------------------------------

template <typename T>
void DynamicArray<T>::push_back(T const & element) {
	if (size == capacity) {
		capacity = capacity * 2 + 1;
		T* newData = new T[capacity];
		for (size_t i = 0; i < size; i++) {
			newData[i] = data[i];
		}
		releaseMemory();
		data = newData;
	}
	data[size++] = element;
}

template <typename T>
void DynamicArray<T>::removeAt(size_t index) {
	if (index >= size) {
		throw "Index out of bounds exception\n";
	}
	for (size_t i = index; i < size - 1; i++) {
		data[i] = data[i + 1];
	}
	size--;
}

template <typename T>
size_t DynamicArray<T>::getLength() const {
	return size;
}

#endif

