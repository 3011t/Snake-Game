CXX = g++

CXXFLAGS = -Wall -g -std=c++17

PROJ_NAME = SnakeGame

SFML_DIR = vendor/SFML/
SFML_LINK = sfml-graphics sfml-window sfml-system sfml-network sfml-audio
LDFLAGS = '-Wl,-rpath,$(shell pwd)/vendor/SFML/lib'

SRC_DIR = src/
OBJ_DIR = obj/
BUILD_DIR = build/

CPP_FILES = $(wildcard $(SRC_DIR)*.cpp)
OBJ_FILES = $(subst $(SRC_DIR),$(OBJ_DIR),$(CPP_FILES:.cpp=.o))

all: $(BUILD_DIR)$(PROJ_NAME)

$(BUILD_DIR)$(PROJ_NAME): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)$(PROJ_NAME) $(OBJ_FILES) $(LDFLAGS) -L$(SFML_DIR)lib $(addprefix -l,$(SFML_LINK))

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	$(CXX) $(CXXFLAGS) -I$(SFML_DIR)include -c $^ -o $@  $(LDFLAGS) -L$(SFML_DIR)lib $(addprefix -l,$(SFML_LINK))

clean:
	rm -vrf obj/ build/
	mkdir obj/
	mkdir build/

run:
	build/automaton
