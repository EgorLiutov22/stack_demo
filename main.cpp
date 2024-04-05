/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string.h>
#include <time.h>
#include <stack>
// using namespace std;


int main()
{
    std::string numbers;
    int a, b;
    std::string res;
    std::cin >> numbers;
    std::stack<std::string> stack;
    // добавляем три элемента
    for (int i=0; i<numbers.length(); i++)
    {
        if (numbers[i] == '+')
        {
            a = stoi(stack.top());
            stack.pop();
            b = stoi(stack.top());
            stack.pop();
            res = std::to_string(a+b);
            stack.push(res);
        }
        else if (numbers[i] == '-')
        {
            a = stoi(stack.top());
            stack.pop();
            b = stoi(stack.top());
            stack.pop();
            res = std::to_string(a-b);
            stack.push(res);
        }
        else if (numbers[i] == '*')
        {
            a = stoi(stack.top());
            stack.pop();
            b = stoi(stack.top());
            stack.pop();
            res = std::to_string(a*b);
            stack.push(res);
        }
        else if (numbers[i] == '/')
        {
            a = stoi(stack.top());
            stack.pop();
            b = stoi(stack.top());
            stack.pop();
            res = std::to_string(a/b);
            stack.push(res);
        }
        else {
            res = numbers[i];
            stack.push(res);
        }
    }
    
 
    std::cout << "result " << stack.top() << std::endl; // stack size: 3
}
