# Super Trunfo de Países (Aventureiro)

Programa em C que compara cartas de dois países, considerando atributos reais e dados atualizados para 2025.

## 📦 Descrição

- O programa compara Brasil e Argentina em cinco atributos disponíveis.
- Você escolhe o atributo via menu e vê quem vence na disputa.
- O menu permite novas comparações sem ter que sair do programa.

## 🚀 Compilação e Execução

**Pré-requisitos:**  
- Compilador C (ex: GCC, MinGW, Clang) ou IDE (CodeBlocks, DevC++, VS Code, etc.)

**Passos:**
1. Salve o código como `super_trunfo_paises.c`
2. Compile:
gcc super_trunfo_paises.c -o super_trunfo_paises

text
ou
clang super_trunfo_paises.c -o super_trunfo_paises

text
3. Execute:
- Linux/macOS:
  ```
  ./super_trunfo_paises
  ```
- Windows:
  ```
  super_trunfo_paises.exe
  ```
Ou use compiladores online ([OnlineGDB](https://www.onlinegdb.com/online_c_compiler), [Replit](https://replit.com/)).

## 📝 Como Usar

Ao iniciar, o menu será exibido:

=== SUPER TRUNFO DE PAISES ===
Escolha o atributo para comparar:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
0 - Sair
Digite sua opcao:

text

- **Digite o número desejado** e pressione Enter.
- Veja a comparação detalhada, o vencedor e continue jogando escolhendo novos atributos.
- Para encerrar, digite `0`.

## 🎲 Atributos para Comparação

- **População**: quem tiver mais habitantes vence.
- **Área**: maior território vence.
- **PIB**: maior Produto Interno Bruto (em bilhões de dólares) vence.
- **Pontos Turísticos**: maior quantidade vence.
- **Densidade Demográfica**: menor densidade vence.

## 📊 Dados Utilizados (2025)

- **Brasil**  
  População: 213.400.000  
  Área: 8.515.767 km²  
  PIB: US$ 2.360 bi  
  Pontos Turísticos: 60  
  Densidade: (calculada automaticamente)

- **Argentina**  
  População: 47.680.000  
  Área: 2.780.400 km²  
  PIB: US$ 679 bi  
  Pontos Turísticos: 34  
  Densidade: (calculada automaticamente)

## 🛡️ Robustez

- O menu aceita apenas opções entre `0` e `5` e informa caso você digite uma opção inválida.
- O programa só encerra ao digitar `0`.

## 🧩 Possíveis Expansões

- Permitir cadastro dos países pelo usuário.
- Suportar mais países e cartas.
- Adicionar outros indicadores (ex: IDH, expectativa de vida).

---

Este projeto é livre para fins didáticos, acadêmicos e de diversão!