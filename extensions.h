//
// Created by Igor Śpiączka on 29.12.2017.
//

#ifndef CSV_TO_TXT_EXTENSIONS_H
#define CSV_TO_TXT_EXTENSIONS_H

std::string csvcheck(std::string text){
    std::size_t found = text.find(".csv"); // CHECKING THE PRESENCE OF .CSV EXTENSION
    if (found==std::string::npos)
        text += ".csv";    // IF IT'S NOT THERE - WE ADD IT
    return text;
}

std::string txtcheck(std::string text){
    std::size_t found = text.find(".txt"); // CHECKING THE PRESENCE OF .CSV EXTENSION
    if (found==std::string::npos)
        text += ".txt";    // IF IT'S NOT THERE - WE ADD IT
    return text;
}

#endif //CSV_TO_TXT_EXTENSIONS_H
