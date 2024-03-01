#include <iostream>
#include "calculator.h"

Calculator::Calculator (): result (0.0), mem (0.0)
{
trace_log_ptr->push_back(std::string("<Calculator::Calculator(): result (0.0), mem (0.0)@@@calculator.cpp>"));
trace_log_ptr->push_back(std::string("</Calculator::Calculator(): result (0.0), mem (0.0)@@@calculator.cpp>"));
}
void Calculator::add ()
{
trace_log_ptr->push_back(std::string("<Calculator::add()@@@calculator.cpp>"));
    std :: string a, b;
    std :: cout << "Enter the first number: ";
    std :: cin >> a;
    std :: cout << "Enter the second number: ";
    std :: cin >> b;
    result = parseInput (a) + parseInput (b);
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Calculator::add()@@@calculator.cpp>"));
}
void Calculator::subtract ()
{
trace_log_ptr->push_back(std::string("<Calculator::subtract()@@@calculator.cpp>"));
    std :: string a, b;
    std :: cout << "Enter the first number: ";
    std :: cin >> a;
    std :: cout << "Enter the second number: ";
    std :: cin >> b;
    result = parseInput (a) - parseInput (b);
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Calculator::subtract()@@@calculator.cpp>"));
}
void Calculator::multiply ()
{
trace_log_ptr->push_back(std::string("<Calculator::multiply()@@@calculator.cpp>"));
    std :: string a, b;
    std :: cout << "Enter the first number: ";
    std :: cin >> a;
    std :: cout << "Enter the second number: ";
    std :: cin >> b;
    result = parseInput (a) * parseInput (b);
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Calculator::multiply()@@@calculator.cpp>"));
}
void Calculator::divide ()
{
trace_log_ptr->push_back(std::string("<Calculator::divide()@@@calculator.cpp>"));
    std :: string a, b;
    std :: cout << "Enter the first number: ";
    std :: cin >> a;
    std :: cout << "Enter the second number: ";
    std :: cin >> b;
    result = parseInput (a) / parseInput (b);
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Calculator::divide()@@@calculator.cpp>"));
}
void Calculator::square ()
{
trace_log_ptr->push_back(std::string("<Calculator::square()@@@calculator.cpp>"));
    std :: string a;
    std :: cout << "Enter a number: ";
    std :: cin >> a;
    double parsedA = parseInput (a);
    result = parsedA * parsedA;
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Calculator::square()@@@calculator.cpp>"));
}
void Calculator::sqrt ()
{
trace_log_ptr->push_back(std::string("<Calculator::sqrt()@@@calculator.cpp>"));
    std :: string a;
    std :: cout << "Enter a number: ";
    std :: cin >> a;
    result = std :: sqrt (parseInput (a));
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Calculator::sqrt()@@@calculator.cpp>"));
}
void Calculator::setMem ()
{
trace_log_ptr->push_back(std::string("<Calculator::setMem()@@@calculator.cpp>"));
    std :: string a;
    std :: cout << "Enter a number: ";
    std :: cin >> a;
    mem = parseInput (a);
    std :: cout << "The mem is " << mem;
trace_log_ptr->push_back(std::string("</Calculator::setMem()@@@calculator.cpp>"));
}
void Calculator::printMem () const
{
trace_log_ptr->push_back(std::string("<Calculator::printMem() const@@@calculator.cpp>"));
    std :: cout << "The mem is " << mem;
trace_log_ptr->push_back(std::string("</Calculator::printMem() const@@@calculator.cpp>"));
}
double Calculator::parseInput (const std :: string & input) const
{
trace_log_ptr->push_back(std::string("<Calculator::parseInput(const std :: string & input) const@@@calculator.cpp>"));
    if (input == "result")
    {

trace_log_ptr->push_back(std::string("</Calculator::parseInput(const std :: string & input) const@@@calculator.cpp>"));
        return result;
    }

    else
    if (input == "mem")
    {

trace_log_ptr->push_back(std::string("</Calculator::parseInput(const std :: string & input) const@@@calculator.cpp>"));
        return mem;
    }

    else
    {

trace_log_ptr->push_back(std::string("</Calculator::parseInput(const std :: string & input) const@@@calculator.cpp>"));
        return std :: stod (input);
    }

trace_log_ptr->push_back(std::string("</Calculator::parseInput(const std :: string & input) const@@@calculator.cpp>"));
}
void Calculator::welcome () const
{
trace_log_ptr->push_back(std::string("<Calculator::welcome() const@@@calculator.cpp>"));
    std :: cout << "\n\nEnter an operation (+, -, /, *, sqrt, square, change, setmem, printmem) or exit\n";
trace_log_ptr->push_back(std::string("</Calculator::welcome() const@@@calculator.cpp>"));
}
void Calculator::parseOperation (const std :: string & input)
{
trace_log_ptr->push_back(std::string("<Calculator::parseOperation(const std :: string & input)@@@calculator.cpp>"));
    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        add ();
    }

    else
    if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        subtract ();
    }

    else
    if (input == "/" || input == "divide" || input == "div")
    {
        divide ();
    }

    else
    if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        multiply ();
    }

    else
    if (input == "sqrt")
    {
        sqrt ();
    }

    else
    if (input == "square")
    {
        square ();
    }

    else
    if (input == "setmem")
    {
        setMem ();
    }

    else
    if (input == "printmem")
    {
        printMem ();
    }

trace_log_ptr->push_back(std::string("</Calculator::parseOperation(const std :: string & input)@@@calculator.cpp>"));
}