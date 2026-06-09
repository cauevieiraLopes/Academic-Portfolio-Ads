# 🧩 Algoritmo de Ordenação Avançado (Merge Sort)

Este projeto apresenta a implementação manual do algoritmo **Merge Sort**, desenvolvido como atividade prática avançada de estruturas de dados e análise de algoritmos na trilha de ADS do **SENAI CIMATEC**.

## 📖 Descrição
O Merge Sort é um algoritmo clássico de ordenação baseado no paradigma de **Divisão e Conquista**. Ele quebra recursivamente um vetor desordenado em subvetores menores até que cada subvetor contenha apenas um elemento (já que um único elemento está tecnicamente ordenado). Em seguida, o algoritmo realiza o processo de intercalação (*merge*), combinando e ordenando esses subvetores para reconstruir o vetor original completamente ordenado.

Diferente de algoritmos mais simples (como o Bubble Sort), o Merge Sort garante uma performance altamente eficiente e estável, com complexidade de tempo de $O(n \log n)$ em todos os casos (pior, melhor e médio caso).

## 🛠️ Tecnologias e Conceitos Aplicados
- **Linguagem:** C++
- **Conceitos de Algoritmos:**
  - **Paradigma de Divisão e Conquista:** Quebra lógica do problema em partes menores gerenciáveis.
  - **Recursão Computacional:** Estruturação da função `mergeSort` chamando a si mesma para subdividir o vetor até atingir a condição de parada (`left < right`).
  - **Prevenção de Overflow de Memória:** Cálculo otimizado do ponto médio do vetor usando `left + (right - left) / 2`.
  - **Vetores Dinâmicos (`std::vector`):** Uso de containers modernos da STL para alocação e passagem de memória por referência (`&`), minimizando o overhead de execução.
  - **Intercalação Ordenada (*Merging*):** Uso de ponteiros de controle (`i`, `j`, `k`) e vetores auxiliares (`leftVec`, `rightVec`) para reconstruir o array em ordem crescente.

## 🚀 Como Executar
1. Certifique-se de possuir um compilador C++ configurado no seu ambiente (como o g++).
2. Realize a compilação do arquivo:
   ```bash
   g++ main.cpp -o mergesort
3. Execute a aplicação gerada:
   ```bash
   ./mergesort

## 👤 Autor
- Cauê Vieira Lopes
