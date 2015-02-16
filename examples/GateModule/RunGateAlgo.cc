#include <Centella.h>
#include <GateAlgo.h>

int main(){
  
  GateAlgo* algo1 = new GateAlgo(gate::NORMAL,"algo1");
 
  gate::Centella::instance(gate::NORMAL);
  gate::Centella::instance()->addInputFile("input_dst.root");
  gate::Centella::instance()->addOutputFile("output_dst.root");
  gate::Centella::instance()->setNevents(10);
  gate::Centella::instance()->saveEvents(true);
  gate::Centella::instance()->saveHistos(true);
  gate::Centella::instance()->addAlgo("my_algo1",algo1);
   
  gate::Centella::instance()->run();
  
  gate::Centella::instance()->destroy();
  delete algo1; delete algo2;

  return 0;

}
