# 📚 Analisador de Legibilidade (Índice Coleman-Liau)

Este projeto é uma implementação do problema **"Readability"** do curso **CC50** (Harvard CS50), desenvolvido para aplicar conceitos de processamento de texto e algoritmos de análise linguística no curso de ADS do **SENAI CIMATEC**.

## 📖 Descrição
O programa calcula o nível de escolaridade necessário para compreender um determinado texto através do **Índice Coleman-Liau**. O algoritmo analisa a quantidade de letras, palavras e frases para aplicar uma fórmula matemática que retorna o "Grade" (série escolar) correspondente.

A fórmula utilizada é:
$$index = 0.0588 \times L - 0.296 \times S - 15.8$$
Onde **L** é a média de letras por 100 palavras e **S** é a média de frases por 100 palavras.

## 🛠️ Tecnologias e Conceitos Aplicados
- **Linguagem:** C++
- **Conceitos de Programação:**
  - **Processamento de Strings:** Uso de `std::getline` e conversão de strings para `std::vector<char>` para análise granular.
  - **Lógica de Análise de Texto:** Identificação de sentenças através de pontuações específicas (`.`, `!`, `?`) e contagem de palavras baseada em espaços.
  - **Tratamento de Edge Cases:** Implementação de lógica adicional para garantir a contagem correta da primeira/única palavra do texto (ajuste de contagem de espaços).
  - **Matemática Computacional:** Uso da biblioteca `<cmath>` para arredondamento de resultados e aplicação de fórmulas de precisão com tipos `double`.
  - **Modularização:** Divisão clara entre entrada de dados, processamento lógico, cálculo matemático e exibição de resultados.

## 🚀 Como Executar
1. Certifique-se de ter um compilador C++ instalado (como g++).
2. Compile o arquivo:
   ```bash
   g++ main.cpp -o readability
3. Execute o programa:
   ```bash
   ./readability

## 👤 Autor
- Cauê Vieira Lopes
