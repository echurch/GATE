{
    
    gSystem->Load("../../lib/libGATE.so");
    
    gate::Event* evt = new gate::Event(); 
    
    evt->SetID(1);
    
    int nhits = 4;

    for (int i =0; i<nhits; i++ ){
        
        gate::Hit* hit = new gate::Hit();
        
        evt->AddHit(gate::PMT,hit);
    }

    gate::Particle* p = new gate::Particle();
    
    p->SetInitialVtx(0,0,0);
    
    evt->AddTrueParticle(p);
    
    gate::TTrack* ttrk = new gate::TTrack();
    
    ttrk.SetParticle(p);

    evt->AddTrueTrack(ttrk);

    int nthits = 4;

    for (int i =0; i<nthits; i++ ){
        
        gate::THit* thit = new gate::THit();
        
        thit->SetParticle(p);
        
        ttrk->AddHit(thit);

        evt->AddTrueHit(thit);
    }
    
    std::cout<<*evt<<std::endl;
    
    delete evt;
    
}
