{
    gSystem->Load("libCore.so");
    gSystem->Load("libRIO.so");
    gSystem->Load("libTree.so");

    gSystem->Load("../../lib/libGATE.so");
    gSystem->Load("../../lib/libGATEIO.so");
    
    std::cout<<"Creating DST..."<<std::endl;

    gate::RootWriter* wr = new gate::RootWriter();
    
    wr->Open("MyGateDst.root","RECREATE");

    gate::Event* evt = new gate::Event(); 
    
    int nevt = 4;

    for (int i =0; i<nevt; i++ ){
        
        evt->SetID(i);

        gate::MCTrack* gtrk = new gate::MCTrack(); 
        
        evt->AddMCTrack(gtrk);

        wr->Write(*evt);
    }

    wr->Close();
    
    gate::RootReader* rr = new gate::RootReader();
    
    rr->Open("MyGateDst.root");
    
    std::cout<<"Reading DST events..."<<std::endl;

    for (int i =0; i<nevt; i++ ){
        
        evt = rr->Read(i);
        
        std::cout<<*evt<<std::endl;
    }
    
    rr->Close();

    delete evt;
    delete wr;
    delete rr;
    

}
