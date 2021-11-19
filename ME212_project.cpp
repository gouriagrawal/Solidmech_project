#include <iostream>
using namespace std;
#define PI 3.14
#define E 29000000
int main()
{
//declare the required variables
double diameter, area,loadP, rodLength;
double normalStress, strainEnergy;
double totalStrainEnergy, strainEnergyDensity;
//prompt and read the diameter of the rod
cout << "Enter diameter of the rod : ";
cin >> diameter;
//prompt and read load applied at the free end
cout << "Enter load applied at the free end (P) : ";
cin >> loadP;
//prompt and read the length of the rod
cout << "Enter the length of the rod : ";
cin >> rodLength;
//calculate area
area = PI*(diameter / 2.0)*(diameter / 2.0);
cout<<endl;
//calculate normal stress
normalStress = loadP / area;
//display normal stress
cout<< "Normal Stress : "<< normalStress<<endl;
//calculate strain energy
strainEnergy = (loadP*loadP*rodLength / (2 * area*E));
//display strain energy
cout << "Strain Energy : " << strainEnergy << endl;
//calculate strain energy density
strainEnergyDensity =
(normalStress*normalStress / (2 * E));
//display strain energy density
cout << "Strain Energy density : "
<< strainEnergyDensity << endl;
//calculate total strain energy
totalStrainEnergy = strainEnergy +
strainEnergyDensity;
//display total strain energy
cout << "Total Strain Energy : "
<< totalStrainEnergy << endl;
//calculate and display deflection of the rod
cout << "Deflection : "
<< (2 * totalStrainEnergy) / loadP << endl;
//system("PAUSE");
return 0;
}