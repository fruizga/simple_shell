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
## **SEE ALSO**
 dash(3) dash
## **BUGS**
All you can imagine maybe a bug.
## **AUTHOR**
Andrés Ballesteros and Faber Andrés Ruiz
(1194@holbertonschool.com - 1096@holbertonschool.com)