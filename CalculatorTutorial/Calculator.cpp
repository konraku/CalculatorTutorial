//.h �t�@�C���ł́A�֐��� "�v���g�^�C�v" ���錾����Ă��܂��B
// ����́A�K�v�ȃp�����[�^�[�ƁA���ꂩ��Ԃ����߂�l�̌^���R���p�C���Ɏ��O�ɒʒm���܂��B 
//.cpp �t�@�C���ɂ́A�֐��̎����Ɋւ���ڍׂ����ׂĊ܂܂�Ă��܂��B

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