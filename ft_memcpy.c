void *ft_memcpy(void *dest, const void *src, unsigned int n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    while (n--)
        *d++ = *s++;
    return dest;
}
