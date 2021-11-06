#include "profile.h"

void Function1()
{
    InstrumentationTimer timer("Function1");

    for (int i = 0; i < 10000; i++)
        std::cout << "Hello , World!" << std::endl;
}

void Function2()
{
    InstrumentationTimer timer("Function2");

    for (int i = 0; i < 1000; i++)
        std::cout << "Hello , World!" << std::endl;
}

int main()
{
    Instrumentor::Get().BeginSession("Profile Test");

    Function1();
    Function2();

    Instrumentor::Get().EndSession();

    return 0;
}