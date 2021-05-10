#include "TFile.h"
#include "TTree.h"

constexpr int nbins = 76;
double bins[nbins] = {
    0.8,  1.00, 1.16, 1.33, 1.51, 1.71, 1.92,  2.15, 2.40, 2.67, 2.97,
    3.29, 3.64, 4.02, 4.43, 4.88, 5.37, 5.90,  6.47, 7.09, 7.76, 8.48,
    9.26, 10.1, 11.0, 12.0, 13.0, 14.1, 15.3,  16.6, 18.0, 19.5, 21.1,
    22.8, 24.7, 26.7, 28.8, 31.1, 33.5, 36.1,  38.9, 41.9, 45.1, 48.5,
    52.2, 56.1, 60.3, 64.8, 69.7, 74.9, 80.5,  86.5, 93.0, 100., 108.,
    116., 125., 135., 147., 160., 175., 192.,  211., 233., 259., 291.,
    330., 379., 441., 525., 643., 822., 1130., 1800, 3000, 6000.};

int main(int argc, char const *argv[]) {

  TFile *inputFile_data = TFile::Open("cr_data.root");
  TTree *tree_data = inputFile_data->Get<TTree>("Data");

  TFile *inputFile_mc = TFile::Open("cr_mc.root");
  TTree *tree_mc = inputFile_mc->Get<TTree>("Data");

  float rigidity = 0;
  float gen_rigidity = 0, meas_rigidity = 0;

  tree_data->SetBranchAddress("rigidity", &rigidity);

  tree_mc->SetBranchAddress("meas_rigidity", &meas_rigidity);
  tree_mc->SetBranchAddress("gen_rigidity", &gen_rigidity);

  // have fun...

  return 0;
}
