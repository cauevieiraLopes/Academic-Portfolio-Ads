#include <iostream>
#include <string>
#include <vector>
#include <cmath>

void receber_texto (std::string &texto){
	std::cout<<"===== índice Coleman-Liau ====="<<std::endl;
	std::cout<<"Aviso: O índice Coleman-Liau foi desenvolvido para textos em inglês."<<std::endl;
	std::cout<<"Resultados em português podem não refletir com precisão a legibilidade."<<std::endl;
	std::cout<<"\nText: ";
	std::getline(std::cin, texto);
}

void verificacao_do_texto (double &letras, double &palavras, double &frases, std::vector<char>&Lista_De_caracteres){
	for(char i : Lista_De_caracteres){
		if(i == 'a' || i == 'b' || i == 'c' || i == 'd' || i == 'e' || i == 'f' || i == 'g' || i == 'h' || i == 'i' || i == 'j' || i == 'k' || i == 'l' || i == 'm' || i == 'n' || i == 'o' || i == 'p' || i == 'q' || i == 'r' || i == 's' || i == 't' || i == 'u' || i == 'v' || i == 'w' || i == 'x' || i == 'y' || i == 'z'){
			letras++;
		}
			else if(i == 'A' || i == 'B' || i == 'C' || i == 'D' || i == 'E' || i == 'F' || i == 'G' || i == 'H' || i == 'I' || i == 'J' || i == 'K' || i == 'L' || i == 'M' || i == 'N' || i == 'O' || i == 'P' || i == 'Q' || i == 'R' || i == 'S' || i == 'T' || i == 'U' || i == 'V' || i == 'W' || i == 'X' || i == 'Y' || i == 'Z'){
				letras++;
			}
				else if(i == '.' || i == '?' || i == '!'){
					frases++;
				}
					else if(i == ' '){
						palavras++;
					}
	}
	bool estaVazio = Lista_De_caracteres.empty();
	
	if(estaVazio == 0){
		if(Lista_De_caracteres.front() == 'a' || Lista_De_caracteres.front() == 'b' || Lista_De_caracteres.front() == 'c' || Lista_De_caracteres.front() == 'd' || Lista_De_caracteres.front() == 'e' || Lista_De_caracteres.front() == 'f' || Lista_De_caracteres.front() == 'g' || Lista_De_caracteres.front() == 'h' || Lista_De_caracteres.front() == 'i' || Lista_De_caracteres.front() == 'j' || Lista_De_caracteres.front() == 'k' || Lista_De_caracteres.front() == 'l' || Lista_De_caracteres.front() == 'm' || Lista_De_caracteres.front() == 'n' || Lista_De_caracteres.front() == 'o' || Lista_De_caracteres.front() == 'p' || Lista_De_caracteres.front() == 'q' || Lista_De_caracteres.front() == 'r' || Lista_De_caracteres.front() == 's' || Lista_De_caracteres.front() == 't' || Lista_De_caracteres.front() == 'u' || Lista_De_caracteres.front() == 'v' || Lista_De_caracteres.front() == 'w' || Lista_De_caracteres.front() == 'x' || Lista_De_caracteres.front() == 'y' || Lista_De_caracteres.front() == 'z'){
    		palavras += 1;
		} 
			else if(Lista_De_caracteres.front() == 'A' || Lista_De_caracteres.front() == 'B' || Lista_De_caracteres.front() == 'C' || Lista_De_caracteres.front() == 'D' || Lista_De_caracteres.front() == 'E' || Lista_De_caracteres.front() == 'F' || Lista_De_caracteres.front() == 'G' || Lista_De_caracteres.front() == 'H' || Lista_De_caracteres.front() == 'I' || Lista_De_caracteres.front() == 'J' || Lista_De_caracteres.front() == 'K' || Lista_De_caracteres.front() == 'L' || Lista_De_caracteres.front() == 'M' || Lista_De_caracteres.front() == 'N' || Lista_De_caracteres.front() == 'O' || Lista_De_caracteres.front() == 'P' || Lista_De_caracteres.front() == 'Q' || Lista_De_caracteres.front() == 'R' || Lista_De_caracteres.front() == 'S' || Lista_De_caracteres.front() == 'T' || Lista_De_caracteres.front() == 'U' || Lista_De_caracteres.front() == 'V' || Lista_De_caracteres.front() == 'W' || Lista_De_caracteres.front() == 'X' || Lista_De_caracteres.front() == 'Y' || Lista_De_caracteres.front() == 'Z'){
    			palavras += 1;
			}
	}
}

double calcular_indice (double letras, double palavras, double frases){
	double incide_Coleman{};
	
	double L = (letras / palavras) * 100;
	double S = (frases / palavras) * 100;
	
	incide_Coleman = 0.0588 * L - 0.296 * S - 15.8;
	std::cout<<incide_Coleman;
	return incide_Coleman;
}

void exibicao (double &indice){
	if(indice >= 16){
		indice = 16;
		std::cout<<"\nGrade: "<<indice<<"+";
	}
		else if(indice <= 0){
			indice = 1;
			std::cout<<"\nGrade: "<<indice;
		}
			else{
				std::cout<<"\nGrade: "<<round(indice);
			}
}

int main(){
	std::string texto{};
	double letras{};
	double palavras{};
	double frases{};
	double indice{};
	
	receber_texto(texto);
	
	std::vector<char>Lista_De_caracteres(texto.begin(), texto.end());
	
	verificacao_do_texto(letras, palavras, frases, Lista_De_caracteres);
	
	indice = calcular_indice(letras, palavras, frases);
	exibicao(indice);
	
	return 0;
}
