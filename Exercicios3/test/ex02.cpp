/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:29:59 by smodesto          #+#    #+#             */
/*   Updated: 2021/10/14 10:39:26 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exercicios.h"

/*Faça um algoritmo que leia um número e mostre uma mensagem indicando se este número
é par ou ímpar e se é positivo ou negativo*/
 
int main(void)
{
    int n1;
    
    std::cout << "numero: \n";
    std::cin >> n1;
    if  (n1 % 2 == 0)
        std::cout << "O número " << n1 << "é par.";
    else
        std::cout << "O número " << n1 << "é impar.";
    if  (n1 > 0)
        std::cout << "O número " << n1 << "é positivo.";
    else
        std::cout << "O número " << n1 << "é negativo.";
    return (0);
 }