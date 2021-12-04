/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:29:59 by smodesto          #+#    #+#             */
/*   Updated: 2021/10/14 17:27:22 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exercicios.h"

/*Escrever um algoritmo para ler e imprimir três números. Se o primeiro for positivo,
imprimir sua raiz quadrada, caso contrário, imprimir o seu quadrado; se o segundo número
for maior que 10 e menor que 100, imprimir a mensagem: “Número está entre 10 e 100 –
intervalo permitido”; se o terceiro número for menor que o segundo, calcular e imprimir a
diferença entre eles, caso contrário, imprimir o terceiro número adicionado de 1.*/
 
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