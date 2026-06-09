/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelmas2 <tdelmas2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:09:01 by tdelmas2          #+#    #+#             */
/*   Updated: 2026/06/09 12:08:15 by tdelmas2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array{
    private:
    T *_elements;
    unsigned int _size;

    public:
    Array();
    Array(unsigned int n);
    Array(const Array<T>& src);
    Array &operator=(const Array<T>& rhs);
    ~Array();

    T &operator[](unsigned int index);
    const T &operator[](unsigned int index) const;
    unsigned int size() const;

    class IndexOutOfBounds : public std::exception
    {
        public:
        virtual const char *what() const throw()
        {
            return "Index out of bounds";
        }
    };
};

#include "../srcs/Array.tpp"

#endif