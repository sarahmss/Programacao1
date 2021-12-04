/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:29:59 by smodesto          #+#    #+#             */
/*   Updated: 2021/10/14 10:34:51 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exercicios.h"

/*Escrever um algoritmo para ler dois valores numéricos e apresentar a diferença do maior
pelo menor*/
 
int main(void)
{
    int n1;
    int n2;
    
    std::cout << "n1: \n";
    std::cin >> n1;
    std::cout << "n2: \n";
    std::cin >> n2;
    if  (n1 > n2)
        std::cout << (n1 - n2);
    else if  (n2 > n1)
        std::cout << (n2 - n1);
    return (0);
 }