/**
 * @file HistoManager.h
 * 
 * \brief Histogram manager class
 *
 *    
 * \author Pau Novella $Author: pnovella $
 *
 * \version $Revision: 1.0 $
 *
 *
 * Contact: pau.novella@ific.uv.es
 *
 */

#ifndef HPLOT__
#define HPLOT__

#include<map>

#include<ParamStore.h>
#include<Messenger.h>

#include<TH1F.h>
#include<TH2F.h>
#include<TH3F.h>
#include<TFile.h>
#include<TText.h>
#include<TPaveText.h>
#include<TCanvas.h>

#include<TSystem.h>


/**
 * \class HistoPlotter
 *
 * \ingroup utils
 *
 * \brief Histogram plotter
 *
 * \author Pau Novella
 *
 * \version $Revision: 1.0 $
 * 
 * Contact: pau.novella@ific.uv.es.es
 *
 */

namespace gate{class HistoPlotter;}

class gate::HistoPlotter{
  
 public:

  //! default constructor
  HistoPlotter(std::string pname="histograms.ps",
	       gate::VLEVEL vl = gate::NORMAL);

  //! constructor with parameter storage
  HistoPlotter(gate::ParamStore,gate::VLEVEL vl = gate::NORMAL);
  
  //! destructor
  ~HistoPlotter();
 
 
  //! initialize canvas and attributes
  void initialize();

  //! finalize
  void finalize();

  //! Draw histogram
  void drawHisto(TH1* h,Option_t* opt="");

  //! Retrieve Canvas
  TCanvas* getCanvas(){return _canvas;}

 private:
  
  // canvas for plots
  TCanvas*  _canvas;

  //! name of histogram plots file
  std::string _pfile;
  
  //! Messenger
  gate::Messenger _m;

 private:

  //! read parameters file
  void readPlotParam(gate::ParamStore st);
    
  //! define plot style
  void setStyle();

  //! add first page to ps file
  void initPS();
  
  
  ClassDef(gate::HistoPlotter,1)
  
};



#endif

