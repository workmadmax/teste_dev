/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   faturamento2.js                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:23:49 by mdouglas          #+#    #+#             */
/*   Updated: 2025/01/13 20:31:45 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
• SP – R$67.836,43
• RJ – R$36.678,66
• MG – R$29.229,88
• ES – R$27.165,48
• Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação
    que cada estado teve dentro do valor total mensal da distribuidora.  
*/
const faturamentoPorEstado = {
    
    SP: 67836.43,
    RJ: 36678.66,
    MG: 29229.88,
    ES: 27165.48,
    Outros: 19849.53
}

const totalFaturamento = Object.values(faturamentoPorEstado).reduce((acc, curr) => acc + curr, 0);

for (let estado in faturamentoPorEstado) {
    const percentual = ((faturamentoPorEstado[estado] / totalFaturamento) * 100).toFixed(2);
    console.log(`${estado}: ${percentual}%`);
}