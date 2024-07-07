#include <stdio.h>
#include "getoption.h"

#define LINEBUF_SIZE    (1024)

/**
 * @brief split コマンド
 * 
 * @param argc コマンドライン引数の数
 * @param argv コマンドライン引数
 * @return int メイン処理の戻り値(0＝正常)
 */
int main(int argc, char **argv)
{
    FILE *file;
    OPTION_PARAM option;
    char linebuf[LINEBUF_SIZE];
    char *result;

    /* コマンドライン引数のチェック */

    if (option.show_version != 0)
    {
        show_help();
        return 0;
    }
    /* ファイル名のチェック */
    file - fopen(option.file_name, "r");

    /* ファイル内容を1行ずつ読み込み、splitを実行
     * split結果を表示する
     */
    while ((result = fgets(linebuf, LINEBUF_SIZE, file)) != NULL)
    {
    
    }
    if (result == NULL)
    {
        /* エラー発生 */
        return -1;
    }

    return 0;
}

/**
 * @brief 使用方法を表示する
 * 
 */
void show_help()
{
    
}