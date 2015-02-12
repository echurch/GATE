#include<HistoPlotter.h>

ClassImp(gate::HistoPlotter)

//************************************************************************
gate::HistoPlotter::HistoPlotter(std::string hname, gate::VLEVEL vl){
//************************************************************************
  
  _pfile = hname;

  _m = gate::Messenger("HistoPlotter",vl);

  _m.message("++ Histogram Plotter created",gate::VERBOSE);
  
  _canvas = 0;

}

//************************************************************************
gate::HistoPlotter::HistoPlotter(gate::ParamStore st,gate::VLEVEL vl ){
//************************************************************************

  readPlotParam(st);

  _m = gate::Messenger("HistoPlotter",vl);

  _m.message("++ Histogram Plotter created",gate::VERBOSE);

  _canvas = 0;

  
}

//************************************************************************
gate::HistoPlotter::~HistoPlotter(){
//************************************************************************
  
  _m.message("++ destroying Histogram Plotter...",gate::VERBOSE);
  
  delete _canvas;
}


//************************************************************************
void gate::HistoPlotter::readPlotParam(gate::ParamStore st){
//************************************************************************
 
  _m.message("++ Histogram Plotter reading parameters...",gate::VERBOSE);
  
  if (st.find_sstore("FHISTOS")){ 
    
    _pfile=st.fetch_sstore("FHISTOS")+".ps";}  

  else _pfile = "histograms.ps";

  _m.message("++ Output histogram plots file:",_pfile,gate::VERBOSE);

}


//************************************************************************
void gate::HistoPlotter::initialize(){
//************************************************************************

  this->setStyle();
  
  if (!_canvas) {
    
    _m.message("++ Creating canvas...",gate::VERBOSE);
    
    _canvas = new TCanvas(_pfile.c_str(),"Histogram Plotter");

  }

  this->initPS();

}

//************************************************************************
void gate::HistoPlotter::finalize(){
//************************************************************************

  _m.message("++ finalizing...",gate::VERBOSE);

  if (_canvas){
    
    _m.message("++ closing ps file",gate::VERBOSE);

    _canvas->Clear();

    std::string psname = _pfile + ")";
  
    _canvas->Print(psname.c_str());
  }  

}

//************************************************************************
void gate::HistoPlotter::setStyle(){
//************************************************************************

  
}

//************************************************************************
void gate::HistoPlotter::drawHisto(TH1* h, Option_t* opt){
//************************************************************************
  
  if (!_canvas) this->initialize();
 
  _canvas->Clear();

  _canvas->cd();
 
  h->Draw(opt);
  
  _canvas->Update();
  
  _canvas->Print(_pfile.c_str());

}


//************************************************************************
void gate::HistoPlotter::initPS(){
//************************************************************************
  
  _m.message("++ initializing ps file...",gate::VERBOSE);

  //TText* line = 0;

  TPaveText box(0.1,0.1,0.9,0.9);
 
  box.AddText("");
  box.AddText("Histogram Plots");
  box.AddText("");
  box.AddText(_pfile.c_str());
  box.AddText("");

  time_t time1; time(&time1);
  box.AddText(ctime(&time1));
  box.AddText("");

  _canvas->cd(); 
  box.Draw(); 
  _canvas->Update();

  std::string psname = _pfile + "(";
  
  _canvas->Print(psname.c_str());
  
  _canvas->Clear();
  


}
