#include <iostream>
#include <iomanip>
#include <fstream>
#include "calculator.h"
#include "scientific.h"
using namespace std;



int main ()
{

trace_log_ptr = new std::vector<std::string>();

trace_log_ptr->push_back(std::string("<main()@@@main.cpp>"));
    Calculator calc;
    Scientific sci;
    Calculator * calcPtr = & calc;
    bool sciActive = false;
    cout << "Welcome to my Calculator App\n\n" << "This calculator has 2 modes, normal and scientific.\n" << "You can change it using the 'change' keyword.\n\n" << "This app has 2 other special keywords, result and mem.\n" << "result stores the result of the previous calculation.\n" << "mem allows you to store and access a number.\n" << "Both can be used instead of numbers during calculations.\n" << "They are both local to the mode you are using.\n";
    calcPtr -> welcome ();
    cout << setprecision (15);
    string input = "";
    while (cin >> input && input != "exit") {
        if (input == "change")
        {
            if (sciActive)
            {
                calcPtr = & calc;
                sciActive = false;
                cout << "\nSimple Calculator Activated";
            }

            else
            {
                calcPtr = & sci;
                sciActive = true;
                cout << "\nScientific Calculator Activated";
            }

        }

        calcPtr -> parseOperation (input);
        calcPtr -> welcome ();
    }

trace_log_ptr->push_back(std::string("</main()@@@main.cpp>"));

std::ofstream out_file("trace.log", std::ios::out);
if (out_file.is_open()) {
  for (size_t i = 0; i < trace_log_ptr->size(); i++) {
    out_file << trace_log_ptr->at(i) + "\n";
  }
}

    return 0;
trace_log_ptr->push_back(std::string("</main()@@@main.cpp>"));
}
