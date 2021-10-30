#include <iostream>
#include <math.h>
//Standard Form Variables
double  aQrm{ 0 }; //The a term
double  bQrm{ 0 }; //The b term
double  cQrm{ 0 }; //The c term
double  negB{ 0 }; //The -b +/- sqrt() thing
double rt4ac{ 0 }; //In the square root (b^2-4*a*c)
//Answer Variables
double  ansP{ 0 }; //The + answer
double  ansN{ 0 }; //The - answer
//Vertex Form Variables
double  hVrm{ 0 }; //The h term
double  kVrm{ 0 }; //The k term
double vxFrm{ 0 }; // [a](x^2)+(xb)+(c)+[c]
//Universial Variabbles
int     mode{ 0 }; //The input mode

void standardForm() {                                             //Standard Form Math
    negB = bQrm * -1;                                             
    rt4ac = sqrt(pow(bQrm, 2) - (4 * (aQrm * cQrm)));
    ansP = (negB + rt4ac) / (2 * aQrm);
    ansN = (negB - rt4ac) / (2 * aQrm);
}

void vertexForm(){                                                //Vertex Form Math
    // a(x-h)^2+k
    bQrm = hVrm * 2;
    cQrm = pow(hVrm, 2) + kVrm;
    standardForm();
}

int main() {
    //Standard Form Variables
      

    while (1 == 1) {
        std::cout << "Please select the input mode:\n";
        std::cout << "[1] Standard Form\n";
        std::cout << "[2] Vertex Form\n";
        std::cout << "[3] Clear the console\n";
        std::cin  >> mode;

        switch (mode) {
            case 1:
                (mode == 1);
                std::cout << "Please input the [a] term\n";
                std::cin  >> aQrm;
                std::cout << "Please input the [b] term\n";
                std::cin  >> bQrm;
                std::cout << "Please input the [c] term\n";
                std::cin  >> cQrm;
                standardForm();
                std::cout << ansP << " and " << ansN << "\n";
                break;

            case 2:
                (mode == 2);
                std::cout << "Please input the [a] term\n";
                std::cin  >> aQrm;
                std::cout << "Please input the [h] term\n";
                std::cin  >> hVrm;
                std::cout << "Please input the [k] term\n";
                std::cin  >> kVrm;
                vertexForm();
                std::cout << ansP << " and " << ansN << "\n";
                break;

            case 3:
                (mode == 3);
                system("cls");
                break;

            default:
                std::cout << "There was an error, please try again.\n";
                break;
        }
  
        system("pause");
        
    }
    
}