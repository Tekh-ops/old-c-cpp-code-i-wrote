#include <iostream>
#include <string>

static uint32_t s_AllocCount = 0;

void* operator new(size_t size)
{
    s_AllocCount++;
    std::cout << "Allocating: " << size << " bytes" << std::endl;
    return malloc(size);
}

void PrintString(std::string_view str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str = "Hello, World!";
    // new std::string(str);

#if 0
    std::string FirstName = str.substr(0, str.find(","));
    std::string LastName = str.substr(str.find(",") + 1);

    new std::string(FirstName);
    new std::string(LastName);
#else
    std::string_view FirstName(str.c_str(), 5);
    std::string_view LastName(str.c_str() + str.find(",") + 1, str.size() - str.find(",") - 1);
    std::string_view FullName = FirstName + " " + LastName;

    // new std::string(FirstName);
    // new std::string(LastName);
#endif

    PrintString(FirstName);
    // PrintString(LastName);

    std::cout << "Alloc count: " << s_AllocCount << std::endl;

    return 0;
}