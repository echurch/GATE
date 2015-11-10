#ifndef TMAN__
#define TMAN__

/**
 * @file TreeManager.h
 *
 * @class TreeManager
 * 
 * @brief Tree manager class
 *
 * @details Creates, fills and store (in both persistent and transient maners) ROOT trees
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date November 2015
 *
 * @ingroup utils
 */

#include<GATE/ParamStore.h>
#include<GATE/Messenger.h>

#include<TTree.h>
#include<TFile.h>
#include<TDirectory.h>

namespace gate{class TreeManager;}

class gate::TreeManager{
  
 public:

  //! default constructor
  TreeManager(std::string tname="trees.root",
		 gate::VLEVEL vl = gate::NORMAL);

  //! constructor with parameter storage
  TreeManager(gate::ParamStore,gate::VLEVEL vl = gate::NORMAL);
  
  //! destructor
  virtual ~TreeManager();
   
  //! retrive histogram by name
  TTree* fetch(std::string name){ return _tstore[name];};
  
  //! book 1D histogram
  void create(std::string name,std::string title);
  
  //! fill histogram
  void fill(std::string name);
 
  //! save histograms
  void save();
  
  //! operator []
  TTree* operator[](std::string name);

  //! store tree
  void store(std::string name, TTree* t){ _tstore.store(name,t); }
  
  const gate::tstore<TTree*>& getTreeStore(){return _tstore;}
  
  //! retrieve names of histos 
  std::vector<std::string> names() const {return _tstore.names();}
  
  //! retrieve histos
  std::vector<TTree*> trees() const {return _tstore.items();}

  //! retrieve name of hitograms file
  std::string getTreeFileName() const {return _tfile;}
  
 private:
  
  //! output histogram file
  TFile* _ofile;
  
  //! name of histogram file
  std::string _tfile;
  
  //! histograms storage
  gate::tstore<TTree*> _tstore;
  
  //! messenger
  gate::Messenger _m;
  
  //! directory for plots
  TDirectory* _tdir;

 private:

  //! read parameters file
  void readTreeParam(gate::ParamStore st);
    
  ClassDef(TreeManager,0)
};

ClassImp(gate::tstore<TTree*>)

#endif

