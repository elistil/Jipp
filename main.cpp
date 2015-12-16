#include <iostream>
#include <windows.h>
#include "headers/vector.h"

int main(int argc, char* argv[])
{
	Vector *vec = new Vector(1,1,1);
	std::cout << vec->getX() << std::endl;
	system("pause");
    return 1;
}
