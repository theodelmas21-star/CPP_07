/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelmas2 <tdelmas2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:09:22 by tdelmas2          #+#    #+#             */
/*   Updated: 2026/06/08 15:46:09 by tdelmas2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T, typename F> 
void iter(T *array, const size_t length, F func)
{
    if (!array || !func)
        return;
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

#endif