#define MODE 1
#ifndef MODE
#error "Необходимо определить MODE"
#endif

#include <iostream>

#if MODE == 0
int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Работаю в режиме тренировки" << std::endl;
    return 0;
}
#elif MODE == 1

int add(int a, int b) { return a + b; }
int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1:";
    int a = 0;
    std::cin >> a;
    std::cout << "ВВедите число 2: ";
    int b = 0;
    std::cin >> b;
    std::cout << "Результат сложения: " << add(a, b);
    return 0;
}
#else
int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Неизвестный режим. Завершение работы." << std::endl;
}

#endif
