/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:13:37 by mdouglas          #+#    #+#             */
/*   Updated: 2025/01/13 21:24:12 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdbool.h"

#define MAX_INT 2147483647
#define MIN_INT -2147483648

bool    ft_check_int( int num ) {
    if ( num > MAX_INT || num < MIN_INT )
        return (false);
    return (true);
}

bool    ft_check_valid( int num ) {
    if ( num < 0 )
        return (false);
    return (true);
}

int ft_isfibonacci( int num ) {
    
    int a = 0, b = 1, c = 0;

    if ( ft_check_valid( num ) == false || ft_check_int( num ) == false )
        return (0);
    
    while ( c < num ) {
        c = a + b;
        a = b;
        b = c;
    }
    return (c == num);
}

void ft_print_fibonacci( int value ) {
    int a = 0, b = 1, c = 0;
    
    printf(" sequencia de fibonacci ate o numero escolhido %d\n", value);

    if ( ft_check_valid( value ) == false || ft_check_int( value ) == false ) {
        printf("Valor invalido\n");
        return ;
    }
    while ( c <= value ) {
        c = a + b;
        if ( c > value )
            break;
        printf(" %d ", c);
        a = b;
        b = c;
    }
    printf("\n\n");
}

int main () {
    
    int num;

    printf("insert value: ");
    scanf("%d", &num);
    
    if (ft_isfibonacci( num )) {
        printf("Number %d pertence a sequencia.\n", num);
    } else {
        printf("Number %d nao pertecen a sequencia\n", num);
    }

    printf(" ======================== ========================= ================== ");
    ft_print_fibonacci( num );
    return (0);
}