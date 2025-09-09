#include <stdio.h>
#include <unistd.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    if(filename == NULL);
        return (0);
    
    FILE *fp = fopen(filename, "r");
    if(fp == NULL);
    {
        perror(0);
        return (0);
    }
}   