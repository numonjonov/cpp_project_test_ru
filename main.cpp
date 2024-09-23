#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian"); // для кириллицы.




    /// # "Is rain?"


//
//    int isRain;
//    cout << "Выберете пункт (1 или 2): " << endl
//    << "1. Дождь идёт." << endl
//    << "2. Дождь не идёт." << endl;
//    cin >> isRain;
//
//    if (isRain == 1)
//    {
//        cout << "Дождь идёт, нужно взять зонт!!!" << endl;
//    }
//    else if (isRain == 2)
//    {
//        cout << "Дождь не идёт, зонт не нужно брать!!!" << endl;
//    } else
//    {
//        cout << "Не правильный пункт. Повторите ещё раз!!!" << endl;
//    }




    /// ordinary switch case
//    int a;
//    cin >> a;
//
//
//    switch (a)
//    {
//    case 1:
//        cout << "вы вошли в 1ый пункт" << endl;
//        break;
//    case 2:
//        cout << "вы вошли во 2ой пункт" << endl;
//        break;
//
//    default:
//        cout << "такого пункта не существует" << endl;
//        break;
//
//    }

    /// odd or even (мини программа для вычисления чётных и не чётных чисел)

//    int a;
//    cout << "Enter a number to determine even and odd: "; cin >> a;
//
//    if (a%2==0)
//    {
//        cout << "number " << a << "-is even" << endl;
//    } else
//    {
//        cout << "number " << a << "-is odd" << endl;
//    }



    /// mini programm to check whether the number is positive, negative or zero.

//    int a;
//    cout << "Enter a number to check whether the number is positive, negative or zero: "; cin >> a;
//    if (a>0)
//    {
//        cout << "number " << a << " is positive" << endl;
//    } else if (a==0)
//    {
//        cout << "Entered " << a << " is 0" << endl;
//    } else
//    {
//        cout << "number " << a << " is negative" << endl;
//    }



    /// Mini program to determine which of two numbers is greater or lesser
//
//    int a, b;
//    cout << "Мини программа чтобы определить какое из двух чисел больше или меньше" << endl << endl;
//    cout << "Введите первое число: "; cin >> a;
//    cout << "Введите второе число: "; cin >> b;
//    if (a>b)
//    {
//        cout << "число " << a << " больше чем число " << b << endl;
//    } else if (a==b)
//    {
//        cout << "число " << a << " равна числу " << b << endl;
//    } else
//    {
//        cout << "число " << a << " меньше чем число " << b << endl;
//    }




/// Мини программа для определение времени суток

//    int a;
//    cout << "Мини программа для определение времени суток" << endl << endl;
//
//    cout << "Введите число от 1 до 24 (часы): "; cin >> a;
//
//    if (5 <= a && a <= 12)
//    {
//        cout << "У вас утро" << endl;
//    } else if (13 <= a && a <= 18)
//    {
//        cout << "У вас день" << endl;
//    } else
//    {
//        cout << "У вас ночь" << endl;
//    }




/// Определение типа треугольника по сторонам

//
//    double a, b, c;
//    cout << "Определение типа треугольника по сторонам" << endl << endl;
//
//    cout << "1-ая сторона: ";
//    cin >> a;
//    cout << "2-ая сторона: ";
//    cin >> b;
//    cout << "3-ая сторона: ";
//    cin >> c;
//
//
//    if (a <= 0 || b <= 0 || c <= 0)
//    {
//        cout << "Стороны треугольника должны быть положительными числами." << endl;
//    }
//    else if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        cout << "Из этих сторон нельзя составить треугольник." << endl;
//    }
//    else
//    {
//        if (a == b && b == c)
//        {
//            cout << "Треугольник равносторонний." << endl;
//        }
//        else if (a == b || a == c || b == c)
//        {
//            cout << "Треугольник равнобедренный." << endl;
//        }
//        else
//        {
//            cout << "Треугольник разносторонний." << endl;
//        }
//    }




 /// Теорема Пифагора

//
//    double a, b, c;
//    cout << "Мини программа для проверки на прямоугольный треугольник по теореме Пифагора" << endl;
//    cout << "1-ая сторона: ";
//    cin >> a;
//    cout << "2-ая сторона: ";
//    cin >> b;
//    cout << "3-ая сторона: ";
//    cin >> c;
//
//    if (a <= 0 || b <= 0 || c <= 0)
//    {
//        cout << "Стороны треугольника должны быть положительными числами." << endl;
//    }
//    else if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        cout << "Из этих сторон нельзя составить треугольник." << endl;
//    }
//    else
//    {
//
//        if (a*a + b*b == c*c)
//        {
//            cout << "Это прямоугольный треугольник!!!" << endl;
//        }
//        else
//        {
//            cout << "Это не прямоугольный треугольник!!!" << endl;
//        }
//
//    }





    /// Калькулятор с выбором операции
//
//    cout << "Мини калькулятор с выбором операций для двух чисел" << endl;
//    double a, b;
//    char symbol;
//    cout << "введите 1-ое число: ";
//    cin >> a;
//    cout << "введите 2-ое число: ";
//    cin >> b;
//    cout << "веберите один из символов (+, -, /, *): ";
//    cin >> symbol;
//
//
//    switch (symbol)
//    {
//    case '+':
//    {
//        cout << "Вы выбрали сложение: " << a << " + " << b << " = " << a+b << endl;
//    }
//    break;
//    case '-':
//    {
//        cout << "Вы выбрали вычитание: " << a << " - " << b << " = " << a-b << endl;
//    }
//    break;
//    case '*':
//    {
//        cout << "Вы выбрали умножение: " << a << " * " << b << " = " << a*b << endl;
//    }
//    break;
//    case '/':
//    {
//        cout << "Вы выбрали деление: " << a << " / " << b << " = " << a/b << endl;
//    }
//    break;
//
//    default:
//    {
//        cout << "Такой символ отсувствует!!!" << endl;
//    }
//    break;
//    }


