#ifndef SYNTAXPARSER_H
#define SYNTAXPARSER_H
#include "CharStack.h"
#include <string>

class SyntaxParser
{
    public:
        SyntaxParser();
        virtual ~SyntaxParser();
        void parse(std::string in);
        bool isValid();
        char getLastSymbol();
        void print();
    protected:
    private:
        CharStack symbols;
};

#endif // SYNTAXPARSER_H
