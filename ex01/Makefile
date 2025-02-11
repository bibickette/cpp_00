# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phwang <phwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 13:17:33 by phwang            #+#    #+#              #
#    Updated: 2025/02/11 15:50:39 by phwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -std=c++98 -I$(INCLUDE_DIR)

INCLUDE_DIR = include/
SRC_DIR = src/
OBJ_DIR = obj

MANDATORY_SRCS = \
	$(SRC_DIR)PhoneBook.cpp \
	$(SRC_DIR)Contact.cpp \
	$(SRC_DIR)main.cpp

PMANDATORY =  $(addprefix , $(MANDATORY_SRCS))
OBJS = $(PMANDATORY:$(SRC_DIR)%.cpp=$(OBJ_DIR)/%.o)


#PROGRESS BAR
TOTAL_SRCS := $(words $(MANDATORY_SRCS))
COMPILED_SRCS := 0
#COLOR SET
COLOR_RESET = \e[0m
COLOR_GREEN = \e[0;35m
COLOR_BLUE = \e[0;35m


all: $(NAME)

$(OBJ_DIR)/%.o :  $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

	@$(eval COMPILED_SRCS=$(shell echo $$(($(COMPILED_SRCS)+1))))
	@echo -n "$(COLOR_BLUE)Compiling Objects PhoneBook $(COLOR_RESET)[$(COLOR_GREEN)"
	@for i in $(shell seq 1 25); do \
		if [ $$i -le $$(($(COMPILED_SRCS)*25/$(TOTAL_SRCS))) ]; then \
			echo -n "♣"; \
		else \
			echo -n "."; \
		fi; \
	done
	@echo -n "$(COLOR_RESET)] $(COMPILED_SRCS)/$(TOTAL_SRCS)\r"

$(NAME) : $(OBJS)
	@echo "$(COLOR_BLUE)\nCompiling PhoneBook...$(COLOR_RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 
	@echo "$(COLOR_GREEN)PhoneBook Compilation complete !$(COLOR_RESET)        "

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(COLOR_BLUE)✘✘✘ Deleting PhoneBook... ✘✘✘$(COLOR_RESET)"
	@rm -f $(NAME)
	@echo "$(COLOR_GREEN)✘✘✘ PhoneBook fcleaned ! ✘✘✘$(COLOR_RESET)        "

re: fclean all

.PHONY: all clean fclean re