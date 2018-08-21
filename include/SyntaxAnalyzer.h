#ifndef SYNTAXANALYZER_H
#define SYNTAXANALYZER_H
#include <bits/stdc++.h>
#include <MyStack.h>

using namespace std;

class SyntaxAnalyzer
{
    public:
        SyntaxAnalyzer();
        virtual ~SyntaxAnalyzer();
        bool parse(ifstream f);
    protected:
    private:
        char getClosingMatch(char c);
        bool isClosingMatch(char c);
        MyStack Stack;

};

#endif // SYNTAXANALYZER_H
