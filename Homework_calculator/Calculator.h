#pragma once
#include <iostream>

template <typename T>
class Calc {
public:
	Calc(T num1, T num2) : _num1(num1), _num2(num2) {}

	T sum(T num1, T num2) {
		return num1 + num2;
	}

	T subtraction(T num1, T num2) {
		return num1 - num2;
	}

	T ìult(T num1, T num2) {
		return num1 * num2;
	}

	T division(T num1, T num2) {
		return num1 / num2;
	}

private:
	T _num1;
	T _num2;
};