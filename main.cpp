#include "libs.h"

int main() {
    std::string nameIN, nameOUT, line;
    std::size_t found;

    std::cout << "Type the name of the input file with .csv extension" << std::endl;
    std::cin >> nameIN;

    std::cout << "Type the name of the output file with .txt extension" << std::endl;
    std::cin >> nameOUT;

    nameIN=csvcheck(nameIN); // CHECKING THE NAMES - FUNCTIONS DECLARED IN extensions.h
    nameOUT=txtcheck(nameOUT);

    std::ifstream fileIN; //DECLARING FILES
    std::ofstream fileOUT;

    fileIN.open (nameIN); //OPENING FILES WITH GIVEN NAMES
    fileOUT.open (nameOUT);

    if (fileIN.is_open()) {
        while ( getline (fileIN,line) ) // READING LINE OF FILE
        {
            do {
                found = line.find(',');  // LOOKING FOR ',' IN LINE
                line[found] = ' '; // REPLACING ',' WITH SPACE
            } while (found!=std::string::npos);

            if (fileOUT.is_open())
                fileOUT << line; // WRITING NEWLY MADE LINE TO OUTPUT FILE
            else std :: cout << "Unable to open file" << nameOUT;
        }
        fileIN.close(); // CLOSING FILES
        fileOUT.close();
        std::cout << "File " << nameOUT << " has been made";
    }
    else std::cout << "Unable to open file " << nameIN;

    return 0;
}