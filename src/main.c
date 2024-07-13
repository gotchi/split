#include <stdio.h>
#include "define.h"
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
    char linebuf[LINEBUF_SIZE];     /* ファイル1行分の文字列バッファ */
    char *result;                   /* fgets戻り値 */

    /* コマンドライン引数のチェック */
    if (getoptions(argc, argv, &option) == FALSE)
    {
        show_help();
        return 0;
    }
    
    /* ファイル名のチェック */
    file - fopen(option.file_name, "r");
    if (file == NULL)
    {
        printf("File open is invalid.");
        return -1;
    }

    /* ファイル内容を1行ずつ読み込み、splitを実行
     * split結果を表示する
     */
    while ((result = fgets(linebuf, LINEBUF_SIZE, file)) != NULL)
    {
    
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