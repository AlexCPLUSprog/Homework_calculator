#include "Calculator.h"


int main() {

	Calc<double> calculator(5, 6.4);	// �� ����, ����� �� ���� ���������� �����-�� ������� ������ double - T. � ���� �� ����������. ��� ������� ��� �����������, ���� ��� � ��������
	std::cout << calculator.sum(5, 6.5) << '\n';
	std::cout << calculator.subtraction(11, 6.2) << '\n';
	std::cout << calculator.�ult(3.3, 4) << '\n';
	std::cout << calculator.division(15.3, 3) << '\n';

	std::cout << calculator.division(15, 3) << '\n';

}