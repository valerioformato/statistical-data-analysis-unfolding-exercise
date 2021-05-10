# Statistical data analysis - Unfolding exercise

This is an unfolding exercise for the "Statistical Data Analysis" course.

You get two datasets

### Cosmic Ray spectrum
A sample of cosmic-ray events
- For each event you have a measurement of its rigidity (= momentum/charge)
- You have a MC simulation sample with 5x more events where for each event you have both "generated" and "measured" rigidity
- You should unfold the rigidity distribution and reconstruct the flux (a histogram with the geomagnetic transmission function is also provided)
- Fit the spectrum with the function in the slides and measure both the spectral index and its change

You also have a [small code sample](cr_flux/main.cpp) that opens the root files and extract the `TTree` objects setting up the branches, and provides a suggestion for the histogram binning (**beware of non-uniform bins and their effect in some of the unfolding procedures!!!**).

### Invariant mass distribution
A sample of muon pairs from some beam collisions
- For each event you have the 4-momentum of each muon
- You have a MC simulation sample with 10x where for each event you have both "generated" and "measured" 4-momenta
- You should unfold the invariant mass distribution
- Fit the peak in the mass distribution with a gaussian function (beware of the background) and measure its position, its width, and the total number of events associated to it.

You also have a [small code sample](inv_mass/main.cpp) that opens the root files and extract the `TTree` objects setting up the branches

## Tips and rules
For each dataset choose **TWO METHODS** from: 
- Iterative correction factor 
- Regularized SVD
- Bayesian (bonus points if improved)
- Forward folding 

and compare the results you get with each method.
