PROJ_ROOT := ..
OUT := $(PROJ_ROOT)/out
CXX := g++
CXXFLAGS := -Wall -fPIC
SRCS := source.cpp
OBJS := $(SRCS:.cpp=.o)
LIBRARY := libabiexample.so

INCLUDE_DIR_V1 := ./header_v1
INCLUDE_DIR_V2 := ./header_v2

all: v1 v2

v1:
	mkdir -p $(OUT)
	$(CXX) $(CXXFLAGS) -c -I$(INCLUDE_DIR_V1) -o $(OUT)/$(OBJS) $(SRCS)
	mkdir -p $(OUT)/sysroot_v1
	$(CXX) -shared -o $(OUT)/sysroot_v1/$(LIBRARY) $(OUT)/$(OBJS)

v2:
	mkdir -p $(OUT)
	$(CXX) $(CXXFLAGS) -c -I$(INCLUDE_DIR_V2) -o $(OUT)/$(OBJS) $(SRCS)
	mkdir -p $(OUT)/sysroot_v2
	$(CXX) -shared -o $(OUT)/sysroot_v2/$(LIBRARY) $(OUT)/$(OBJS)

clean:
	rm -rf $(OUT)/*
