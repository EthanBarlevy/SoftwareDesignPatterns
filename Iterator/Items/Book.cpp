#include "Book.h"

Book::Book(std::string bookName)
{
    name = bookName;
}

std::string* Book::Name()
{
    return new std::string(name + " Book");
}
