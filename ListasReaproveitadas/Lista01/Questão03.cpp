/*Escreva um programa que receba dois n�meros inteiros e imprima o resultado da divis�o inteira entre os 
n�meros bem como o resto dessa divis�o.*/
#include <iostream>;
int main() {
	int A, B;
	std::cin >> A >> B;
	std::cout << A / B << std::endl << A % B << std::endl;
	system("PAUSE");
	return 0;
}