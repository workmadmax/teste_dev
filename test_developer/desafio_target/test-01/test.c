/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:36:52 by mdouglas          #+#    #+#             */
/*   Updated: 2025/01/13 18:04:17 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// 1) Observe o trecho de código abaixo: int INDICE = 13, SOMA = 0, K = 0;
// Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
// Imprimir(SOMA);
// Ao final do processamento, qual será o valor da variável SOMA?

// respota = 91

int main()
{
    int idx = 13;
    int sum = 0;
    int k = 0;

    while (k < idx)
    {
        k = k + 1;
        sum = sum + k;
    }
    printf("soma: %d\n", sum);
    return (0);
}

// poderia fazer com for certamente

/*
int main()
{
    int index = 13;
    int sum = 0;
    int k;

    for (k = 1; k <= index; k++)
        sum = sum + k;
    printf("Soma: %d\n", sum);
    return (0);
}
*/