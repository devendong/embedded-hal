# Makefile for CUnit testing

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g 

# Libraries
LIBS = -lcunit

# Source files
SRC = math_operations.c test_math_operations.c

# Executable name
TARGET = test_math_operations

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LIBS)

# Clean up build files
clean:
	rm -f $(TARGET)
