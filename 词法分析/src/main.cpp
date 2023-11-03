#include "parser/SyntaxTree.hpp"
#include <fstream>
ast::SyntaxTree syntax_tree;
int main(){
    ast::parse_file(std::cin);
}