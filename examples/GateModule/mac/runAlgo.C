{
  
  gSystem->Load("libCore.so");
  gSystem->Load("libRIO.so");
  gSystem->Load("libHist.so");
  gSystem->Load("../../../lib/libGATE.so");
  gSystem->Load("../../../lib/libGATEIO.so");
  gSystem->Load("../../../lib/libGATEUtils.so");

  AlgoTemplate* algo1 = new AlgoTemplate(gate::NORMAL,"algo1");
  AlgoTemplate* algo2 = new AlgoTemplate(gate::NORMAL,"algo2");

  gate::Centella::instance(gate::NORMAL);
  gate::Centella::instance()->addInputFile("input_dst.root");
  gate::Centella::instance()->addOutputFile("output_dst.root");
  gate::Centella::instance()->setNevents(10);
  gate::Centella::instance()->saveEvents(true);
  gate::Centella::instance()->saveHistos(true);
  gate::Centella::instance()->addAlgo("my_algo1",algo1);
  gate::Centella::instance()->addAlgo("my_algo2",algo2);
  
  gate::Centella::instance()->run();
  
  gate::Centella::instance()->destroy();
  delete algo1; delete algo2;

}
