#include <stdio.h>
#include "getoption.h"
#include "define.h"

/**
 * @brief オプション取得
 * 
 * @param argc コマンドライン引数の数
 * @param argv コマンドライン引数
 * @param pOption オプション情報へのポインタ
 * @return int TRUE=正常, FALSE=異常
 */
int getoptions(int argc, char **argv, OPTION_PARAM *pOption)
{
    if (argc != 3)
    {
        return FALSE;
    }
    return TRUE;
}