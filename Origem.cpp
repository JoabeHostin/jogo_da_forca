#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	string listaPalavras[5] = { "abacaxi", "melancia", "laranja", "banana", "uva" },
		palavra_secreta,
		traco = "__";
	int opcao, tamanho, run = 0;
	char letra;

	cout << "Bem vindo ao jogo da forca \n";

	cout << "Digite uma opção de 1 a 5 para escolher a palavra secreta: \n";
	cin >> opcao;

	palavra_secreta = listaPalavras[opcao - 1];
	string exibe = "                    ";

	tamanho = exibe.length() - palavra_secreta.length();

	exibe.erase(exibe.length() - tamanho, tamanho);

	cout << "vamos começar o jogo: \n";
	cout << "A palavra secreta tem " << palavra_secreta.size() << " letras \n";

	//Estrutura de repetição para o jogo

	while (run < palavra_secreta.size()) {
		int i = 0, i2 = 0;
		cout << "\nInforme uma letra: \n";
		cin >> letra;

		for (i = 0; i < palavra_secreta.size(); i++) {

			if (palavra_secreta[i] == letra) {

				exibe[i] = letra;
			}
			else {
				if (exibe[i] == ' ' && exibe != "_") {
					exibe[i] = traco[1];
				}
			}
		}

		cout << exibe;
		run++;

		//verificação de vitória

		if (exibe == palavra_secreta) {
			cout << "\nParabéns você ganhou o jogo \n";

			run = palavra_secreta.size();
		}


	}

}