int ft_count(char *str, char c)
{
    int count;
    if (!*str)
        return 0;
    count = 0;
    while (*str)
    {
        while(*str == c)
            str++;
        if (*str)
            count++;
        while (*str != c && *str)
            str++;
    }
    return (count);
}

char **ft_split(char *s, char c)
{
    char **list;
    int word_len;
    int i;
    list = (char **)malloc((ft_count(s,c) + 1) * sizeof(char *));
    if (!list || !s)
        return 0;
    i = 0;
    while (*s)
    {
        while (*s == c && *s)
            s++;
        if (*s)
        {
            if (!strchr(s,c))
                word_len = strlen(s);
            else
                word_len = strchr(s,c) - s;
            list[i++] = ft_substr(s,0,word_len);
            s += word_len;
        }
    }
    list[i] = 0;
    return (list);
}
