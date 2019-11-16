#include <iostream>

#include "parser.hpp"

using namespace std;

// this function is called syntax parser
// just the parser, the parse
extern int yyparse();
extern int yylex();


int main()
{
	yyparse();
	/*int tok;
	while (tok = yylex()) {
		printf("%d", tok);
		if (tok == NUMBER)
			printf(" = %d\n", yylval);
		else printf("\n");
	}*/
	return 0;
}

// we have to code this function
void yyerror(const char* msg)
{
	cout << "Error: " << msg << endl;

}