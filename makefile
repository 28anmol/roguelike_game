# Makefile is just to automate the compilation and building process of c files
# Prevents the user from executing each command manually in the terminal

CC = gcc		# Use gcc as the c program compiler
CFLAGS = -Wall -Wextra -lncurses -lm -Iinclude/	# additional flags provided during compilation
LDFLAGS = -lncurses -lm

SOURCE_CODE = $(wildcard src/*.c)
OBJECT = $(patsubst src/%.c, src/%.o, $(SOURCE_CODE))
EXECUTABLE = roguelikegame	# name of the final executable

# target: dependencies
# 	command to build the target

# dependencies are written inorder to ensure that dependency has been completed before target process is started


all: run remove


# Compilation of the source codes
%.o:%.c include/*.h
	@echo "Compiling $< ..."
	$(CC)	$(CFLAGS)	-c	$<	-o	$@



#Linking the object files with one another
$(EXECUTABLE): $(OBJECT)
	$(CC)	$(OBJECT)	$(LDFLAGS)	-o	$(EXECUTABLE)



# Running the final binary after compilation
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Removing the object files and executable files after running the code
remove:
	rm -f $(OBJECT) $(EXECUTABLE)




