# define the C compiler to use
CC = gcc

# define any compile-time flags
CFLAGS = -Wall -g

# define any directories containing header files other than /usr/include
INCLUDES = -I/usr/local/include

# define library paths in addition to /usr/lib
#     if I wanted to include libraries not in /usr/lib I'd specify
#     their path using -Lpath, something like:
LFLAGS = -L/usr/local/lib

# define any libraries to link into executable:
#     for example, if you are linking in the math library, you would
#     specify the library with -lm after the object files listed
LIBS = -lm

# define the C source files
SRCS = main.c

# define the C object files
#
# This uses Suffix Replacement within a macro:
# $(name:string1=string2)
# In a macro definition, the string ‘string1’ is replaced by ‘string2’.
OBJS = $(SRCS:.c=.o)

# define the executable file
MAIN = main

# define the makefile targets
all: $(MAIN)
	@echo  Simple compiler named main has been compiled

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN)
