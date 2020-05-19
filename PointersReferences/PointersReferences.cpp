#include <iostream>
#include "Stack.h"

int main()
{
    Stack<int> stack(5);
    int result = 0;

    stack.Pop(result);
    std::cout << result << "\n";

    for (int i = 0; i < 7; i++)
    {
        if (!stack.Push(i))
        {
            std::cout << "Can't add an element\n";
        }
    }

    while (stack.GetCurrentStackSize() > 0)
    {
        stack.Pop(result);
        std::cout << result << "\n";
    }

    Stack<std::string> stackString(10);
    std::string resultString = "";

    stackString.Pop(resultString);
    std::cout << resultString << "\n";

    std::string consoleString;
    for (int i = 0; i < 7; i++)
    {
        std::cin >> consoleString;
        if (!stackString.Push(consoleString))
        {
            std::cout << "Can't add an element\n";
        }
    }

    while (stackString.GetCurrentStackSize() > 0)
    {
        stackString.Pop(resultString);
        std::cout << resultString << "\n";
    }
}