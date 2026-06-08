/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelmas2 <tdelmas2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:39:18 by tdelmas2          #+#    #+#             */
/*   Updated: 2026/06/08 15:57:04 by tdelmas2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

#include <string>

template <typename T> void printElement(const T &x)
{
    std::cout << x << " ";
}

void incrementInt(int &n)
{
    n++;
}

void printUpperString(const std::string &s)
{
    std::cout << s << "|";
}

int main()
{
    int iArr[] = {1, 2, 3};
    iter(iArr, 3, printElement<int>);
    std::cout << "\n";

    iter(iArr, 3, incrementInt);
    iter(iArr, 3, printElement<int>);
    std::cout << "\n";

    const std::string sArr[] = {"A", "B", "C"};
    iter(sArr, 3, printElement<std::string>);
    std::cout << "\n";

    iter(sArr, 3, printUpperString);
    std::cout << "\n";
    // iter(strArray, strLen, incrementInt);
    return 0;
}