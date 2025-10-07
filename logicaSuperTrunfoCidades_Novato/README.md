# Super Trunfo - Comparação de Cartas de Cidades

Um programa simples em linguagem C que implementa a lógica de comparação entre duas cartas do jogo Super Trunfo, baseado em dados de cidades brasileiras (Manaus/AM e Recife/PE).

## 📋 Descrição

O programa cadastra automaticamente duas cartas de cidades com seus respectivos atributos, calcula valores derivados (densidade populacional e PIB per capita) e realiza uma comparação baseada no atributo **População**, determinando a carta vencedora.

### Cartas Incluídas:
- **Carta 1:** Manaus, Amazonas (Código: A01)
- **Carta 2:** Recife, Pernambuco (Código: B02)

## 🛠️ Compilação e Execução

### Requisitos
- Compilador C (GCC, Clang, MinGW, etc.)
- Sistema operacional: Windows, Linux, macOS

### Passos para executar:

1. **Salve o código** em um arquivo chamado `super_trunfo.c`

2. **Compile o programa:**
gcc super_trunfo.c -o super_trunfo

text

Ou usando Clang:
clang super_trunfo.c -o super_trunfo

text

3. **Execute o programa:**

**Linux/macOS:**
./super_trunfo

text

**Windows:**
super_trunfo.exe

text

### Alternativas Online
Se preferir, você pode executar o código em compiladores online como:
- [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
- [Replit](https://replit.com)
- [Programiz](https://www.programiz.com/c-programming/online-compiler)

## 📊 Atributos das Cartas

Cada carta contém os seguintes atributos:

| Atributo | Descrição | Unidade |
|----------|-----------|---------|
| Estado | Nome do estado | Texto |
| Código da Carta | Identificador único | Texto (ex: A01) |
| Nome da Cidade | Nome da cidade | Texto |
| População | Número de habitantes | Habitantes |
| Área | Área territorial | km² |
| PIB | Produto Interno Bruto | Bilhões |
| Pontos Turísticos | Quantidade de pontos turísticos | Quantidade |
| Densidade Populacional | População ÷ Área (calculado) | hab/km² |
| PIB per capita | (PIB × 1000) ÷ População (calculado) | Milhares |

## 🎯 Funcionamento

1. **Exibição dos dados:** O programa mostra todas as informações de ambas as cartas
2. **Cálculos automáticos:** Calcula densidade populacional e PIB per capita
3. **Comparação:** Compara as cartas pelo atributo **População** (maior valor vence)
4. **Resultado:** Exibe qual carta venceu ou se houve empate

## 🔧 Estrutura do Código

### Funções Principais:

- **`calcularDensidade()`**: Calcula densidade populacional (população ÷ área)
- **`calcularPIBPerCapita()`**: Calcula PIB per capita ((PIB × 1000) ÷ população)
- **`main()`**: Função principal que executa todo o fluxo do programa

### Características:

- ✅ **Tratamento de divisão por zero**: Funções retornam 0 quando denominador é zero
- ✅ **Código comentado**: Documentação clara de cada função
- ✅ **Saída formatada**: Apresentação organizada dos resultados
- ✅ **Dados realistas**: Baseado em informações reais das cidades

## 🚀 Possíveis Melhorias

Este código pode ser expandido para incluir:
- Menu interativo para escolher o atributo de comparação
- Cadastro manual de cartas pelo usuário
- Comparação de múltiplas cartas
- Sistema de pontuação
- Validação de entradas do usuário

## 📄 Licença

Este projeto é de uso educacional e está disponível sob licença livre para fins de aprendizado.

## 👥 Contribuições

Sinta-se à vontade para fazer melhorias no código, adicionar novas funcionalidades ou corrigir possíveis bugs.