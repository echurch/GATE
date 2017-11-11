
shell variables.

chur558$ echo $LD_LIBRARY_PATH 
/Users/chur558/root-6.08.06/build/lib:/lib:/Users/chur558/root-6.08.06/build/lib:/Users/chur558/NEXT/GATE/lib:/Users/chur558/NEXT/paolina/lib:/Users/chur558/NEXT/Centella
chur558$ echo $ROOT_INCLUDE_PATH 
/Users/chur558/NEXT/GATE/emodel:/Users/chur558/NEXT/GATE/IO:/Users/chur558/NEXT/GATE/utils
chur558$ echo $PYTHONPATH 
/usr/local/lib/root:/lib



python session.

>>> from ROOT import gSystem
>>> gSystem.Load("libGATE.dylib")
>>> gSystem.Load("libGATEIO.dylib")
>>> from ROOT import gate
>>> r = gate.RootReaderEC()
>>> import os
>>> os.listdir()
['.git', 'bin', 'doc', 'emodel', 'examples', 'GATE', 'GNUmakefile', 'IO', 'lib', 'Makefile', 'README.md', 'ups', 'utils']
>>> os.listdir("../data")
['NEXT100.Bi214.FIELD_CAGE.48.next', 'NEXT100.Xe136_bb0nu.ACTIVE.0.next', 'nexus_NEXT100_NEXT_v0_07_01_Bi_FIELD_CAGE_100000kev_6.next', 'test.C', 'test.h']
>>> r.Open("../data/nexus_NEXT100_NEXT_v0_07_01_Bi_FIELD_CAGE_100000kev_6.next")


>>> r.GetNEvents()
24869
>>> r.GetNRuns()
>>> e = r.Read(12)
>>> h = gate.HDF5Writer()

