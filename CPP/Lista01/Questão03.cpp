/*Escreva um programa que receba dois números inteiros e imprima o resultado da divisão inteira entre os 
números bem como o resto dessa divisão.*/
#include <iostream>;
int main() {
	int A, B;
	std::cin >> A >> B;
	std::cout << A / B << std::endl << A % B << std::endl;
	system("PAUSE");
	return 0;
}
