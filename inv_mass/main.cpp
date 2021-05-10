#include "TFile.h"
#include "TTree.h"

int main(int argc, char const *argv[]) {

  TFile *inputFile_data = TFile::Open("im_data.root");
  TTree *tree_data = inputFile_data->Get<TTree>("Data");

  TFile *inputFile_mc = TFile::Open("im_mc.root");
  TTree *tree_mc = inputFile_mc->Get<TTree>("Data");

  float muon1[4], muon2[4];
  tree_data->SetBranchAddress("muon1", &muon1);
  tree_data->SetBranchAddress("muon2", &muon2);

  float meas_muon1[4], meas_muon2[4];
  float gen_muon1[4], gen_muon2[4];
  tree_mc->SetBranchAddress("meas_muon1", &meas_muon1);
  tree_mc->SetBranchAddress("meas_muon2", &meas_muon2);
  tree_mc->SetBranchAddress("gen_muon1", &gen_muon1);
  tree_mc->SetBranchAddress("gen_muon2", &gen_muon2);

  // have fun...

  return 0;
}