/// Дни недели

//    cout << "День недели" << endl;
//    int number;
//    cout << "Введите номер дня недели: " << endl
//         << "1. Понедельник" << endl
//         << "2. Вторник" << endl
//         << "3. Среда" << endl
//         << "4. Четверг" << endl
//         << "5. Пятница" << endl
//         << "6. Суббота" << endl
//         << "7. Воскресенье" << endl;
//
//    cout << endl;
//
//    cin >> number;
//
//    cout << endl;
//
//    switch (number)
//        {
//
//        case 1:
//        {
//            cout << "Вы выбрали Понедельник." << endl;
//        }
//        break;
//
//        case 2:
//        {
//            cout << "Вы выбрали Вторник." << endl;
//        }
//        break;
//
//        case 3:
//        {
//            cout << "Вы выбрали Среду." << endl;
//        }
//        break;
//
//        case 4:
//        {
//            cout << "Вы выбрали Четверг." << endl;
//        }
//        break;
//
//        case 5:
//        {
//            cout << "Вы выбрали Пятницу." << endl;
//        }
//        break;
//
//        case 6:
//        {
//            cout << "Вы выбрали Субботу." << endl;
//        }
//        break;
//
//        case 7:
//        {
//            cout << "Вы выбрали Воскресенье." << endl;
//        }
//        break;
//
//        default:
//        {
//            cout << "Такого номера дня недели не существует!" << endl;
//        }
//        break;
//        }



        /// Мини программа для определения операторов сотовой связи.

//        int numbers;
//        cout << "Введите ваш номер (991112233): "; cin >> numbers;
//
//        int code = numbers / 10000000; // для отсортировки только кода операторов сотовой связи.
//
//
//        if (code == 77 || code == 95 || code == 99)
//        {
//            cout << "Ваш операторов сотовой связи: UZMOBILE" << endl;
//        } else if(code == 90 || code == 91 || code == 20)
//        {
//            cout << "Ваш операторов сотовой связи: Beeline" << endl;
//        }else if(code == 98)
//        {
//            cout << "Ваш операторов сотовой связи: PERFECTUM MOBILE" << endl;
//        } else if(code == 93 || code == 94 || code == 50)
//        {
//            cout << "Ваш операторов сотовой связи: Ucell" << endl;
//        } else if(code == 88 || code == 97)
//        {
//            cout << "Ваш операторов сотовой связи: Mobiuz" << endl;
//        } else {
//            cout << "Не возможно определить. Повторите ещё раз!" << endl;
//
//        }


















/// Calculator for converting from MB to other units.

//    cout << "Calculator for converting from MB to other units" << endl;
//    int a, b;
//
//    cout << "Convert Megabytes to (1-4): " << endl
//
//    << "1. Kilobyte(KB)" << endl
//    << "2. Gigabyte(GB)" << endl
//    << "3. Terabyte(TB)" << endl
//    << "4. Petabyte(PB)" << endl;
//
//    cin >> a;
//    cout << "Number of Megabytes: ";
//    cin >> b;
//
//    switch(a)
//    {
//    case 1:
//        {
//            cout << "You have chosen to convert from MB to KB: " << b << " MB is " << b*1024 << " KB" << endl;
//         }
//        break;
//
//
//    case 2:
//        {
//            cout << "You have chosen to convert from MB to GB: " << b << " MB is " << b/1024 << " GB" << endl;
//        }
//        break;
//
//
//    case 3:
//        {
//            cout << "You have chosen to convert from MB to TB: " << b << " MB is " << b/1024/1024 << " TB" << endl;
//        }
//        break;
//
//
//    case 4:
//        {
//            cout << "You have chosen to convert from MB to PB: " << b << " MB is " << b/1024/1024/1024 << " PB" << endl;
//        }
//        break;
//
//    default:
//        {
//            cout << "You chosen the wrong number!!!" << endl;
//        }
//        break;
//    }
//


        /// вертикальные или горизонтальные символы.


//    char symbol;
//    int symbolCount;
//    int symbolType;
//    int index = 0;
//
//
//    cout << "Введите количсетво символов: "; cin >> symbolCount;
//
//
//    cout << "Введите символ: "; cin >> symbol;
//
//    cout << "Введите тип символа: " << endl
//
//    << "1. Вертикальный" << endl
//    << "2. Горизонтальный" << endl;
//    cin >> symbolType;
//
//
//
//    while (index<symbolCount)
//    {
//        if(symbolType == 1)
//        {
//            cout << symbol << endl;
//        }
//
//        if(symbolType == 2)
//        {
//            cout << symbol;
//        }
//
//        index++;
//    }


    /// Количество цифр

    int n, result = 0;

    cout << "Введите количество чисел: "; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int number;

        cout << "Введите число " << i << ": " ;
        cin >> number;

        result += number;
    }


    cout << "сумма чисел: " << result  << endl;
















    return 0;
}
