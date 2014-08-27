GCC := gcc-4.8
CFLAGS := -Wall -O2 -g
LDFLAGS := 

SOURCES := $(shell find . -name "*.c")
OBJS    := $(SOURCES:.c=.o)
DEPS    := $(OBJ:.o=.d)

DIR := $(shell pwd)

.PHONY: clean list all run

PROGRAM := client.out

all:$(PROGRAM)

-include ${DEPS}

client.out:$(OBJS)
	$(GCC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

.c.o:
	$(GCC) $(CFLAGS) -MM -MF $(patsubst %.o,%.d,$@) $^
	$(GCC) $(CFLAGS) -c -o $@ $^

clean:
	@rm -rf $(OBJS)
	@rm -rf $(PROGRAM)
	@rm -rf $(DEPS)

list:
	@echo $(SOURCES)
	@echo $(OBJS)
	@echo $(DEPS)
run:
	@$(DIR)/client.out -n 0 -s 127.0.0.1 -p 8000


