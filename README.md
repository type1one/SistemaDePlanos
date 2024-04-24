## Plano de Benefícios de Saúde e Odontológico

Este é um programa simples em C para gerenciar informações de planos de saúde e odontológicos para beneficiários. Ele permite ao usuário inserir os detalhes do beneficiário e do plano escolhido, calcular o valor total do plano e exibir as informações inseridas.

### Funcionalidades

- O programa solicita ao usuário que escolha o tipo de plano: Saúde ou Odontológico.
- Para cada tipo de plano, o usuário deve inserir:
  - Nome do beneficiário.
  - CPF do beneficiário.
  - Data de nascimento do beneficiário (no formato dd/mm/aaaa).
  - Valor individual do plano.
- O programa calcula o valor total do plano com base no valor individual inserido.
- Após inserir todas as informações, o programa exibe os detalhes do beneficiário e do plano, incluindo o valor total.

### Como Usar

1. Compile o programa utilizando um compilador C compatível.
   ```bash
   gcc programa.c -o programa
   ```
2. Execute o programa.
   ```bash
   ./programa
   ```
3. Siga as instruções exibidas no console para inserir as informações do beneficiário e do plano desejado.

### Exemplo de Uso

```
Qual o tipo de plano? 1 - Saúde | 2 - Odonto
1
Informe o nome do beneficiário: João da Silva
Informe o CPF do beneficiário: 12345678900
Informe a data de nascimento (dd/mm/aaaa) do beneficiário: 01/01/1980
Informe o valor individual do plano de saúde: 150.00

Beneficiário: João da Silva
CPF: 12345678900
Data de nascimento: 01/01/1980
Valor individual do plano de saúde: R$ 150.00
Valor total do plano de saúde: R$ 150.00
```

### Observações

- Certifique-se de inserir as informações corretamente para evitar erros no cálculo do valor total do plano.
- Este programa é apenas um exemplo simplificado e pode ser expandido com mais funcionalidades e validações conforme necessário.
- Não se esqueça de ajustar os limites e validações de entrada conforme exigido pelo seu caso de uso específico.

--- Meu discord: zparker :)