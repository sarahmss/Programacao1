/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:29:59 by smodesto          #+#    #+#             */
/*   Updated: 2021/10/14 18:21:56 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exercicios.h"

/*Escrever um algoritmo para ler dois números. Se os números forem iguais imprimir a
mensagem: “Números iguais” e encerrar a execução; caso contrário, imprimir o de maior
valor, acompanhando pela mensagem “é maior número”*/
 
int main(void)
{
    int n1;
    int n2;
    
    std::cout << "n1: \n";
    std::cin >> n1;
    std::cout << "n2: \n";
    std::cin >> n2;
    if  (n1 == n2)
        std::cout << "Números iguais";
    else if (n1 > n2)
        std::cout << n1 << " é o maior número";
    else if (n2 > n1)
        std::cout << n2 << " é o maior número";
    return (0);
 }