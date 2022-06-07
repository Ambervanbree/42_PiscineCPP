/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:17:11 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/07 15:23:58 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void){
	std::cout << "Default array constructor called" << std::endl;
	this->_array = new T[0];
	this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n){
	T *tmp;
	std::cout << "Parametrised array constructor called" << std::endl;
	this->_array = new T[n];
	this->_size = n;
	for (unsigned int i = 0; i < n; i++){
		tmp = new T();
		this->_array[i] = *tmp;
		delete tmp;
	}
}

template <typename T>
Array<T>::Array(const Array &inst){
	std::cout << "Copy constructor array called" << std::endl;
	this->_size = inst.getSize();
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++){
		this->_array[i] = inst.getItem(i);
	}
}

template <typename T>
Array<T> & Array<T>::operator =(const Array &inst){
	std::cout << "Assignment operator array called" << std::endl;
	if (this->_array){
		delete [] this->_array;
	}
	this->_size = inst.getSize();
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++){
		this->_array[i] = inst.getItem(i);
	}
	return *this;
}

template <typename T>
T & Array<T>::operator[](unsigned int i){
	if (i >= this->_size){
		throw Array::outOfBoundsException();
	}
	else{
		return this->_array[i];
	}
}

template <typename T>
T & Array<T>::getItem(unsigned int i) const{
	return this->_array[i];
}

template <typename T>
void	Array<T>::displayArray(void){
	for (unsigned int i = 0; i < this->getSize(); i++){
		std::cout << "[" << this->getItem(i) << "] ";
	}
	std::cout << std::endl;
}

template <typename T>
unsigned int Array<T>::getSize(void) const{
	return this->_size;
}

template <typename T>
Array<T>::~Array(void){
	std::cout << "Destructor array called" << std::endl;
	delete [] this->_array;
}

template <typename T>
const char* Array<T>::outOfBoundsException::what() const throw(){
	return "Array element is out of bounds.";
}
