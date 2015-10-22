// Name: Sarah Villegas 
// October 21, 2015
// fileIO_A

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std; 


int main (){
    
    ifstream fin; 
    ofstream fout; 
    
    string word; 
    int wordAvg = 0;
    int totalWords= 0;
    int wordLength = 0; 
    
    
    fin.open("gba.txt");
    if (fin.fail()){
        cout << "opening the file failed ";
        exit(1);    
    }
    fout.open("result.txt")
    while(fin >> word ){
    
        for(int i = 0; i < word.length(); i ++){
            if((word[i] >= 'A' || word[i] >= 'a') && (word[i] <= 'Z' || word[i] <= 'z')){
             
                wordLength++; 
             
             }
            
        }
        totalWords++;
        
    }
    wordAvg = wordLength / totalWords;
    fout << wordAvg << endl; 
    
    return 0; 
}
