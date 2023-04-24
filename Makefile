.SILENT:

NAME	:= libft.a
		
SRCS =	ft_strtrim.c     ft_atoi.c         ft_isprint.c    ft_strlen.c ft_split.c        ft_strjoin.c     ft_substr.c\
		ft_strchr.c      ft_strrchr.c      ft_strncmp.c    ft_strnstr.c  ft_itoa.c\
		ft_isalpha.c     ft_isdigit.c      ft_isalnum.c    ft_isascii.c\
		ft_strlcpy.c     ft_strlcat.c      ft_toupper.c    ft_tolower.c\
		ft_bzero.c       ft_memcpy.c       ft_memmove.c     ft_calloc.c \
		ft_memchr.c      ft_memcmp.c       ft_memset.c       ft_strdup.c\
		# ft_strmapi.c     ft_striteri.c  \ ft_putendl_fd.c  ft_putnbr_fd.c    ft_putchar_fd.c ft_putstr_fd.c\ 

SRCS_O	:= ${SRCS:.c=.o}
OBJS	:= ${SRCS_O}
CC		:= gcc
RM		:= /bin/rm -f
CFLAGS	:= -Wall -Wextra -Werror -I*.h

CL := ar -rc
RL := ar -s

${NAME}: ${SRCS_O}
	${CL} ${NAME} ${SRCS_O}
	${RL} ${NAME}
	echo 'Mandatory part is ready'

all: ${NAME}


clean:
	${RM} ${OBJS}
	echo 'All created objects were removed'

fclean: clean
	${RM} ${NAME}
	echo 'Static library removed'

re: fclean all

author: 
	echo 'mbrito-p'

norm:
	echo 'Running Norminette'
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: clean fclean norm all bonus re author