#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[]){
    float sum = 0;
    if(argc <= 1){
        cout << "Please input numbers to find average.";
    }else{
        cout << "---------------------------------\n";
        for(int i = 1; i < argc; i++){
            float s = atof(argv[i]);
            sum += s;
        }
        cout << "Average of " << argc - 1 << " numbers = " << sum/(argc-1);
        cout << "\n---------------------------------\n";
    }
}
