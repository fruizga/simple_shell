.\" M.\" Manpage for simple_shell.

.\" Contact 1194@holbertonschool.com or

1096@holbertonschool.com to correct errors.

.TH simple_shell 1 "28 November 2019" "1.0" "simple_shell Manual"

.SH NAME

 Simple_shell – program that interprete commands and then execute them.

.SH SYNOPSIS

.BI ./hsh

 

.BI $ Arg[0] Arg[1] Arg[n]

.PP

.B #include <stdio.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <sys/wait.h>

#include <sys/types.h>

.SH DESCRIPTION

simple_shell reads all characters from standard input, then store all characters as a string, the next step is divide the string in Tokens. Then evaluate si first token or argument is valid and executable, if the it’s executable, the Shell execute the command with the other arguments typed..PP

.PP

.SH hsh .br

.br

.PP

Our simple_shell has to be execute typing the firs argument including the  respective PATH and next to it, separated by blaks the next arguments by this way:

.br

.SH EXAMPLE

   ./hsh

.br

$ /bin/ls -la

.br

.SH SEE ALSO

.R dash(3) dash

.SH BUGS

All you can imagine maybe a bug.

.SH AUTHOR

Andrés Ballesteros and Faber Andrés Ruiz

(1194@holbertonschool.com - 1096@holbertonschool.com)