# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 23:59:26 by muabdi            #+#    #+#              #
#    Updated: 2025/03/14 16:22:46 by muabdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m

SRC_DIR = ./src
OBJ_DIR = ./bin

SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/Zombie.cpp $(SRC_DIR)/zombieHorde.cpp
OBJS = $(SRCS:$(SRC_DIR)/%.cPP=$(OBJ_DIR)/%.o)

all: $(NAME) $(OBJ_DIR)

$(OBJ_DIR):
	@echo "${YELLOW}Creating object directory $(OBJ_DIR)...${NC}"
	@mkdir -p $(OBJ_DIR)
	@echo "${GREEN}Object directory $(OBJ_DIR) created.${NC}"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) $(INCLUDEFLAGS) -c $< -o $@

${NAME}: $(OBJS)
	@echo "${YELLOW}Creating $(NAME)...${NC}"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "${GREEN}$(NAME) created.${NC}"

all: $(NAME) $(OBJ_DIR)

clean:
	@echo "${YELLOW}Removing object files...${NC}"
	@rm -rf $(OBJ_DIR)
	@echo "${GREEN}Object files removed.${NC}"

fclean:
	@echo "${YELLOW}Removing object files...${NC}"
	@rm -rf $(OBJ_DIR)
	@echo "${GREEN}Object files removed.${NC}"
	@echo "${YELLOW}Removing $(Name) executable...${NC}"
	@rm -f $(NAME)
	@echo "${GREEN}$(NAME) executable removed.${NC}"

re: fclean all

.PHONY: all clean fclean re