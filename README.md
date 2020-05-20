# LIBASM

he aim of this project is to get familiar with assembly language

## Mandatory part:

* ft_strlen (man strlen)
* ft_strcpy (man strcpy)
* ft_strcmp (man strcmp)
* ft_write (man 2 write)
* ft_read (man 2 read)
* ft_strdup(man strdup)

## How to use

To build the static library run `make`, then you can use it like
this for example : `clang main.c libasm.a` (include the libasm.h in your C files)
if you want to run the tester do `make test`.
Following rule are available in the Makefile :
* make
* re
* clean
* fclean
* test

