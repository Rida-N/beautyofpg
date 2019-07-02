#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (i % 3 != j % 3)
            {

                switch (i)
                {
                case 1:
                    str1 = "d10";
                    break;
                case 2:
                    str1 = "e10";
                    break;
                case 3:
                    str1 = "f10";
                    break;
                case 4:
                    str1 = "d9";
                    break;
                case 5:
                    str1 = "e9";
                    break;
                case 6:
                    str1 = "f9";
                    break;
                case 7:
                    str1 = "d8";
                    break;
                case 8:
                    str1 = "e8";
                    break;
                case 9:
                    str1 = "f8";
                    break;

                default:
                    break;
                }

                switch (j)
                {
                case 1:
                    str2 = "d3";
                    break;
                case 2:
                    str2 = "e3";
                    break;
                case 3:
                    str2 = "f3";
                    break;
                case 4:
                    str2 = "d2";
                    break;
                case 5:
                    str2 = "e2";
                    break;
                case 6:
                    str2 = "f2";
                    break;
                case 7:
                    str2 = "d1";
                    break;
                case 8:
                    str2 = "e1";
                    break;
                case 9:
                    str2 = "f1";
                    break;

                default:
                    break;
                }
                cout << "str1 : " << str1 << ";  str2 : " << str2 << endl;
            }
        }
    }
    system("pause"); // ★
    return 0;
}