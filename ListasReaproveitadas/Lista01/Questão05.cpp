/*Um profissional precisa de um software que converta valores em metros para valores em
polegadas. Sabendo que 1 metro equivale a 39,3700787 polegadas, crie um programa que faça
o cálculo de quantas polegadas equivale a 30 metros.*/
#include <iostream>
int main() {
	double A;
	A = 30 * 39.3700787;
	std::cout << A << " polegadas equivalem a 30 metros." << std::endl;
	system("PAUSE");
	return 0;
}