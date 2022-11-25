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

TARGET3=d
SRC3=	3-main.c \
		0-hash_table_create.c \
		1-djb2.c \
		2-key_index.c \
		3-hash_table_set.c

TARGET4=e
SRC4=	4-main.c \
		0-hash_table_create.c \
		1-djb2.c \
		2-key_index.c \
		3-hash_table_set.c \
		4-hash_table_get.c


TARGET5=f
SRC5=	5-main.c \
		0-hash_table_create.c \
		1-djb2.c \
		2-key_index.c \
		3-hash_table_set.c \
		5-hash_table_print.c


all:	0 1 2 3 4 5

clean:
	$(RM) *~ \#*\# \.\#* \
	$(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5)

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

3:
	$(CC) $(CFLAGS) $(SRC3) -o $(TARGET3)

3-dev:
	$(CC) $(SRC3) -o $(TARGET3)

4:
	$(CC) $(CFLAGS) $(SRC4) -o $(TARGET4)

4-dev:
	$(CC) $(SRC4) -o $(TARGET4)

5:
	$(CC) $(CFLAGS) $(SRC5) -o $(TARGET5)

5-dev:
	$(CC) $(SRC5) -o $(TARGET5)
