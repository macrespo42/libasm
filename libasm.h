#ifndef LIBASM_H
# define LIBASM_H

# define BUFFER_SIZE 4096
# define CCOLOR   "\033[0m"
# define CRED     "\033[1;31m"
# define CGREEN   "\033[1;32m"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

char    *ft_strdup(const char *s);
char    *ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
size_t  ft_strlen(const char *s);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
#endif
