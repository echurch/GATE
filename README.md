
THIS IS ERIC'S VERSION OF GATE. ONE SHOULD PROBABLY IGNORE MUCH OF THE README THE BELOW. COMPILES/LINKS WITH CLANG. WORKS WITH ROOT 6.08, PYTHON 3.6.
BOTH CLING AND PYTHON VERSIONS OF INTERACTIVE FUNCTIONAL EXAMPLES LIVE IN examples/mac/.
CODE IS SO FAR ONLY IN github.com/echurch/GATE on branch echurch.

====================================================================================================================================
====================================================================================================================================
====================================================================================================================================








GATE: Event model for Gas-TPC events        {#mainpage}
==================================================================

GATE (GAs Tpc Event model) is a c++ library containing classes to describe physics events in a gas-TPC. Both low (like hits) and high level (like reconstructed tracks) objects are defined. Object hierarchy starts with the Event class, which may hold collections of hits and other high level objects.
Persistency of GATE classes is implemented via root. An analysis framework is also provided, along with examples on how to use the events model and analyze GATE DSTs. 

GATE is divided into three main folders, compiled as individual libraries: emodel (event model library, libGATE), IO (serialization classes, libGATEIO) and utils (analysis framework, libGATEUtils). Beyond these libraries, documentation and examples are provided in doc and exmaples directories. 


==================================================================
DEPENDENCIES:
==================================================================

Root v5

gcc >= 4.8

==================================================================
INSTALL:
==================================================================

Just use "make". Linux and Mac-OS supported. It might be convenient to define the location of GATE with an environment variable (ex: export GATE_DIR=/usr/local/GATE).

==================================================================
DOCUMENTATION:
==================================================================

"make doxygen" will create doxygen documentation within doc folder

==================================================================
EXAMPLES:
==================================================================

GATE provides two kinds of examples:

    1) simple ROOT macros: $GATE_DIR/examples/mac
    2) A template library (or module) for analysis of GATE events: $GATE_DIR/examples/GateModule


GATE analysis modules:

GATE provides an script to create template analysis libraries. Typing

./$GATE_DIR/bin/myGateModule MyModule

will generate a c++ library (named MyModule in this example) with a dummy algorithm where the user can implement the desired analysis. Such algorihtm can be executed as a ROOT macro (MyModule/mac) or with the executable file created upon compilation in MyModule/bin. Finally, the algorithm can be also executed within the Centella framework (see corresponding notebook).

==================================================================
AUTHORS:
==================================================================
 
J.J. Gomez-Cadenas, Pau Novella <pau.novella@ific.uv.es>

The design of GATE follows the principles of the bhep library, developed by J.J. Gomez-Cadenas, J. A. Hernando, J. Burguet and P. Novella.