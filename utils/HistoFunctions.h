#ifndef _HFUNC__
#define _HFUNC__

#include<TH1.h>
#include<TH1F.h>
#include<TH2F.h>
#include<TH3F.h>
#include<cmath>


//! divide 3D histos
TH3F* NDivide3D( TH3F *num, TH3F *den );

//! divide 2D histos
TH2F* NDivide2D( TH2F *num, TH2F *den );

//! divide 1D histos
TH1F* NDivide1D( TH1F *num, TH1F *den );

TH2F* NAverage3D_to_2D( TH3F *object, std::string axis1, std::string axis2);

TH1F* NAverage2D_to_1D(TH2F* object, std::string axis1);

TH1F* NIntegrate2D_to_1D( TH2F* object, std::string axis1, double mult, std::string option);

double NIntegrate2D( TH2F* object, double mult, std::string option );

TH2F* NConvert_to_pth( TH3F* object );

#endif
