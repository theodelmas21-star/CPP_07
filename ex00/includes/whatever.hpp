/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelmas2 <tdelmas2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:09:22 by tdelmas2          #+#    #+#             */
/*   Updated: 2026/06/08 11:39:53 by tdelmas2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b)
{
    T t;

    t = a;
    a = b;
    b = t;
}

template <typename T> T min(T a, T b)
{
    return ((a < b) ? a : b);
}

template <typename T> T max(T a, T b)
{
    return ((a > b) ? a : b);
}

#endif