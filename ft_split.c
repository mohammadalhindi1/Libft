/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:17:56 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/18 20:21:29 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 🔹 دالة لتنظيف الذاكرة إذا فشل malloc */
static void free_array(char **arr, int count)
{
    while (count > 0)
    {
        free(arr[--count]);  // حرر كل كلمة
    }
    free(arr);  // حرر المصفوفة نفسها
}

/* 🔹 دالة لحساب عدد الكلمات في النص */
static int count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && !in_word) // بداية كلمة جديدة
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)        // رجعنا لفاصل
            in_word = 0;
        s++;
    }
    return count;
}

/* 🔹 دالة لنسخ كلمة واحدة من النص */
static char *copy_word(const char *start, int len)
{
    char *word = malloc(len + 1); // تخصيص ذاكرة للكلمة
    int i;

    if (!word)
        return NULL;
    for (i = 0; i < len; i++)
        word[i] = start[i];      // نسخ الكلمة
    word[i] = '\0';              // إنهاء بسطر فارغ
    return word;
}

/* 🔹 الدالة الرئيسية لتقسيم النص */
char **ft_split(const char *s, char c)
{
    char **result;
    int words, i = 0, j = 0, len = 0;

    if (!s)
        return NULL;

    words = count_words(s, c);
    result = malloc((words + 1) * sizeof(char *));
    if (!result)
        return NULL;

    while (s[i])
    {
        if (s[i] != c)  // بداية كلمة
        {
            int start = i;
            while (s[i] && s[i] != c)
            {
                i++;
                len++;
            }
            result[j] = copy_word(s + start, len); // انسخ الكلمة
            if (!result[j])
            {
                free_array(result, j); // تنظيف إذا فشل
                return NULL;
            }
            j++;
            len = 0;
        }
        else
            i++; // تخطي الفواصل
    }
    result[j] = NULL; // آخر عنصر NULL
    return result;
}

/*
int main()
{
    char **arr;
    int i = 0;

    arr = ft_split("hello 42   world split test", ' ');

    if (!arr)
        return 1;

    while (arr[i])
    {
        printf("Word[%d]: %s\n", i, arr[i]);
        free(arr[i]); 
        i++;
    }
    free(arr);

    return 0;
}
*/