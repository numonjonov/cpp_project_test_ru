#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian"); // ��� ���������.




    /// # "Is rain?"


//
//    int isRain;
//    cout << "�������� ����� (1 ��� 2): " << endl
//    << "1. ����� ���." << endl
//    << "2. ����� �� ���." << endl;
//    cin >> isRain;
//
//    if (isRain == 1)
//    {
//        cout << "����� ���, ����� ����� ����!!!" << endl;
//    }
//    else if (isRain == 2)
//    {
//        cout << "����� �� ���, ���� �� ����� �����!!!" << endl;
//    } else
//    {
//        cout << "�� ���������� �����. ��������� ��� ���!!!" << endl;
//    }




    /// ordinary switch case
//    int a;
//    cin >> a;
//
//
//    switch (a)
//    {
//    case 1:
//        cout << "�� ����� � 1�� �����" << endl;
//        break;
//    case 2:
//        cout << "�� ����� �� 2�� �����" << endl;
//        break;
//
//    default:
//        cout << "������ ������ �� ����������" << endl;
//        break;
//
//    }

    /// odd or even (���� ��������� ��� ���������� ������ � �� ������ �����)

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
//    cout << "���� ��������� ����� ���������� ����� �� ���� ����� ������ ��� ������" << endl << endl;
//    cout << "������� ������ �����: "; cin >> a;
//    cout << "������� ������ �����: "; cin >> b;
//    if (a>b)
//    {
//        cout << "����� " << a << " ������ ��� ����� " << b << endl;
//    } else if (a==b)
//    {
//        cout << "����� " << a << " ����� ����� " << b << endl;
//    } else
//    {
//        cout << "����� " << a << " ������ ��� ����� " << b << endl;
//    }




/// ���� ��������� ��� ����������� ������� �����

//    int a;
//    cout << "���� ��������� ��� ����������� ������� �����" << endl << endl;
//
//    cout << "������� ����� �� 1 �� 24 (����): "; cin >> a;
//
//    if (5 <= a && a <= 12)
//    {
//        cout << "� ��� ����" << endl;
//    } else if (13 <= a && a <= 18)
//    {
//        cout << "� ��� ����" << endl;
//    } else
//    {
//        cout << "� ��� ����" << endl;
//    }




/// ����������� ���� ������������ �� ��������

//
//    double a, b, c;
//    cout << "����������� ���� ������������ �� ��������" << endl << endl;
//
//    cout << "1-�� �������: ";
//    cin >> a;
//    cout << "2-�� �������: ";
//    cin >> b;
//    cout << "3-�� �������: ";
//    cin >> c;
//
//
//    if (a <= 0 || b <= 0 || c <= 0)
//    {
//        cout << "������� ������������ ������ ���� �������������� �������." << endl;
//    }
//    else if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        cout << "�� ���� ������ ������ ��������� �����������." << endl;
//    }
//    else
//    {
//        if (a == b && b == c)
//        {
//            cout << "����������� ��������������." << endl;
//        }
//        else if (a == b || a == c || b == c)
//        {
//            cout << "����������� ��������������." << endl;
//        }
//        else
//        {
//            cout << "����������� ��������������." << endl;
//        }
//    }




 /// ������� ��������

//
//    double a, b, c;
//    cout << "���� ��������� ��� �������� �� ������������� ����������� �� ������� ��������" << endl;
//    cout << "1-�� �������: ";
//    cin >> a;
//    cout << "2-�� �������: ";
//    cin >> b;
//    cout << "3-�� �������: ";
//    cin >> c;
//
//    if (a <= 0 || b <= 0 || c <= 0)
//    {
//        cout << "������� ������������ ������ ���� �������������� �������." << endl;
//    }
//    else if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        cout << "�� ���� ������ ������ ��������� �����������." << endl;
//    }
//    else
//    {
//
//        if (a*a + b*b == c*c)
//        {
//            cout << "��� ������������� �����������!!!" << endl;
//        }
//        else
//        {
//            cout << "��� �� ������������� �����������!!!" << endl;
//        }
//
//    }





    /// ����������� � ������� ��������
