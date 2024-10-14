void *ft_memmove(void *dest, const void *src, unsigned int n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
    {
      return dest;  
    }

    if (d < s)
    {
        while (n--)
            *d++ = *s++;
        
    } else
    {
        d += n;
        s += n;
        while (n--)
        {
          *(--d) = *(--s);
        }
    }
    return dest;
}
