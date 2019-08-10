# Libft

Libft is project that make me to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

How does it work?
The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, cd into the project, copy all the files from the sub folders to the root directory and finally, call make:

git clone https://github.com/SELAULE/libft
cd libft
make copy
make
You should see a libft.a file and some object files (.o).

Now to clean up (removing the .o files and the .c files from the root), call make clean

