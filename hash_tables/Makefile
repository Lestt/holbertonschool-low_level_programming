CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf

TARGET0=a
SRC0=	0-main.c \
		0-hash_table_create.c

TARGET1=b
SRC1=	1-main.c \
		1-djb2.c

TARGET2=c
SRC2=	2-main.c \
		1-djb2.c \
		2-key_index.c


all:	0 1 2

clean:
	$(RM) *~ \#*\# \.\#* \
	$(TARGET0) $(TARGET1)

re:	clean all

0:
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)

0-dev:
	$(CC) $(SRC0) -o $(TARGET0)

1:
	$(CC) $(CFLAGS) $(SRC1) -o $(TARGET1)

1-dev:
	$(CC) $(SRC1) -o $(TARGET1)

2:
	$(CC) $(CFLAGS) $(SRC2) -o $(TARGET2)

2-dev:
	$(CC) $(SRC2) -o $(TARGET2)
