#include<Event.h>

ClassImp(gate::Event);

gate::Event::Event(std::string lab){ _label = lab; histo=0;}

gate::Event::~Event(){}

std::string gate::Event::getLabel() const {return _label;}
