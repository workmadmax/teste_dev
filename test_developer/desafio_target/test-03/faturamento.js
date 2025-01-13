/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   faturamento.js                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:11:41 by mdouglas          #+#    #+#             */
/*   Updated: 2025/01/13 19:51:42 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora,
    faça um programa, na linguagem que desejar, que calcule e retorne:
    • O menor valor de faturamento ocorrido em um dia do mês;
    • O maior valor de faturamento ocorrido em um dia do mês;
    • Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.
*/

// em C ia ser pegado eu ia ter que fazer o parse do json sem usar libs manual daria porem optei por não!
// aqui usaremos JS com node para rodar facilmente o código

// require do fs para leitura de arquivos

const fs = require('fs');

function    calcularMedia(faturamentos) {
    const totalFaturamento = faturamentos.reduce((acc, item) => acc + item, 0);
    return (totalFaturamento / faturamentos.length);
}

// leitura do arquivo faturamento.json
fs.readFile('faturamento.json', 'utf8', (err, data) => {
    
    if (err) {
        console.error("error ao ler arquivo", err);
        return;
    }
    const faturamentoJson = JSON.parse(data);
    
    const faturamentosValidos = faturamentoJson
                                    .filter(item => item.valor > 0) // estava verificando o != null, mas o 0.0 estava pegando então coloquei essa verificação e testei passar valores null e string e funcionou bem ate o momento
                                    .map(item => item.valor);

    if (faturamentosValidos.length === 0) {
        console.log("Nenhum faturamento válido encontrado");
        return;
    } else {
        const  menorFaturamento = Math.min(...faturamentosValidos);
        const  maiorFaturamento = Math.max(...faturamentosValidos);
        const  mediaFaturamento = calcularMedia(faturamentosValidos);
        
        console.log("Menor faturamento: ", menorFaturamento);
        console.log("Maior faturamento: ", maiorFaturamento);
        console.log("Média faturamento: ", mediaFaturamento);
    }
});