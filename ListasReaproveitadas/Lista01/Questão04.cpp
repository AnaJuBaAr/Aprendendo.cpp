/*Escreva um programa que receba quatro notas de um aluno e imprima a média das notas.*/
#include <iostream>;
int main() {
	double N1, N2, N3, N4;
	std::cin >> N1 >> N2 >> N3 >> N4;
	std::cout << (N1 + N2 + N3 + N4) / 4 << std::endl;
	system("PAUSE");
	return 0;
}