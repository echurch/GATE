#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ namespace gate;

#pragma link C++ class std::vector<gate::vstring>+;
#pragma link C++ class std::vector<gate::vdouble>+;
#pragma link C++ class std::vector<gate::vint>+;
#pragma link C++ class std::vector<gate::vtobject>+;

#pragma link C++ class gate::tstore<int>+;
#pragma link C++ class gate::tstore<double>+;
#pragma link C++ class gate::tstore<std::string>+;
#pragma link C++ class gate::tstore<TObject>+;
#pragma link C++ class gate::tstore<std::vector<int> >+;
#pragma link C++ class gate::tstore<std::vector<double> >+;
#pragma link C++ class gate::tstore<std::vector<std::string> >+;
#pragma link C++ class gate::tstore<std::vector<TObject> >+;

#pragma link C++ class gate::ParamStore+;
#pragma link C++ class gate::BObject+;
#pragma link C++ class gate::Run+;
#pragma link C++ class gate::Geometry+;
#pragma link C++ class gate::Properties+;
#pragma link C++ class gate::Sensor+;
#pragma link C++ class gate::Event+;
#pragma link C++ class gate::Pulse+;
#pragma link C++ class gate::Waveform+;
#pragma link C++ class gate::BHit+;
#pragma link C++ class gate::Hit+;
#pragma link C++ class gate::Cluster+;
#pragma link C++ class gate::MCHit+;
#pragma link C++ class gate::HitMap+;
#pragma link C++ class gate::Signal+;
#pragma link C++ class gate::Point3D+;
#pragma link C++ class gate::Vector4D+;
#pragma link C++ class gate::BTrack+;
#pragma link C++ class gate::MCTrack+;
#pragma link C++ class gate::Track+;
#pragma link C++ class gate::BParticle+;
#pragma link C++ class gate::MCParticle+;
#pragma link C++ class gate::Particle+;

#pragma link C++ class std::vector<gate::Run*>;
#pragma link C++ class std::vector<gate::BHit*>;
#pragma link C++ class std::vector<gate::MCHit*>;
#pragma link C++ class std::vector<gate::Hit*>;
#pragma link C++ class std::vector<gate::Cluster*>;
#pragma link C++ class std::vector<gate::Pulse*>;
#pragma link C++ class std::vector<gate::HitMap*>;
#pragma link C++ class std::vector<gate::Signal*>;
#pragma link C++ class std::vector<gate::BTrack*>;
#pragma link C++ class std::vector<gate::MCTrack*>;
#pragma link C++ class std::vector<gate::Track*>;
#pragma link C++ class std::vector<gate::BParticle*>;
#pragma link C++ class std::vector<gate::MCParticle*>;
#pragma link C++ class std::vector<gate::Particle*>;
#pragma link C++ class std::vector<gate::Sensor*>;

#pragma link C++ class std::multimap<gate::SENSORTYPE,gate::Hit*>;
#pragma link C++ class std::multimap<gate::SENSORTYPE,gate::HitMap*>;
#pragma link C++ class std::multimap<gate::SENSORTYPE,gate::Cluster*>;
#pragma link C++ class std::multimap<gate::SENSORTYPE,gate::Track*>;

#pragma link C++ class std::map<int,gate::Sensor*>;

//#pragma link C++ class std::vector< pair<double,double> >;//waveforms
#pragma link C++ class std::vector<pair<unsigned short,unsigned short> >;
#pragma link C++ class std::pair<unsigned short,unsigned short>;

//! links for hitmap
#pragma link C++ class std::vector<std::map<int,float> >;
#pragma link C++ class std::map<int,float>;

//! links for pairs are requested by art (warnings) !!!!???!!??!!!!!--
#pragma link C++ class std::pair<gate::BHit*,gate::BHit*>;
#pragma link C++ class std::pair<gate::SENSORTYPE,gate::Hit*>;
#pragma link C++ class std::pair<gate::SENSORTYPE,gate::HitMap*>;
#pragma link C++ class std::pair<gate::SENSORTYPE,gate::Cluster*>;
#pragma link C++ class std::pair<gate::SENSORTYPE,gate::Track*>;
#pragma link C++ class std::pair<std::string,std::string>;
#pragma link C++ class std::pair<std::string, vector<std::string> >;
#pragma link C++ class std::pair<std::string, vector<double> >;//std::vector!!!
#pragma link C++ class std::pair<std::string, vector<int> >;//std::vector!!!
#pragma link C++ class std::pair<int, gate::Sensor* >;
//------------------------------------------------------------------

#pragma link C++ function operator << (ostream& , const gate::Point3D&);
#pragma link C++ function operator << (ostream& , const gate::Vector4D&);
#pragma link C++ function operator << (ostream& , const gate::Run&);
#pragma link C++ function operator << (ostream& , const gate::Geometry&);
#pragma link C++ function operator << (ostream& , const gate::Properties&);
#pragma link C++ function operator << (ostream& , const gate::Sensor&);
#pragma link C++ function operator << (ostream& , const gate::Event&);
#pragma link C++ function operator << (ostream& , const gate::Hit&);
#pragma link C++ function operator << (ostream& , const gate::Cluster&);
#pragma link C++ function operator << (ostream& , const gate::MCHit&);
#pragma link C++ function operator << (ostream& , const gate::BHit&);
#pragma link C++ function operator << (ostream& , const gate::BObject&);
#pragma link C++ function operator << (ostream& , const gate::HitMap&);
#pragma link C++ function operator << (ostream& , const gate::Signal&);
#pragma link C++ function operator << (ostream& , const gate::Waveform&);
#pragma link C++ function operator << (ostream& , const gate::Pulse&);
#pragma link C++ function operator << (ostream& , const gate::BTrack&);
#pragma link C++ function operator << (ostream& , const gate::MCTrack&);
#pragma link C++ function operator << (ostream& , const gate::Track&);
#pragma link C++ function operator << (ostream& , const gate::BParticle&);
#pragma link C++ function operator << (ostream& , const gate::MCParticle&);
#pragma link C++ function operator << (ostream& , const gate::Particle&);

#endif
