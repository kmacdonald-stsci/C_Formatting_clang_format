PROJ=monster_mess

OBJS=

INCLUDE=-I .

CC=gcc
CFLAGS=-g
MACDIR=$(PROJ).dSYM

.PHONY: $(PROJ)

$(PROJ): $(OBJS)
	$(CC) $(PROJ).c -o $(PROJ) $(CFLAGS) $(OBJS) $(INCLUDE)

clean:
	rm -rf $(PROJ) $(OBJS)  $(MACDIR)
