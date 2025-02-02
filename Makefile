# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Executable names
EXEC = solitaire
TEST_EXEC = test

# Source files
SRC = main.cpp card.cpp deck.cpp hand.cpp
TEST_SRC = testCard.cpp card.cpp deck.cpp hand.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

# Build main executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

# Build test executable
$(TEST_EXEC): $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $(TEST_OBJS)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJS) $(TEST_OBJS) $(EXEC) $(TEST_EXEC)
``
