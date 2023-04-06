//.h ファイルでは、関数の "プロトタイプ" が宣言されています。
// これは、必要なパラメーターと、それから返される戻り値の型をコンパイラに事前に通知します。 
//.cpp ファイルには、関数の実装に関する詳細がすべて含まれています。

#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
    switch(oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
}