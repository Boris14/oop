#ifndef CALCULATOR_HH_
#define CALCULATOR_HH_

#include <vector>
#include <string>
#include "operation.hh"

class CalculatorError {
	std::string message_;
public:
	CalculatorError(std::string message)
		: message_(message) {}
	
	std::string get_message() const {
		return message_;
	}
};

class Calculator {
	std::vector<double> values_;
	std::vector<Operation*> operations_;
	Operation* find_operation(std::string name);
public:
	void run();
	double pop();
	void push(double value);
	void add_operation(Operation* operation);
};

#endif
