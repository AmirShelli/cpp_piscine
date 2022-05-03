/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:36:40 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/21 11:12:23 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "short"<< sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Span sp2 = Span(10000);
        std::vector<int> v;
        for (size_t i = 0; i < 10000; i++)
        {
            v.push_back(i * 10);
        }
        sp2.addNumber(v.begin(), v.end());
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
}