#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ namespace gate;

#pragma link C++ class gate::ParamStore+;
#pragma link C++ class gate::Event+;


// why the hell does CINT need this dictionaries?????????
#pragma link C++ class std::pair<std::string,std::string>;
#pragma link C++ class std::pair<std::string,TObject*>;
//#pragma link C++ class std::pair<std::string, vector<double> >;
//#pragma link C++ class std::pair<std::string, vector<int> >;
//#pragma link C++ class std::pair<std::string, vector<TObject*> >;

#pragma link C++ function operator << (ostream& , const gate::Event&);

#endif
