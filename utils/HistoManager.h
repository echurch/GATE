#ifndef HMAN__
#define HMAN__

/**
 * @file HistoManager.h
 * 
 * @class HistoManager
 *
 * \brief Histogram manager class
 *
 *    
 * \author Pau Novella $Author: pnovella $
 *
 * \version $Revision: 1.0 $
 *
 *
 * Contact: pau.novella@ciemat.es
 *
 */



#include<map>

#include<ParamStore.h>
#include<Messenger.h>

#include<HistoPlotter.h>
#include<HistoFunctions.h>

#include<TH1F.h>
#include<TH2F.h>
#include<TH3F.h>
#include<TFile.h>
#include<TObjArray.h>
#include<TSystem.h>
#include<TDirectory.h>


/**
 * \class HistoManager
 *
 * \ingroup utils
 *
 * \brief Histogram Manager
 *
 * \author Pau Novella
 *
 * \version $Revision: 1.0 $
 * 
 * Contact: pau.novella@ific.uv.es
 *
 */


namespace gate{class HistoManager;}

class gate::HistoManager : public gate::HistoPlotter{
  
 public:

  //! default constructor
  HistoManager(std::string hname="histograms.root",
		 gate::VLEVEL vl = gate::NORMAL);

  //! constructor with parameter storage
  HistoManager(gate::ParamStore,gate::VLEVEL vl = gate::NORMAL);
  
  //! destructor
  virtual ~HistoManager();
 
  //! find histogram in storage
  //bool find(std::string name){return (hstore.find(name)!=hstore.end());};
  
  //! retrive histogram by name
  TH1* fetch(std::string name){ return hstore[name];};
  
  //! book 1D histogram
  void h1(std::string name,std::string title,size_t nbin,double fb,double lb);
  //! book 2D histogram
  void h2(std::string name,std::string title,size_t nxbin,
	  double fbx,double lbx,size_t nybin,size_t fby,size_t lby);
  
  //! fill histogram
  void fill(std::string name,double value);
  //! fill histogram
  void fill2d(std::string name,double value1,double value2);
  
  //! draw histogram
  void draw(std::string, Option_t* opt="");
 
  /*opertations*/
  
  //! divide 1D histograms
  void divide1D(std::string name1,std::string name2,std::string name3);
  //! divide 1D histograms
  void divide2D(std::string name1,std::string name2,std::string name3);

  //! save histograms
  void save();
  
  //! operator []
  TH1* operator[](std::string name);

  //! store histogram
  void store(std::string name, TH1* h){ hstore.store(name,h); }
  
  //! get historgram store
  //const map<std::string,TH1*>& getHistoStore(){return hstore;}
  const gate::tstore<TH1*>& getHistoStore(){return hstore;}
  
  //! retrieve names of histos 
  vector<std::string> names() const {return hstore.names();}
  
  //! retrieve histos
  vector<TH1*> histos() const {return hstore.items();}

  //! retrieve name of hitograms file
  std::string getHistoFileName() const {return _hfile;}
  
 private:
  
  //! output histogram file
  TFile* _ofile;
  
  //! name of histogram file
  std::string _hfile;
  
  //! histograms storage
  gate::tstore<TH1*> hstore;
  
  //! messenger
  gate::Messenger _m;
  
  //! directory for plots
  TDirectory* _hdir;

 private:

  //! read parameters file
  void readHistoParam(gate::ParamStore st);
    
  ClassDef(HistoManager,0)
};

ClassImp(gate::tstore<TH1*>)

#endif

