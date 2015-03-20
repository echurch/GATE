#include<HistoManager.h>

ClassImp(gate::HistoManager)

//************************************************************************
gate::HistoManager::HistoManager(std::string hname, gate::VLEVEL vl)
  :HistoPlotter(hname+".ps",vl){
//************************************************************************  
  
  _hfile = hname;

  _hdir = new TDirectory("HistoManager","HistoManager");

  _m = gate::Messenger("HistoManager",vl);

  _m.message("++ Histogram Manager created",gate::VERBOSE);

}

//************************************************************************
gate::HistoManager::HistoManager(gate::ParamStore st,gate::VLEVEL vl )
  :HistoPlotter(st,vl){
//************************************************************************  

  readHistoParam(st);

  _ofile =0;

  _m = gate::Messenger("HistoManager",vl);

  _m.message("++ Histogram Manager created",gate::VERBOSE);


}

//************************************************************************  
gate::HistoManager::~HistoManager(){
//************************************************************************    

  _m.message("++ destroying Histogram Manager...",gate::VERBOSE);

  delete _hdir;
  
}


//************************************************************************  
void gate::HistoManager::readHistoParam(gate::ParamStore st){
//************************************************************************  
  
  _m.message("++ Histogram Manager reading parameters...",gate::VERBOSE);
  
  if (st.find_sstore("FHISTOS")){ 
    
    _hfile=st.fetch_sstore("FHISTOS");}  

  else _hfile = "histograms.root";

  _m.message("++ Output histogram file:",_hfile,gate::NORMAL);

}

//************************************************************************  
TH1* gate::HistoManager::operator[](std::string name){ 
//************************************************************************  
  return fetch(name); 
}

//************************************************************************  
void gate::HistoManager::h1(std::string name,std::string title,size_t nbin,
		      double fb,double lb){
//************************************************************************  
  
  _hdir->cd();
  
  TH1F* h = new TH1F(name.c_str(),title.c_str(),nbin,fb,lb);
  
  store(name,h);

}

//************************************************************************  
void gate::HistoManager::h2(std::string name,std::string title,size_t nxbin,
		      double fbx,double lbx,size_t nybin,
		      size_t fby,size_t lby){
//************************************************************************  
  
  _hdir->cd();
  
  TH2F* h = new TH2F(name.c_str(),title.c_str(),nxbin,fbx,lbx,
		     nybin,fby,lby);
  
  store(name,h);

}

//************************************************************************  
void gate::HistoManager::fill(std::string name, double value1){
//************************************************************************  

  TH1F* h = dynamic_cast<TH1F*>(fetch(name));

  h->Fill(value1);
    
}

//************************************************************************  
void gate::HistoManager::fill2d(std::string name, double value1, double value2){
//************************************************************************  

  TH2F* h = dynamic_cast<TH2F*>(fetch(name));
 
  h->Fill(value1,value2);
    
}

//************************************************************************  
void gate::HistoManager::draw(std::string name, Option_t* opt){
//************************************************************************
  
  TH1* h = fetch(name);
  
  this->drawHisto(h,opt);
  

}


//************************************************************************  
void gate::HistoManager::divide1D(std::string name1,std::string name2,std::string name3){
//************************************************************************  

  TH1F* h1 = dynamic_cast<TH1F*>(fetch(name1));
  TH1F* h2 = dynamic_cast<TH1F*>(fetch(name2));
   
  TH1F* h3 = NDivide1D(h1,h2);
  
  h3->SetName(name3.c_str());h3->SetTitle(name3.c_str());

  store(name3,h3);

}

//************************************************************************  
void gate::HistoManager::divide2D(std::string name1,std::string name2,std::string name3){
//************************************************************************  

  TH2F* h1 = dynamic_cast<TH2F*>(fetch(name1));
  TH2F* h2 = dynamic_cast<TH2F*>(fetch(name2));
  
  TH2F* h3 = NDivide2D(h1,h2);
  h3->SetName(name3.c_str());h3->SetTitle(name3.c_str());
 
  store(name3,h3);

}

//************************************************************************  
void gate::HistoManager::save(){
//************************************************************************  
  
  _m.message("Saving histos in:",_hfile,gate::NORMAL);
  
  _ofile = new TFile(_hfile.c_str(),"RECREATE");
  
  std::map<std::string,TH1*>::const_iterator it;

  for (it= hstore.store_map().begin(); it!=hstore.store_map().end(); ++it){
    
    (*it).second->Write(); }
  
  _ofile->Close();
  
  delete _ofile;

  HistoPlotter::finalize();

}


// vector<std::string> HistoManager::names () const  
// {
//   map<std::string, TH1*>::const_iterator pi;
//   vector<std::string> nam;
      
//   for (pi = hstore.store_map.begin(); 
//        pi!= hstore.store_map().end(); ++pi)
//     {
//       nam.push_back(pi->first);
//     } 
//   return nam;
// }
    


// vector<TH1*> HistoManager::histos() const{

//   vector<TH1*> vitems;
//   map<std::string, TH1*>::const_iterator it;
//   for (it = hstore.store_map().begin(); it!= hstore.store_map().end(); ++it)
//     {
//       vitems.push_back(it->second);
//     }
//   return vitems;
// }

