# What is libft.h?
This is the very first project at <a href = "https://www.42.us.org/program/the-42-program/">42 Sillicon Valley.</a> You are required to re-create a list of Libc fucntions as well as useful bonus functions that will be helpful in completing future projects. At 42 students can only use functions that are necessary for the project and also functions they create and include in their libft.h project.
# How many fucntions are there?
42 students have 4 lists of fucntions to create before you can get credit for this project.
1) Useful Libc fucntions 
2) Additional fucntions to be used on later projects
3) Bonus fucntions for extra credit
4) Any addition funcitons for personal use

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_upstring 
bzero	  	      | ft_memdel		| ft_lstdelone    | ft_iterupchar
memcpy		| ft_strnew		| ft_lstdel		| ft_strndup
memccpy		| ft_strdel		| ft_lstadd		| ft_strnlen
memmove		| ft_strclr		| ft_lstiter	| get_next_line
memchr		| ft_striter	| ft_lstmap		| ft_putfloat
memcmp		| ft_striteri	|			| ft_itoa_base
strlen		| ft_strmap		|		      | 
strdup		| ft_strmapi	|		      | 
strcpy		| ft_strequ		|	      	| 
strncpy		| ft_strnequ	|			| 
strcat		| ft_strsub		|                 | 
strlcat		| ft_strjoin	|                 | 
strchr		| ft_strtrim	|                 | 
strrchr		| ft_strsplit	|                 | 
strstr		| ft_itoa	  	|                 | 
strnstr		| ft_putchar	|                 |   
strcmp		| ft_putstr		|                 | 
strncmp		| ft_putendl	|                 |
atoi		      | ft_putnbr		|                 | 
isalpha		| ft_putchar_fd	|                 | 
isdigit		| ft_putstr_fd	|                 |
isalnum		| ft_putendl_fd	|                 | 
isascii		| ft_putnbr_fd	|                 | 
isprint		| | |
toupper		| | | 
tolower		| | | 
## How do I use it?? 
First run these commands <i>IN ORDER</i> in the terminal prompt:

      gitclone https://github.com/ajsmiley/libft.h.git
      cd libft.h
      make all
The directory should now be full of .o files and a libft.a file, you're almost done!
Head over to the main.c file like this and check it out:

      vim main.c
Right now main is calling ft_function_test1() and that will print out information about the libc functions and how to use them. If you wish to test other functions you should do so in this file only.
Now just run this command to compile the main file with the library:
      
      make main
And finally run the this command to execute the main.c file:

      ./a.out
Thats it!! Now you can use any of the brilliant function I have created in your C programs!! 
