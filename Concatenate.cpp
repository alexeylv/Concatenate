// Concatenate - объединяет две строки с
//              "-" в промежутке
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

// объявление прототипа
void concatString(char szTarget[], const char szSource[]);

int main(int nNumberofArgs, char* pszArgs[])
{
    // переводим консоль на CP1251 — ту же, что и у строк в программе
    SetConsoleCP(1251);        // кодировка ввода (работает cin)
    SetConsoleOutputCP(1251);  // кодировка вывода (работает cout)
    setlocale(LC_ALL, "Russian");

    // читаем первую строку
    char szString1[256];
    cout << "Введите первую строку #1:";
    cin.getline(szString1, 128);

    // ...теперь вторую строку...
    char szString2[128];
    cout << "Введите вторую строку #2:";
    cin.getline(szString2, 128);

    // ...добавляем соединитель...
    concatString(szString1, " - ");

    // ...и вторую строку...
    concatString(szString1, szString2);

    // ...и выводим результат
    cout << "\n" << szString1 << endl;

    // Ожидание, позволяющее пользователю увидеть результат
    // работы программы
    cout << "Нажмите Enter для продолжения..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

// concatString - добавление строки szSource
//                в конец строки szTarget 
void concatString(char szTarget[], const char szSource[])
{
    setlocale(LC_ALL, "Russian");
    // находим конец перво строки
    int targetIndex = 0;
    while (szTarget[targetIndex])
    {
        targetIndex++;
    }

    // добавляем вторую строку к первой
    int sourceIndex = 0;
    while (szSource[sourceIndex])
    {
        

        szTarget[targetIndex] =
            szSource[sourceIndex];
        targetIndex++;
        sourceIndex++;
    }

    // Добавляем завершающий нуль
    szTarget[targetIndex] = '\0';
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
