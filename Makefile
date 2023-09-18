CC	:= gcc
CFLAGS  := -Wall -Wextra -g -Og -MMD

BINARY	:= main
SOURCES	:= $(wildcard *.c)
OBJECTS	:= $(SOURCES:.c=.o)
DEPS	:= $(SOURCES:.c=.d)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $+

.PHONY: clean
clean:
	rm -f $(BINARY) $(OBJECTS) $(DEPS)

-include $(DEPS)
