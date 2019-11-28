# simple_shell manual

1096@holbertonschool.com to correct errors.

 ## **NAME**
 ## **SYNOPSIS**
_ ./hsh

     #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sys/wait.h>
    #include <sys/types.h>
## **DESCRIPTION**
simple_shell reads all characters from standard input, then store all characters as a string, the next step is divide the string in Tokens. Then evaluate si first token or argument is valid and executable, if the it’s executable, the Shell execute the command with the other arguments typed.

Our simple_shell has to be execute typing the firs argument including the  respective PATH and next to it, separated by blaks the next arguments by this way:
.br
## **EXAMPLE**
   ./hsh

    $ /bin/ls -la

        total 80
    drwxrwxr-x  3 fruizga fruizga  4096 Nov 28 12:00 .
    drwxrwxr-x 13 fruizga fruizga  4096 Nov 27 17:36 ..
    drwxrwxr-x  8 fruizga fruizga  4096 Nov 28 12:00 .git
    -rw-rw-r--  1 fruizga fruizga    24 Nov 26 17:02 .gitignore
    -rw-rw-r--  1 fruizga fruizga   235 Nov 27 15:39 AUTHORS
    -rw-rw-r--  1 fruizga fruizga   960 Nov 28 10:44 README.md
    -rw-rw-r--  1 fruizga fruizga   473 Nov 28 10:44 Shell.c
    -rwxrwxr-x  1 fruizga fruizga 13778 Nov 28 12:00 a.out
    -rw-rw-r--  1 fruizga fruizga   196 Nov 28 10:44 errors.c
    -rw-rw-r--  1 fruizga fruizga   477 Nov 28 10:44 executer.c
    -rw-rw-r--  1 fruizga fruizga   228 Nov 28 10:44 free_grid.c
    -rw-rw-r--  1 fruizga fruizga   584 Nov 28 10:44 frees.c
    -rw-rw-r--  1 fruizga fruizga  1977 Nov 28 10:44 man_1_simple_shell
    -rw-rw-r--  1 fruizga fruizga   402 Nov 28 10:44 readGet.c
    -rw-rw-r--  1 fruizga fruizga   535 Nov 28 10:44 shell.h
    -rw-rw-r--  1 fruizga fruizga   746 Nov 28 10:44 strings.c
    -rw-rw-r--  1 fruizga fruizga   530 Nov 28 10:44 strtoken.c
## **SEE ALSO**
 dash(3) dash
## **BUGS**
All you can imagine maybe a bug.
## **AUTHOR**
Andrés Ballesteros and Faber Andrés Ruiz
(1194@holbertonschool.com - 1096@holbertonschool.com)