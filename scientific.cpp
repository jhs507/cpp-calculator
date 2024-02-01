#include <iostream>
#include "scientific.h"

Scientific :: Scientific (): Calculator ()
{
trace_log_ptr->push_back(std::string("<Scientific::Scientific(): Calculator ()@@@scientific.cpp>"));
trace_log_ptr->push_back(std::string("</Scientific::Scientific(): Calculator ()@@@scientific.cpp>"));
}
void Scientific :: welcome () const
{
trace_log_ptr->push_back(std::string("<Scientific::welcome() const@@@scientific.cpp>"));
    std :: cout << "\n\nEnter one of:\n" << "+, -, /, *, sqrt, square, change, setmem, printmem, sin, cos, log, tan, ln, abs, pow\n" << "or exit\n";
trace_log_ptr->push_back(std::string("</Scientific::welcome() const@@@scientific.cpp>"));
}
void Scientific :: parseOperation (const std :: string & input)
{
trace_log_ptr->push_back(std::string("<Scientific::parseOperation(const std :: string & input)@@@scientific.cpp>"));
    Calculator :: parseOperation (input);
    if (input == "sin")
    {
        sin ();
    }

    else
    if (input == "cos")
    {
        cos ();
    }

    else
    if (input == "tan")
    {
        cos ();
    }

    else
    if (input == "ln")
    {
        ln ();
    }

    else
    if (input == "log")
    {
        log ();
    }

    else
    if (input == "abs")
    {
        abs ();
    }

    else
    if (input == "pow")
    {
        pow ();
    }

trace_log_ptr->push_back(std::string("</Scientific::parseOperation(const std :: string & input)@@@scientific.cpp>"));
}
void Scientific :: sin ()
{
trace_log_ptr->push_back(std::string("<Scientific::sin()@@@scientific.cpp>"));
    std :: string a;
    std :: cout << "Enter a number: ";
    std :: cin >> a;
    result = std :: sin (parseInput (a));
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Scientific::sin()@@@scientific.cpp>"));
}
void Scientific :: cos ()
{
trace_log_ptr->push_back(std::string("<Scientific::cos()@@@scientific.cpp>"));
    std :: string a;
    std :: cout << "Enter a number: ";
    std :: cin >> a;
    result = std :: cos (parseInput (a));
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Scientific::cos()@@@scientific.cpp>"));
}
void Scientific :: tan ()
{
trace_log_ptr->push_back(std::string("<Scientific::tan()@@@scientific.cpp>"));
    std :: string a;
    std :: cout << "Enter a number: ";
    std :: cin >> a;
    result = std :: tan (parseInput (a));
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Scientific::tan()@@@scientific.cpp>"));
}
void Scientific :: ln ()
{
trace_log_ptr->push_back(std::string("<Scientific::ln()@@@scientific.cpp>"));
    std :: string a;
    std :: cout << "Enter a number: ";
    std :: cin >> a;
    result = std :: log (parseInput (a));
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Scientific::ln()@@@scientific.cpp>"));
}
void Scientific :: log ()
{
trace_log_ptr->push_back(std::string("<Scientific::log()@@@scientific.cpp>"));
    std :: string a, b;
    std :: cout << "Enter the base: ";
    std :: cin >> a;
    std :: cout << "Enter a number: ";
    std :: cin >> b;
    result = std :: log (parseInput (b)) / std :: log (parseInput (a));
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Scientific::log()@@@scientific.cpp>"));
}
void Scientific :: abs ()
{
trace_log_ptr->push_back(std::string("<Scientific::abs()@@@scientific.cpp>"));
    std :: string a;
    std :: cout << "Enter a number: ";
    std :: cin >> a;
    result = std :: abs (parseInput (a));
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Scientific::abs()@@@scientific.cpp>"));
}
void Scientific :: pow ()
{
trace_log_ptr->push_back(std::string("<Scientific::pow()@@@scientific.cpp>"));
    std :: string a, b;
    std :: cout << "Enter the base: ";
    std :: cin >> a;
    std :: cout << "Enter the exponent: ";
    std :: cin >> b;
    result = std :: pow (parseInput (a), parseInput (b));
    std :: cout << "The result is " << result;
trace_log_ptr->push_back(std::string("</Scientific::pow()@@@scientific.cpp>"));
}