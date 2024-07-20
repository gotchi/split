#include <stdio.h>
#include "define.h"
#include "getoption.h"
#include "split.h"

#define LINEBUF_SIZE    (1024)
void show_help(void);

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
    WORDSLIST *words;
    int row;
    int i;

    /* コマンドライン引数のチェック */
    if (getoptions(argc, argv, &option) == FALSE)
    {
        show_help();
        return 0;
    }
    
    /* ファイルOpenチェック */
    file = fopen(option.file_name, "r");
    if (file == NULL)
    {
        printf("File open is invalid.");
        return -1;
    }

    /* ファイル内容を1行ずつ読み込み、splitを実行
     * split結果を表示する
     */
    row = 0;
    while ((result = fgets(linebuf, LINEBUF_SIZE, file)) != NULL)
    {
        /* コメント排除　*/

        /* spkit実行 */
        words = split(linebuf, option.resolve);
        if (words == NULL)
        {
            continue;
        }
        /* split結果表示 */
        printf("Line[%d]:%s\n", row, linebuf);
        for (i = 0; i < words->count; ++i)
        {
            printf("Word[%d]:%s\n", i, words->word[i]);
        }
        row++;
    }
    return 0;
}

/**
 * @brief 使用方法を表示する
 */
void show_help(void)
{
    puts("split version 1.00");
}