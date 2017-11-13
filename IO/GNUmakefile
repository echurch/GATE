
# specific names for this package

GATEMAKEDIR = ../Makefile
GATELIBDIR = ../lib

DICT  = GATEIOCint
SHLIB = libGATEIO.dylib
ROOTMAP = libGATEIO.rootmap
SOURCES = $(wildcard *.cc)
#HEADERS = $(wildcard *.h)
HEADERS = $(filter-out GATEIOCint.h,$(wildcard *.h))
OBJECTS = $(SOURCES:.cc=.o)
#OBJECTS = $(filter-out RunActionUnit.o, $(SOURCES:.cc=.o))


# include options for this package
INCFLAGS = -I.
INCFLAGS += -I../
INCFLAGS += -I../emodel
#INCFLAGS += -I$()/DCBase

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

include $(GATEMAKEDIR)/Makefile.${OSNAME}

# set compiler options for ROOT
CXXFLAGS += $(shell root-config --cflags)
CXXFLAGS += '-fPIC'

HDF5_INC = "/Users/chur558/Downloads/hdf5-1.10.1/hdf5/include"
# Setting this variable crucially compiles-in non-null versions in HDF5Writer/Reader.cc of Open,Write,Read, ... functions
ifneq  ($(HDF5_INC),)
CXXFLAGS += '-DHDF5'
INCFLAGS += -I$(HDF5_INC)
endif

# call the common GNUmakefile
include $(GATEMAKEDIR)/GNUmakefile.GATE

#all: bin

### binary compilation ###

LIBS += $(shell root-config --libs) 
LIBS += -L$(GATELIBDIR)  

