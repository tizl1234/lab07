#include <string>
#include <fstream>
#include <iostream>
//!Первая функция вывода
void print(const std::string& text, std::ostream& out = std::cout);
//!Вторая функция вывода
void print(const std::string& text, std::ofstream& out);
