CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf

TARGET0=a
SRC0=	0-main.c \
	0-hash_table_create.c

all:	0

clean:
	$(RM) *~ \#*\# \.\#* \
	$(TARGET0)

re:	clean all

0:
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)

0-dev:
	$(CC) $(SRC0) -o $(TARGET0)
