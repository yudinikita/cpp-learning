#include <iostream> // подключение cin(ввод), cout(вывод)
#include <string> // чтобы использовать тип данных string(строчный)
using namespace std; // использовать группу имен std. Вместо std::cin, можно писать cin

// #pragma warning(disable: 4996) // исключение ошибки 4996, чтобы запустить компилятор

int main() // объявление тела программы
{
	setlocale(LC_ALL, "Russian"); // можно сократить до setlocale(0, "")

	int variable; // объявление переменной variable с типом данных integer(целочисленный)

	cout << "Hello, World!"; // синтаксис вывода
	cin >> variable; // синтаксис ввода переменной variable

	system("pause"); // приложение или консоль не будет закрыта, пока пользователь не нажмет кнопку
	return 0;
}

// однострочный комментарий
/*
многострочный комментарий
*/


/* основные типы данных

+----------------+-------+-----------------------------------------------------------------+
|   Тип данных   | Байты |                        Диапазон значений                        |
+----------------+-------+-----------------------------------------------------------------+
| bool           |   1   | false или true                                                  |
| char           |   1   | от -128 до 127                                                  |
| unsigned char  |   1   | от 0 до 255                                                     |
| short          |   2   | от -32 768 до 32 767                                            |
| unsigned short |   2   | от 0 до 65 535                                                  |
| int            |   4   | от -2 147 483 648 до 2 147 483 647                              |
| unsigned int   |   4   | от 0 до 4 294 967 295                                           |
| float          |   4   | от -2 147 483 648.0 до 2 147 483 647.0                          |
| double         |   8   | от -9 223 372 036 854 775 808.0 до 9 223 372 036 854 775 807.0 |
+----------------+-------+-----------------------------------------------------------------+

*/
