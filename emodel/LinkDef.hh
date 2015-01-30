#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ namespace gate;

#pragma link C++ class gate::ParamStore+;
#pragma link C++ class gate::Event+;
#pragma link C++ class gate::Pulse+;
#pragma link C++ class gate::Waveform+;
#pragma link C++ class gate::Hit+;
#pragma link C++ class gate::Point3D+;

#pragma link C++ class std::vector<gate::Hit*>;
#pragma link C++ class std::pair<gate::SENSORTYPE,gate::Hit*>;
#pragma link C++ class std::vector<std::pair<double,double> >;


// why the hell does CINT need this dictionaries for ParamStore?????????
//#pragma link C++ class std::pair<std::string,std::string>;
//#pragma link C++ class std::pair<std::string,TObject*>;
//#pragma link C++ class std::pair<std::string, vector<double> >;
//#pragma link C++ class std::pair<std::string, vector<int> >;
//#pragma link C++ class std::pair<std::string, vector<TObject*> >;

#pragma link C++ function operator << (ostream& , const gate::Event&);
#pragma link C++ function operator << (ostream& , const gate::Hit&);
#pragma link C++ function operator << (ostream& , const gate::Waveform&);
#pragma link C++ function operator << (ostream& , const gate::Pulse&);

#endif
