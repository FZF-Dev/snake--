#include <iostream>
#include <chrono>
#include <thread>

#include "SnakeMinusMinusMap.h"

int main()
{
    //const char* message = "Hello, Console!\nHello, Console!\nHello, Console!\nHello, Console!\nHello, Console!\nHello, Console!\n";


    while (true)
    {
        //fwrite(message, sizeof(char), strlen(message), stdout);

        std::unique_ptr<SnakeMinusMinusMap> map = std::make_unique<SnakeMinusMinusMap>(40, 40);
        map->render();

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }


    std::cout << "Hello World!\n";
}