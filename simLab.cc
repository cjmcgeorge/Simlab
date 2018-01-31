#include "TLab.h"
#include "TSim.h"
#include "TTheory.h"
#include "./includes.h"

Int_t main(int argc, char **argv){ 
  
  cout << endl;
  cout << endl;
  cout << endl;
  cout << " -----------------------------------" << endl;
  cout << " ---------  QET Analysis -----------" << endl; 
  cout << " -----------------------------------" << endl;
  cout << " ---------- Version 6.0 ------------" << endl; 
  cout << " -----------------------------------" << endl;
  cout << " ---- Lab and/or Simulated data ----" << endl;
  cout << " --------  and/or Theory  ----------" << endl; 
  cout << " -----------------------------------" << endl;
  cout << " ------ Ten Crystal Analysis -------" << endl;
  cout << " -----------------------------------" << endl;
  
  // check that the program is exectued with the correct
  // arguments and give examples if it is not
  if( ( argc < 2 ) || ( argc > 6 ) ||
      ( strcmp(argv[1],"0")==0 && argc != 3) ||
      ( strcmp(argv[1],"1")==0 && argc != 3) ||
      ( strcmp(argv[1],"2")==0 && argc != 3) ||
      ( strcmp(argv[1],"3")==0 && argc != 4) ||
      ( strcmp(argv[1],"4")==0 && argc != 4) ||
      ( strcmp(argv[1],"5")==0 && argc != 3) ||
      ( strcmp(argv[1],"6")==0 && argc != 2) ||
      ( strcmp(argv[1],"8")==0 && argc != 5) ||
      ( strcmp(argv[1],"9")==0 && argc != 3) 
      ) {
    
    cout << endl;
    cout << " ------------------------------------- " << endl;
    cout << " First argument: Option                " << endl; 
    cout << " Options:                              " << endl; 
    cout << " 1 - lab data analysis                 " << endl; 
    cout << " 2 - sim data analysis                 " << endl; 
    cout << " 3 - lab and sim data analysis         " << endl;
    cout << " 4 - multiple sim data analysis        " << endl;
    cout << " 5 - sim data scattering analysis      " << endl;
    cout << " 6 - plot theory curve only            " << endl; 
    cout << " 0 - lab data analysis (overwrite)     " << endl; 
    cout << " 8 - lab data - make raw trees only..  " << endl;
    cout << "    ..and specify file number limits   " << endl; 
    cout << " 9 - lab data - make raw trees only    " << endl; 
    cout <<                                              endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Option 1 - one further argument       " << endl;
    cout << "        raw lab run number             " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Examples:                             " << endl; 
    cout << " ./simLab 1 026                        " << endl; 
    cout << " ------------------------------------- " << endl;
    cout <<                                              endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Option 2 - one further argument       " << endl; 
    cout << " simulated data file number            " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Example:                              " << endl; 
    cout << " ./simLab 2 2                          " << endl;
    cout << " ------------------------------------- " << endl;
    cout <<                                              endl;
    cout << " ------------------------------------- " << endl;
    cout << " Option 3 - two further arguments      " << endl; 
    cout << "        run lab run number             " << endl;
    cout << "    simulated data file number         " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Example:                              " << endl; 
    cout << " ./simLab 3 026 4                      " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Option 4 - two further arguments      " << endl;
    cout << " simulated data file number (entangled)" << endl;
    cout << " simulated data file number (polarised)" << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Examples:                             " << endl; 
    cout << " ./simLab 4 2 3;                       " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Option 0 - one further argument       " << endl;
    cout << "        raw lab run number             " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Examples:                             " << endl; 
    cout << " ./simLab 0 026;                       " << endl; 
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Option 8 - three further argument     " << endl;
    cout << "        raw lab run number             " << endl;
    cout << "        1st lab file number            " << endl;
    cout << "        last lab file number           " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Examples:                             " << endl; 
    cout << " ./simLab 8 034 5 16;                  " << endl; 
    cout << " ------------------------------------- " << endl;
    cout << " Option 9 - one further argument       " << endl;
    cout << "        raw lab run number             " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " ------------------------------------- " << endl;
    cout << " Examples:                             " << endl; 
    cout << " ./simLab 9 026;                       " << endl; 
    cout << " ------------------------------------- " << endl;
    cout <<                                              endl;
    cout <<                                              endl;
    cout << endl;
    
   return 1;
  }

  //////////////////////////////////////////////////////////////////
  //-----------------------------------------------------------------
  //-----------------------------------------------------------------
  //-----------------------------------------------------------------
  //-----                    THEORY CURVE                       -----

  if( strcmp(argv[1],"6")==0 ){
  
    cout << endl;
    cout << "       -------------------------" << endl; 
    cout << "       | theory curve plotting |" << endl; 
    cout << "       -------------------------" << endl; 
    cout << endl;
  
    TTheory * theory = new TTheory();
    
    Int_t   nBins = 6;
    Float_t semiSpan = 10;
    Char_t  xVariable = 'e';
    
    theory->GraphFiniteAsymmetry(nBins,
				 semiSpan,
				 xVariable);
    
    
  }
  
  //////////////////////////////////////////////////////////////////
  //-----------------------------------------------------------------
  //-----------------------------------------------------------------
  //-----------------------------------------------------------------
  //-----                 LAB DATA ANALYSIS                     -----
  
  
  if( strcmp(argv[1],"1")==0 || 
      strcmp(argv[1],"0")==0 ||
      strcmp(argv[1],"8")==0 ||
      strcmp(argv[1],"9")==0 ){
    
    cout << endl;
    cout << "       -----------------------" << endl; 
    cout << "       | laboratory analysis |" << endl; 
    cout << "       -----------------------" << endl; 
    cout << endl;

    cout << endl;
    cout << "    Raw Data " << endl; 
    
    TLab* data;

    if(strcmp(argv[1],"8")!=0){
      data = new TLab(argv[2]);
    }
    else{
      data = new TLab(argv[2],argv[3],argv[4]);
    }
    
    Char_t overwrite = 'n';
    Char_t option    = 'b';
    
    cout << endl;
    cout << " Checking if ROOT file exists " << endl; 
    
    if(!(data->RawROOTFileExists())){
      cout << endl;
      cout << " ...                                   " << endl;
      cout << " ROOT file of raw data does not exist. " << endl;
      cout << " I will therefore create one ...       " << endl;
      data->MakeRawDataTreeFile();
    }
    else{
      cout << endl;
      cout << " ROOT file of raw data does exist   " << endl;
      
      if(strcmp(argv[1],"0")==0){
	cout << " Would you like me to overwrite it? " << endl;
	cout << " [answer (y/n)]                     " << endl;
	cout << endl;
	cout << " ";
	cin  >> overwrite;
	
	if( overwrite=='y' || overwrite=='Y'){
	  cout << endl;
	  cout << " Okay, I will overwrite the file. " << endl;
	  data->MakeRawDataTreeFile();
	}
	
      } // end of: if(strcmp(argv[1],"0")=...
    } // end of: else{....
    
    
    if( strcmp(argv[1],"1")==0 || 
	strcmp(argv[1],"0")==0 ){
      
      // //////////////////////////////////////////
      // // Create calibrated ROOT file
      
      cout << endl;
      cout << "    Calibrate data " << endl; 
	
      cout << endl;
      cout << " Checking for calibrated ROOT file  " << endl; 
      if(!(data->CalibratedROOTFileExists()))
	data->MakeCalibratedDataTreeFile();
      else{
	cout << endl;
	cout << " ROOT file of calibrated data does exist." << endl;
	  
	if(strcmp(argv[1],"0")==0){
	  cout << " Would you like me to overwrite it?      " << endl;
	  cout << " [answer (y/n)]                          " << endl;
	  cout << endl;
	  cout << " ";
	  cin  >> overwrite;
	    
	  if( overwrite=='y' || overwrite=='Y'){
	    cout << endl;
	    cout << " Okay, I will overwrite the file  " << endl;
	    data->MakeCalibratedDataTreeFile();
	  }
	}// end of: if(strcmp(argv[1],"0")...
      }// end of: else{...
	
      cout << endl;
      cout << " Graphing Asymmetry " << endl;
      cout << endl;
      cout << " Enter plot type:   " << endl;
      cout << " b - Theory and Lab (default) " << endl;
      cout << " l - Lab only " << endl;
      cout << " t - Theory only " << endl;
      cout << " ";
      cin  >> option; 
	
      if(option!='l' && option!='L' &&
	 option!='t' && option!='T' ){
	cout << endl;
	cout << " plotting lab results and theory curve " << endl;
	cout << " ..... " << endl;
      }
      else if(option=='l' || option == 'L'){
	cout << endl;
	cout << " plotting lab results only " << endl;
	cout << " ..... " << endl;
      }
      else if(option=='t' || option == 'T'){
	cout << endl;
	cout << " plotting theory results only " << endl;
	cout << " ..... " << endl;
      }
	
      if(option=='a' || option=='A' ||
	 option=='s' || option=='S' ||
	 option=='c' || option=='C' ){
	  
	cout << endl;
	cout << " invalid choice, setting to default " << endl;
	  
	option = 'b';
      }
	
      data->GraphAsymmetry(option);
	
    }// end of: if( strcmp(argv[1],"1")==0 || ......
      
    delete data;
      
  }// end of: if( strcmp(argv[1],"1")==0 || ......
  
  /////////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////////
  //-----------------------------------------------------------------
  //-----------------------------------------------------------------
  //-----------------------------------------------------------------
  //-----               SIMULATION DATA ANALYSIS                -----
  //
  else if( strcmp(argv[1],"2")==0 ) {
    cout << endl;
    cout << "     ---------------------------" << endl; 
    cout << "     | simulation lab analysis |" << endl; 
    cout << "     ---------------------------" << endl; 
    cout << endl;

    cout << endl;
    cout << " Analysing : " << argv[2] << endl;
    
    TSim * simData = new TSim(argv[2]);
    
    Char_t sort = 'n';
    cout << endl;
    cout << " Sort/Re-sort ROOT file ? " << endl;
    cout << " n (default)/ y " << endl;
    cout << " ";
    cin  >> sort;
    
    if (sort == 'y' || sort == 'Y' ){
      
      cout << endl;
      cout << " Sorting data " << endl;
	
      simData->SortEvents(argv[2]);
    }
    
    cout << endl;
    cout << " Calculating & Plotting Asymmetry " << endl;
    
    simData->CalculateAsymmetryLab(argv[2]);
    simData->GraphAsymmetryLab(argv[2]);
        
    delete simData;
  
  }/////////////////////////////////////////////////////////////////
  else if( strcmp(argv[1],"3")==0 ) {
    
    cout << endl;
    cout << "     --------------------" << endl;
    cout << "    | lab and simulation |" << endl;
    cout << "     --------------------" << endl;

    cout << "Analysing: " << argv[2] << " and " << argv[3] << endl;
    cout << " Calculating & Plotting Asymmetry " << endl;
    
    TLab *data;

    data = new TLab(argv[2],argv[3]);

    Char_t overwrite = 'n';
    Char_t option    = 'b';
    
    cout << endl;
    cout << " Checking if ROOT file exists " << endl; 
    
    if(!(data->RawROOTFileExists())){
      cout << endl;
      cout << " ...                                   " << endl;
      cout << " ROOT file of raw data does not exist. " << endl;
      cout << " I will therefore create one ...       " << endl;
      data->MakeRawDataTreeFile();
    }
    else{
      cout << endl;
      cout << " ROOT file of raw data does exist   " << endl;
      
      if(strcmp(argv[1],"0")==0){
	cout << " Would you like me to overwrite it? " << endl;
	cout << " [answer (y/n)]                     " << endl;
	cout << endl;
	cout << " ";
	cin  >> overwrite;
	
	if( overwrite=='y' || overwrite=='Y'){
	  cout << endl;
	  cout << " Okay, I will overwrite the file. " << endl;
	  data->MakeRawDataTreeFile();
	}
	
      } // end of: if(strcmp(argv[1],"0")=...
    } // end of: else{....

    cout << endl;
    cout << " Graphing Asymmetry " << endl;
    cout << endl;
    cout << " Enter plot type:   " << endl;
    cout << " a - Lab, Theory and Simulation (default)" << endl;
    cout << " ";
    cin  >> option;

    if(option!='a' && option!='A' ){
	  
      cout << endl;
      cout << " invalid choice, setting to default " << endl;
	  
      option = 'a';
    }
	
    data->GraphAsymmetry(option);
    
    delete data;
  } 
  else if( strcmp(argv[1],"4")==0 ) {
    
    cout << endl;
    cout << "       ----------------------" << endl; 
    cout << "       | simulation analysis |" << endl;
    cout << "       | for two simulations |" << endl;
    cout << "       ----------------------" << endl; 
    cout << endl;

    cout << endl;
    cout << " Analysing : " << argv[2] << " and "<< argv[3] << endl;
    
    TSim * simData = new TSim(argv[2], argv[3]);
    
    
    cout << endl;
    cout << " Calculating & Plotting Asymmetry " << endl;
    
    simData->GraphAsymmetrySim(argv[2], argv[3]);
        
    delete simData;
    
  }
  else if( strcmp(argv[1],"5")==0 ) {
    
    cout << endl;
    cout << "       ----------------------" << endl; 
    cout << "       | simulation analysis |" << endl;
    cout << "       |  scattering study   |" << endl;
    cout << "       ----------------------" << endl; 
    cout << endl;

    cout << endl;
    cout << " Analysing : " << argv[2] << endl;
    
    TSim * simData = new TSim(argv[2]);
    
    cout << endl;
    cout << " Calculating & Plotting Asymmetry " << endl;
    
    Int_t   nThetaBins = 5;
    Float_t thetaSMin  = 10.;
    Float_t thetaSMax  = 110.;
    
    cout << endl;
    cout << "  "
	 << thetaSMin  
	 << " < thetaS < " 
	 << thetaSMax 
	 << endl;
    cout << "  "
	 << nThetaBins 
	 << " theta_{S} bins " 
	 << endl;
    
    
    simData->GraphAsymmetrySim(argv[2], argv[2],
			       nThetaBins,
			       thetaSMin,
			       thetaSMax);
    
    delete simData;
    
   }
  
  cout << endl;
  cout << " -----------------------------------" << endl;
  cout << " --------------- End  --------------" << endl; 
  cout << " -----------------------------------" << endl;
  
  return 0;  
}
