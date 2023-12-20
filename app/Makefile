PROJ_ROOT := ..
OUT := $(PROJ_ROOT)/out
CXX := g++
CXXFLAGS := -Wall -fPIC
SRCS := app.cpp
OBJS := $(SRCS:.cpp=.o)
LIBRARY := abiexample

# Build using sysroot_v2, the "newer" one
INCLUDE_DIR := $(PROJ_ROOT)/lib/header_v2
LINK_DIR := $(OUT)/sysroot_v2

all:
	@echo Building with sysroot_v2
	$(CXX) $(CXXFLAGS) -o app app.cpp -I$(INCLUDE_DIR) -L$(LINK_DIR) -l$(LIBRARY)

# Run the app against sysroot_v2, simulating an "up-to-date" runtime
run_v2:
	LD_LIBRARY_PATH=$(OUT)/sysroot_v2 ./app

# Run the app against sysroot_v1, simulating an "out-of-date" runtime
run_v1:
	LD_LIBRARY_PATH=$(OUT)/sysroot_v1 ./app

clean:
	rm -f app
