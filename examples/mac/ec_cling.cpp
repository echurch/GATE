gSystem->Load("libCore.so");
gSystem->Load("libRIO.so");
gSystem->Load("libTree.so");
gSystem->Load("libGATE.so");
gSystem->Load("libGATEIO.so");

.include /Users/chur558/NEXT/GATE

gate::RootReader* rr = new gate::RootReader();
rr->Open("/Users/chur558/NEXT/data/NEXT100.Xe136_bb0nu.ACTIVE.0.next")

gate::Event* evt = new gate::Event(rr->Read(12));
evt->GetID();
evt->GetEnergy();
evt->GetEventType();
#evt->Info();
