#ifndef GETOPTION_H__
#define GETOPTION_H__

#define STRING_MAX     (100)

/**
 * @brief オプションパラメータ
 * 指定したオプション結果を保持する。
 */
typedef struct option_param
{
    int show_version;               /**< -v version表示 */
    char resolve[STRING_MAX];       /**< 区切り文字列 */
    char file_name[FILENAME_MAX];    /**< ファイル名 */
} OPTION_PARAM, *POPTION_PARAM;

#endif
