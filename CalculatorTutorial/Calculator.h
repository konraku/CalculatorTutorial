//つまり、ヘッダー ファイルで名前と型が指定され、ソース ファイルで実装されるか定義が与えられます。
//  別のファイルで定義されているコードにアクセスするには、#include "filename.h" を使用できます。
//filename.h は、使用する変数または関数が宣言されているファイルの名前です。


#pragma once
class Calculator
{
public:
    double Calculate(double x, char oper, double y);
};