#ifndef MAIN_H
#define MAIN_H

char *cap_string(char *);
char *leet(char *);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
char *_strcpy(char *dest, char *src);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *string_toupper(char *);
char *_strncat(char *dest, char *src, int n);
int _atoi(char *s);
int is_separator(char c);
int _putchar(char c);
int _strlen(char *s);
unsigned int _strspn(char *s, char *accept);
void _puts(char *str);
void print_array(int *a, int n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void print_rev(char *s);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
void swap_int(int *a, int *b);

#endif
