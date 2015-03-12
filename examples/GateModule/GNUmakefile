# specific names for this package

GATEMAKEDIR = ../../Makefile
GATELIBDIR = ../../lib

DICT  = GateModuleCint
SHLIB = libGateModule.so
SOURCES = $(wildcard *.cc)
#HEADERS = $(wildcard *.h)
HEADERS = $(filter-out GateModuleCint.h,$(wildcard *.h))
#OBJECTS = $(SOURCES:.cc=.o)
OBJECTS = $(filter-out RunGateAlgo.o, $(SOURCES:.cc=.o))


# include options for this package
INCFLAGS = -I.
INCFLAGS += -I../../

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

include $(GATEMAKEDIR)/Makefile.${OSNAME}

# set compiler options for ROOT
CXXFLAGS += $(shell root-config --cflags)
CXXFLAGS += '-fPIC'


# call the common GNUmakefile
include $(GATEMAKEDIR)/GNUmakefile.GATE

#all: bin

### binary compilation ###

LIBS += $(shell root-config --libs)  -lCore -lRIO -lHist
LIBS += -L../../lib  -lGATE -lGATEIO -lGATEUtils -lGateModule

bin: lib/$(SHLIB) RunGateAlgo.o
	@echo "<< compiling RunGateAlgo >>"
	@$(CXX) -g $(CXXFLAGS) -o ./bin/RunGateAlgo $^ $(LIBS) 

.PHONY: clean cleanapps

clean:  cleanapps

cleanapps:
	@rm -f ./bin/RunGateAlgo

