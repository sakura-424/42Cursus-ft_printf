# ターゲット名
NAME = libftprintf.a

# コンパイラと基本フラグ
CC = cc
CFLAGS = -Wall -Wextra -Werror

# メインソースファイル
SRCS = ft_printf.c \
       ft_print_ptr.c \
       ft_print_int.c \
       ft_print_unsigned.c \
       ft_print_hex.c \
	   ft_printf_utils.c

# オブジェクトファイル
OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

# デフォルトターゲット
all: $(NAME)

# libftもコンパイル
$(LIBFT):
	make -C $(LIBFT_PATH)

# ライブラリ作成（libftも含める）
$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

# コンパイルルール
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -I. -I$(LIBFT_PATH) -c $< -o $@

# クリーンアップ
clean:
	make clean -C $(LIBFT_PATH)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re: fclean all

# ボーナス対応（オプション）
bonus: $(OBJS)
	ar rcs $(NAME) $^

.PHONY: all clean fclean re bonus
