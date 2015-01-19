#include<Event.h>

ClassImp(Event);

Event::Event(std::string lab){ _label = lab; histo=0;}

Event::~Event(){}

std::string Event::getLabel() const {return _label;}
