#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ namespace gate;

#pragma link C++ class std::vector<gate::vstring>+;
#pragma link C++ class std::vector<gate::vdouble>+;
#pragma link C++ class std::vector<gate::vint>+;

#pragma link C++ class gate::tstore<int>+;
#pragma link C++ class gate::tstore<double>+;
#pragma link C++ class gate::tstore<std::string>+;
#pragma link C++ class gate::tstore<TObject*>+;
#pragma link C++ class gate::tstore<std::vector<int> >+;
#pragma link C++ class gate::tstore<std::vector<double> >+;
#pragma link C++ class gate::tstore<std::vector<std::string> >+;
#pragma link C++ class gate::tstore<std::vector<TObject*> >+;

#pragma link C++ class gate::ParamStore+;
#pragma link C++ class gate::BObject+;
#pragma link C++ class gate::Run+;
#pragma link C++ class gate::Event+;
#pragma link C++ class gate::Pulse+;
#pragma link C++ class gate::Waveform+;
#pragma link C++ class gate::BHit+;
#pragma link C++ class gate::Hit+;
#pragma link C++ class gate::THit+;
#pragma link C++ class gate::HitMap+;
#pragma link C++ class gate::Point3D+;
#pragma link C++ class gate::Vector4D+;
#pragma link C++ class gate::BTrack+;
#pragma link C++ class gate::TTrack+;
#pragma link C++ class gate::Track+;
#pragma link C++ class gate::Particle+;

#pragma link C++ class std::vector<gate::Run*>;
#pragma link C++ class std::vector<gate::BHit*>;
#pragma link C++ class std::vector<gate::THit*>;
#pragma link C++ class std::vector<gate::Hit*>;
#pragma link C++ class std::vector<gate::Pulse*>;
#pragma link C++ class std::vector<gate::HitMap*>;
#pragma link C++ class std::vector<gate::BTrack*>;
#pragma link C++ class std::vector<gate::TTrack*>;
#pragma link C++ class std::vector<gate::Track*>;
#pragma link C++ class std::vector<gate::Particle*>;

#pragma link C++ class std::pair<gate::SENSORTYPE,gate::Hit*>;
#pragma link C++ class std::pair<gate::SENSORTYPE,gate::HitMap*>;
#pragma link C++ class std::vector<std::map<int,double> >;
#pragma link C++ class std::map<int,double>;
#pragma link C++ class std::vector<std::pair<double,double> >;
#pragma link C++ class std::vector<std::pair<int,double> >;

#pragma link C++ class gate::Messenger+;

// why the hell does CINT need this dictionaries for ParamStore?????????
//#pragma link C++ class std::pair<std::string,std::string>;
//#pragma link C++ class std::pair<std::string,TObject*>;
//#pragma link C++ class std::pair<std::string, vector<double> >;
//#pragma link C++ class std::pair<std::string, vector<int> >;
//#pragma link C++ class std::pair<std::string, vector<TObject*> >;

#pragma link C++ function operator << (ostream& , const gate::Point3D&);
#pragma link C++ function operator << (ostream& , const gate::Vector4D&);
#pragma link C++ function operator << (ostream& , const gate::Run&);
#pragma link C++ function operator << (ostream& , const gate::Event&);
#pragma link C++ function operator << (ostream& , const gate::Hit&);
#pragma link C++ function operator << (ostream& , const gate::THit&);
#pragma link C++ function operator << (ostream& , const gate::BHit&);
#pragma link C++ function operator << (ostream& , const gate::BObject&);
#pragma link C++ function operator << (ostream& , const gate::HitMap&);
#pragma link C++ function operator << (ostream& , const gate::Waveform&);
#pragma link C++ function operator << (ostream& , const gate::Pulse&);
#pragma link C++ function operator << (ostream& , const gate::BTrack&);
#pragma link C++ function operator << (ostream& , const gate::TTrack&);
#pragma link C++ function operator << (ostream& , const gate::Track&);
#pragma link C++ function operator << (ostream& , const gate::Particle&);

#endif
