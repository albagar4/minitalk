CLIENT_NAME = client
SERVER_NAME = server
CLIENT_SOURCES = client.c
SERVER_SOURCES = server.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(CLIENT_NAME) $(SERVER_NAME)

$(CLIENT_NAME):
	$(CC) $(CFLAGS) $(CLIENT_SOURCES) -o $(CLIENT_NAME)

$(SERVER_NAME):
	$(CC) $(CFLAGS) $(SERVER_SOURCES) -o $(SERVER_NAME)

clean:

fclean: clean
	rm -f $(CLIENT_NAME) $(SERVER_NAME)

re: fclean all
