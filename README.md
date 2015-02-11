GATE: Event model for Gas-TPC events        {#mainpage}
==================================================================

GATE (GAs TPC Event model) is a c++ library containing classes to describe physics events in a gas-TPC. Both low (like hits) and high level (like reconstructed tracks) objects are defined. Object hierarchy starts with the Event class, which may hold collections of hits and other high level objects.
Persistency of GATE classes is implemented via root. A 


==================================================================
DEPENDENCIES:
==================================================================

Root v5.

==================================================================
INSTALL:
==================================================================

Just use "make". Linux and Mac-OS supported. 

==================================================================
AUTHORS:
==================================================================
 
Pau Novella <pau.novella@ific.uv.es>