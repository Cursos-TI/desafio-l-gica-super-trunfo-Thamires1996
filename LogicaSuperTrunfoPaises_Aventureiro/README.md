# Super Trunfo de Países (Aventureiro)

Programa em C que permite cadastrar cartas de países, comparar atributos e determinar a vencedora conforme regras específicas.

## Compilação e Execução

**Requisitos:**  
- Compilador C (GCC, Clang, MinGW, CodeBlocks, DevC++, OnlineGDB etc.)

**Passo a passo:**

1. Salve o arquivo do código como `super_trunfo.c`.
2. Abra o terminal na pasta do arquivo.
3. Compile com:

gcc super_trunfo.c -o super_trunfo

ou 

clang super_trunfo.c -o super_trunfo


4. Execute o programa: ./super_trunfo


No Windows, execute com:

super_trunfo.exe

Ou use um compilador online como [OnlineGDB](https://www.onlinegdb.com/online_c_compiler) e cole o código no editor!

---

## Como Utilizar

Assim que o programa iniciar:

1. **Cadastro:**  
Você será solicitado a cadastrar os dados das duas cartas (países):  
- Nome do país  
- População (apenas números inteiros)  
- Área (em km², apenas números positivos)  
- PIB (em bilhões de dólares)  
- Número de pontos turísticos (apenas números inteiros positivos)

2. **Menu de Comparação:**  
Após o cadastro, as informações das duas cartas serão exibidas.  
Aparecerá o menu abaixo:

=== MENU DE COMPARACAO ===
Escolha o atributo para comparar:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
0 - Sair
Digite sua opcao:

text

3. **Exemplo de Uso do Menu:**
- Digite o número do atributo que deseja comparar.
- O programa irá exibir os valores das duas cartas para o atributo escolhido e vai informar qual carta venceu.
- Se quiser comparar outro atributo, basta escolher novamente outra opção após o resultado.
- Para encerrar, digite `0`.

4. **Atributos Disponíveis para Comparação:**
- **1 - População**: vence quem tiver maior população.
- **2 - Área **: vence quem tiver maior área.
- **3 - PIB **: vence quem tiver maior PIB.
- **4 - Pontos Turísticos **: vence quem tiver mais pontos turísticos.
- **5 - Densidade Demográfica **: vence quem tiver _menor_ densidade (População / Área).
- **0 - Sair: ** encerra o programa.

---

## Observações

- O sistema valida as entradas nos cadastros (não aceita valores negativos ou zero).
- Você pode repetir quantas comparações quiser sem sair do programa.
- Em caso de empate, o programa mostra a mensagem "Empate!".

---