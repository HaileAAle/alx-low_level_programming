C - Static libraries
task 1:
. Create the static library libmy.a containing all the functions listed in the folder
. bring all files to the directory
. create an object file of each files 
	command:gcc -c *.c
. create the library with a name libmy.a
	library name start by: lib
	library file have extensin: a(archive)
	command: ar crs libmy.a *.o
task 2:
Create a script called "create_static_lib.sh" that creates a static library called liball.a from all the .c files that are in the current directory.
. command is below
#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
