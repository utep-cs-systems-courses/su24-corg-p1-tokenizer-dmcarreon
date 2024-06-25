# Compiler flags

CFLAGS = -g -O3

all: tokenizer test

# Files

tokenizer.o: tokenizer.h
history.o: history.h
uimain.o: history.h tokenizer.h
tester.o: history.h tokenizer.h

# Compiling source files to object files
tokenizer: tokenizer.o history.o uimain.o
	cc -o $@ $^ $(CFLAGS)
test: tokenizer.o history.o main.o
	cc -o $@ $^ $(CFALGS)

# Clean up
clean:
	rm -f *.o *.c~ *.h~ tokenizer test
run: tokenizer
	./tokenizer
