#include <iostream> 
#include <math.h>
using namespace std;
int main(){
    int varBandera1=0, varBandera2=0;
    float matrizValores[3][4],varAux;
    do{
        do{
            cout << "Ingrese los valores para:" << "[" <<varBandera1+1 <<"]" <<  "["<< varBandera2+1 <<"]"<<" "; 
            cin >> varAux;
             matrizValores[varBandera1][varBandera2] = varAux;
            varBandera1++;
            cout<< "Valor ingresado"<<" "<<varAux<<"\n";
        }while(varBandera1 < 3);
        varBandera2++;
		varBandera1 = 0;
    }while(varBandera2 < 4);


	cout << "=============================================================================================================================== \n";
	do {
		std::cout << "[" << matrizValores[0][varBandera1] << "]" << "[" << matrizValores[1][varBandera1] << "]" << "[" << matrizValores[2][varBandera1] << "]" << "\n";
		varBandera1++;
	} while (varBandera1 < 3);

	cout << "=============================================================================================================================== \n";
	varBandera1 = 0;
	varBandera2 = 0;
	do{
		do{
			float varAux1 =  matrizValores[varBandera1][varBandera2];
			float varAux2 = matrizValores[2][2];
			if (varAux2 == 0)
			{
				cout << "No sepuede dividir entre 0 \n";
				varBandera1 = 3;
				varBandera2 = 4;
			}
			else
			{
				matrizValores[varBandera1][varBandera2] = varAux1 / varAux2;
			}
			varBandera1++;
		} while(varBandera1 < 3);
		varBandera2++;
		varBandera1 = 0;
	} while(varBandera2 < 4);
	
	do{
		std::cout << "[" << matrizValores[0][varBandera1] << "]"  << "[" << matrizValores[1][varBandera1] << "]"  << "[" << matrizValores[2][varBandera1] << "]"<< "\n";
		varBandera1++;
	} while(varBandera1 < 3);

	
	
    cout << "Fin";
	return 0;
}
	
