#include <iostream>
#include <string>

using namespace std;

int main()
{
    //variables
    int category;
    double clothes[3];
    double beauty[3];
    double grocery[3];
    double garden[3];
    double school[3];
    double tobacco[3];
    double clothesTax = 0.06;
    double beautyTax = 0.07;
    double groceryTax = 0.03;
    double gardenTax = 0.06;
    double schoolTax = 0.03;
    double tobaccoTax = 0.10;
    double clothesSum;
    double beautySum;
    double grocerySum;
    double gardenSum;
    double schoolSum;
    double tobaccoSum;
    double clothesSalesTax;
    double beautySalesTax;
    double grocerySalesTax;
    double gardenSalesTax;
    double schoolSalesTax;
    double tobaccoSalesTax;
    double clothesTotal;
    double beautyTotal;
    double groceryTotal;
    double gardenTotal;
    double schoolTotal;
    double tobaccoTotal;


    //categories
    cout << " 1 - Clothes  " << endl;
    cout << " 2 - Beauty products  " << endl;
    cout << " 3 - Groceries  " << endl;
    cout << " 4 - Gardening  " << endl;
    cout << " 5 - School supplies  " << endl;
    cout << " 6 - Tobacco products  " << endl;


    //user picks a category
    cout << "Enter a number from a category above: ";
    cin >> category;


    //array if statement
    if (category == 1){
    cout << "Please enter the values of 3 items from the category selected above: ";
    for (int a = 0; a < 3; a++) {
        cin >> clothes[a];
    }
    } else if (category == 2){
    cout << "Please enter the values of 3 items from the category selected above: ";
    for (int b = 0; b < 3; b++) {
        cin >> beauty[b];
    }
    }else if (category == 3){
    cout << "Please enter the values of 3 items from the category selected above: ";
    for (int c = 0; c < 3; c++) {
        cin >> grocery[c];
    }
    }else if (category == 4){
    cout << "Please enter the values of 3 items from the category selected above: ";
    for (int d = 0; d < 3; d++) {
        cin >> garden[d];
    }
    } else if (category == 5){
    cout << "Please enter the values of 3 items from the category selected above: ";
    for (int e = 0; e < 3; e++) {
        cin >> school[e];
    }
    }else if (category == 6){
    cout << "Please enter the values of 3 items from the category selected above: ";
    for (int f = 0; f < 3; f++) {
        cin >> tobacco[f];
    }
    }else cout << "Please try again" << endl;


    //total of items per category
    clothesSum = clothes[0] + clothes[1] + clothes[2];
    beautySum = beauty[0] + beauty[1] + beauty[2];
    grocerySum = grocery[0] + grocery[1] + grocery[2];
    gardenSum = garden[0] + garden[1] + garden[2];
    schoolSum = school[0] + school[1] + school[2];
    tobaccoSum = tobacco[0] + tobacco[1] + tobacco[2];

    //total of item sum multiplied by tax
    clothesSalesTax = clothesSum * clothesTax;
    beautySalesTax = beautySum * beautyTax;
    grocerySalesTax = grocerySum * groceryTax;
    gardenSalesTax = gardenSum * gardenTax;
    schoolSalesTax = schoolSum * schoolTax;
    tobaccoSalesTax = tobaccoSum * tobaccoTax;


    //switch statement
    switch (category) {
case 1:
    clothesTotal = clothesSum + clothesSalesTax;
    cout << "The total of all items entered including sales tax is $" << clothesTotal << endl;
    break;
case 2:
    beautyTotal = beautySum + beautySalesTax;
    cout << "The total of all items entered including sales tax is $" << beautyTotal << endl;
    break;
case 3:
    groceryTotal = grocerySum + grocerySalesTax;
    cout << "The total of all items entered including sales tax is $" << groceryTotal << endl;
    break;
case 4:
    gardenTotal = gardenSum + gardenSalesTax;
    cout << "The total of all items entered including sales tax is $" << gardenTotal << endl;
    break;
case 5:
    schoolTotal = schoolSum + schoolSalesTax;
    cout << "The total of all items entered including sales tax is $" << schoolTotal << endl;
    break;
case 6:
    tobaccoTotal = tobaccoSum + tobaccoSalesTax;
    cout << "The total of all items entered including sales tax is $" << tobaccoTotal << endl;
    break;

    default: cout << "Please try again" << endl;
    }
    return 0;
}

