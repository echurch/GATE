GATE: Event model for Gas-TPC events        {#mainpage}
==================================================================

GATE (GAs TPC Event model) is a c++ library containing classes to describe physics events in a gas-TPC. Both low (like hits) and high level (like reconstructed tracks) objects are defined. Object hierarchy starts with the Event class, which may hold collections of hits and other high level objects.
Persistency of GATE classes is implemented via root. An analysis framewrok is also provided, along with examples on how to use the events model and analyze GATE DSTs. 

GATE is divided into three main folders, compiled as individual libraries: emodel (event model library, libGATE), IO (serialization classes, libGATEIO) and utils (analysis framework, libGATEUtils). Beyond these libraries, documentation and examples are provided in doc and exmaples directories. 


==================================================================
DEPENDENCIES:
==================================================================

Root v5.

==================================================================
INSTALL:
==================================================================

Just use "make". Linux and Mac-OS supported. 

==================================================================
DOCUMENTATION:
==================================================================

"make doxygen" will create doxygen documentation within doc folder

==================================================================
AUTHORS:
==================================================================
 
Pau Novella <pau.novella@ific.uv.es>