/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelmas2 <tdelmas2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:13:47 by tdelmas2          #+#    #+#             */
/*   Updated: 2026/06/09 12:04:33 by tdelmas2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _elements(NULL) , _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n){
    if (n != 0)
        _elements = new T[n]();
    else
        _elements = NULL;
    _size = n;
}

template <typename T>
Array<T>::Array(const Array<T>& src) {
    _size = src._size;
    _elements = new T[_size]();
    for (unsigned int i = 0; i < _size; i++)
        _elements[i] = src._elements[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T>& rhs){
    if (this != &rhs)
    {
        delete[] (this->_elements);
        _size = rhs._size;
        _elements = new T[_size]();
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = rhs._elements[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array(){
}

template <typename T>
T &Array<T>::operator[](unsigned int index){
    if (index >= _size)
        throw IndexOutOfBounds();
    else
        return _elements[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const{
    if (index >= _size)
        throw IndexOutOfBounds();
    else
        return _elements[index];
}

template <typename T>
unsigned int Array<T>::size() const{
    return _size;
}