//
//    cout << "���� ����������� � ������� �������� ��� ���� �����" << endl;
//    double a, b;
//    char symbol;
//    cout << "������� 1-�� �����: ";
//    cin >> a;
//    cout << "������� 2-�� �����: ";
//    cin >> b;
//    cout << "�������� ���� �� �������� (+, -, /, *): ";
//    cin >> symbol;
//
//
//    switch (symbol)
//    {
//    case '+':
//    {
//        cout << "�� ������� ��������: " << a << " + " << b << " = " << a+b << endl;
//    }
//    break;
//    case '-':
//    {
//        cout << "�� ������� ���������: " << a << " - " << b << " = " << a-b << endl;
//    }
//    break;
//    case '*':
//    {
//        cout << "�� ������� ���������: " << a << " * " << b << " = " << a*b << endl;
//    }
//    break;
//    case '/':
//    {
//        cout << "�� ������� �������: " << a << " / " << b << " = " << a/b << endl;
//    }
//    break;
//
//    default:
//    {
//        cout << "����� ������ �����������!!!" << endl;
//    }
//    break;
//    }


/// ��� ������

//    cout << "���� ������" << endl;
//    int number;
//    cout << "������� ����� ��� ������: " << endl
//         << "1. �����������" << endl
//         << "2. �������" << endl
//         << "3. �����" << endl
//         << "4. �������" << endl
//         << "5. �������" << endl
//         << "6. �������" << endl
//         << "7. �����������" << endl;
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
//            cout << "�� ������� �����������." << endl;
//        }
//        break;
//
//        case 2:
//        {
//            cout << "�� ������� �������." << endl;
//        }
//        break;
//
//        case 3:
//        {
//            cout << "�� ������� �����." << endl;
//        }
//        break;
//
//        case 4:
//        {
//            cout << "�� ������� �������." << endl;
//        }
//        break;
//
//        case 5:
//        {
//            cout << "�� ������� �������." << endl;
//        }
//        break;
//
//        case 6:
//        {
//            cout << "�� ������� �������." << endl;
//        }
//        break;
//
//        case 7:
//        {
//            cout << "�� ������� �����������." << endl;
//        }
//        break;
//
//        default:
//        {
//            cout << "������ ������ ��� ������ �� ����������!" << endl;
//        }
//        break;
//        }



        /// ���� ��������� ��� ����������� ���������� ������� �����.

//        int numbers;
//        cout << "������� ��� ����� (991112233): "; cin >> numbers;
//
//        int code = numbers / 10000000; // ��� ������������ ������ ���� ���������� ������� �����.
//
//
//        if (code == 77 || code == 95 || code == 99)
//        {
//            cout << "��� ���������� ������� �����: UZMOBILE" << endl;
//        } else if(code == 90 || code == 91 || code == 20)
//        {
//            cout << "��� ���������� ������� �����: Beeline" << endl;
//        }else if(code == 98)
//        {
//            cout << "��� ���������� ������� �����: PERFECTUM MOBILE" << endl;
//        } else if(code == 93 || code == 94 || code == 50)
//        {
//            cout << "��� ���������� ������� �����: Ucell" << endl;
//        } else if(code == 88 || code == 97)
//        {
//            cout << "��� ���������� ������� �����: Mobiuz" << endl;
//        } else {
//            cout << "�� �������� ����������. ��������� ��� ���!" << endl;
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


        /// ������������ ��� �������������� �������.


//    char symbol;
//    int symbolCount;
//    int symbolType;
//    int index = 0;
//
//
//    cout << "������� ���������� ��������: "; cin >> symbolCount;
//
//
//    cout << "������� ������: "; cin >> symbol;
//
//    cout << "������� ��� �������: " << endl
//
//    << "1. ������������" << endl
//    << "2. ��������������" << endl;
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


    /// ���������� ����

    int n, result = 0;

    cout << "������� ���������� �����: "; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int number;

        cout << "������� ����� " << i << ": " ;
        cin >> number;

        result += number;
    }


    cout << "����� �����: " << result  << endl;
















    return 0;
}
