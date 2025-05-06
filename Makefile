# Compiler & Flags
CC      = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR) -I$(LIBFT_DIR)

# Paths
SRC_DIR = src
INC_DIR = include
LIBFT_DIR = libft

# Executables
NAME1   = push_swap
NAME2   = checker

# Sources
SRC1    = $(SRC_DIR)/main.c $(SRC_DIR)/parser.c $(SRC_DIR)/stack_utils.c
SRC2    = $(SRC_DIR)/checker.c $(SRC_DIR)/parser.c $(SRC_DIR)/stack_utils.c

# Objects
OBJ1    = $(SRC1:.c=.o)
OBJ2    = $(SRC2:.c=.o)

# Link to libft
LIBFT_A = $(LIBFT_DIR)/libft.a
LIBFT_INC = -I$(LIBFT_DIR)
LIBFT_LINK = -L$(LIBFT_DIR) -lft

# Targets
all: $(NAME1) $(NAME2)

$(NAME1): $(OBJ1) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJ1) -I$(INC_DIR) $(LIBFT_LINK) -o $(NAME1)

$(NAME2): $(OBJ2) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJ2) -I$(INC_DIR) $(LIBFT_LINK) -o $(NAME2)

# Libft
$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ1) $(OBJ2)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME1) $(NAME2)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all


