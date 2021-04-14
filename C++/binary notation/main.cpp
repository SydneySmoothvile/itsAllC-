#include <iostream>
#include<random>
#include<string>
#include<iomanip>

using namespace std;

/**
* Generates thirty random floating numbers and print to the console their
* conversions to binary and their remarks.
*/

string convertDecToBin(double input, bool &comment) {
    comment = false;


    int integerPart = (int)trunc(input);
    double fractionPart = input - (int)input;
    string intOutput = "";
    string fracOutput = "";

    //controls
    bool foundWhole = false, foundFrac = false;
    int precisionCounter = 0;

    while (true) {
        //converting the whole part
        if (!foundWhole) {
            intOutput = to_string(integerPart % 2) + intOutput;
            integerPart /= 2;


            if (integerPart < 2) {
                intOutput = (integerPart > 0)?to_string(integerPart % 2) + intOutput: intOutput;
                foundWhole = true;
            }
        }

        //converting the fractional part
        if (!foundFrac) {
            double product = 2 * fractionPart;
            fracOutput += to_string((int)product);
            fractionPart = product - (int)product;
            if (fractionPart == 0) {
                comment = true;
                foundFrac = true;
            }
        }


        if ((precisionCounter >= 4 || foundFrac) && foundWhole) {
            string finalOutput = intOutput + ".";
            if (fracOutput == "") {
                finalOutput += "0";
            }
            else {
                finalOutput += fracOutput;
            }
            return finalOutput;
        }


        precisionCounter++;
    }
}


double roundOff(double num, int places) {
    return ((int)(num * pow(10, places) + 0.5)) * 1.0 / pow(10.0, places);
}


int main()
{
    random_device rd;
    default_random_engine eng(rd());
    uniform_real_distribution<double> distr(0, 100);


    //todo
    bool comment = false;


    double decimalNum;
    string remark;


    cout << "Enter the number of numbers to convert: " << endl;
    int numCount;
    cin >> numCount;


    //TABLE
    cout << setw(7) << "S/No. " << setw(27) << " Decimal Number " << setw(20) << " Binary Number " << setw(20) << " Remark" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;


    for (int i = 0; i < numCount; i++)
    {
        decimalNum = roundOff(distr(eng), 3);
        bool comment = false;
        string converted = convertDecToBin(decimalNum, comment);
        if (comment) {
            remark = "Exact";
        }
        else {
            remark = "Approximate";
        }


        cout << setw(5) << i << setw(20) << decimalNum << setw(28) << converted << setw(23) << remark << endl;
    }

}

