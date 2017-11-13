
shell variables.

chur558$ echo $LD_LIBRARY_PATH 
/Users/chur558/root-6.08.06/build/lib:/lib:/Users/chur558/root-6.08.06/build/lib:/Users/chur558/NEXT/GATE/lib:/Users/chur558/NEXT/paolina/lib:/Users/chur558/NEXT/Centella:/Users/chur558/Downloads/hdf5-1.10.1/hdf5/lib
chur558$ echo $ROOT_INCLUDE_PATH 
/Users/chur558/NEXT/GATE/emodel:/Users/chur558/NEXT/GATE/IO:/Users/chur558/NEXT/GATE/utils
chur558$ echo $PYTHONPATH 
/usr/local/lib/root:/lib
chr558$ echo $HDF5_INC



python session.

from ROOT import gSystem
gSystem.Load("libGATE.dylib")
gSystem.Load("libGATEIO.dylib")
from ROOT import gate
r = gate.RootReaderEC()
import os
os.listdir()
#[.git', 'bin', 'doc', 'emodel', 'examples', 'GATE', 'GNUmakefile', 'IO', 'lib', 'Makefile', 'README.md', 'ups', 'utils']
os.listdir("../data")
#['NEXT100.Bi214.FIELD_CAGE.48.next', 'NEXT100.Xe136_bb0nu.ACTIVE.0.next', 'nexus_NEXT100_NEXT_v0_07_01_Bi_FIELD_CAGE_100000kev_6.next', 'test.C', 'test.h']

rFile = "/Users/chur558/NEXT/data/NEXT100.Xe136_bb0nu.ACTIVE.0.next"
r.Open(rFile)


n = r.GetNEvents()
nR = r.GetNRuns()
evt = r.Read(12)
h = gate.HDF5Writer()
fh = ".".join(rFile.split(".")[0:-1])+".h5"
h.Open(fh)

for evtNum in range(5): #n
    evt = r.Read(evtNum)
    h.Write(evt)


h.WriteRunInfo(r.GetRunInfo(0))
h.Close()
