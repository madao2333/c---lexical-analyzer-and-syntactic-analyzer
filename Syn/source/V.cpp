#include "../include/V.h"
#include <string>

V::V(std::string lexeme) : lexeme(std::move(lexeme)) {}

std::string V::getLexeme() const {
    return this->lexeme;
}

bool V::operator==(const V& other) const {
    return this->getLexeme() == other.getLexeme();
}