void ft_bzero(void *s, unsigned int n)
{
    unsigned char *ptr = s;
    while (n--)
        *ptr++ = 0;
}
