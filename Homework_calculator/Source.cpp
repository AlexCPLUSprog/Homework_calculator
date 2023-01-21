#include "Calculator.h"


int main() {

	Calc<double> calculator(5, 6.4);	// Не знаю, можно ли сюда подставить каким-то образом вместо double - T. У меня не получается. Мне кажется это неправильно, хоть все и работает
	std::cout << calculator.sum(5, 6.5) << '\n';
	std::cout << calculator.subtraction(11, 6.2) << '\n';
	std::cout << calculator.мult(3.3, 4) << '\n';
	std::cout << calculator.division(15.3, 3) << '\n';

	std::cout << calculator.division(15, 3) << '\n';

}