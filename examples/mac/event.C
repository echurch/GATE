{
    
    gSystem->Load("../../lib/libGATE.so");
    
    gate::Event* evt = new gate::Event(); 
    
    evt->SetID(1);
    
    int nhits = 4;
    
    gate::Track* trk = new gate::Track();
    
    for (int i =0; i<nhits; i++ ){
        
        gate::Hit* hit = new gate::Hit();
        
        trk->AddHit(hit);

        evt->AddHit(gate::PMT,hit);
    }
        
    evt->AddTrack(gate::PMT,trk);

    gate::MCParticle* p = new gate::MCParticle();
    
    p->SetInitialVtx(0,0,0);
    
    p->SetID(1000);

    evt->AddMCParticle(p);
    
    gate::MCTrack* ttrk = new gate::MCTrack();
    
    ttrk->SetParticle(p);

    evt->AddMCTrack(ttrk);

    int nthits = 4;

    for (int i =0; i<nthits; i++ ){
        
        gate::MCHit* thit = new gate::MCHit();
        
        thit->SetParticle(p);
        
        ttrk->AddHit(thit); 
       
        evt->AddMCHit(thit);
    }
    
    //std::cout<<((gate::MCHit*) ttrk->GetHits()[0])->GetMCParticle().GetID()
    //         << std::endl;
    
    std::cout<<*evt<<std::endl;
    
    delete evt;
    
}
