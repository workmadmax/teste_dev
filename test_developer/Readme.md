# Projeto Test Developer

## Requisitos

Para executar os testes deste projeto, você precisará instalar os seguintes softwares:

- GCC (GNU Compiler Collection)
- Node.js

## Instalação

### GCC

Para instalar o GCC, execute o seguinte comando no terminal:

```sh
sudo apt-get install gcc
```

### Node.js

Para instalar o Node.js, siga os passos abaixo:

1. Baixe e execute o instalador do Node.js a partir do [site oficial](https://nodejs.org/).
2. Siga as instruções do instalador para concluir a instalação.

```sh
sudo apt-get install nodejs
```

## Notas

Os testes 01 e 02 são feitos em C. Basta entrar nas pastas dos testes e executar os comandos:

### Teste 01
```sh
./test01
```

### Teste 02
```sh
./fibonacci
```

Para não fazer o parse do JSON manualmente em C, optei por usar JavaScript nos testes 04 e 05. Basta entrar na pasta e executar:

### Teste 04
```sh
node faturamento.js
```

### Teste 05
```sh
node faturamento2.js
```

No exercício 05, optei por voltar ao C, já que era algo simples de ser feito:

### Teste 05 (em C)
```sh
./reverse
```