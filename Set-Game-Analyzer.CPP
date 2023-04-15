#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Card {
protected:
    string color;
    string shape;
    int number;

public:
    //getters
    string getColor() { return color; }
    string getShape() { return shape; }
    int getNumber() { return number; }

    //setters
    void setColor(string color) { this->color = color; }
    void setShape(string shape) { this->shape = shape; }
    void setNumber(int number) { this->number = number; }
};

bool checkCards(Card& c1, Card& c2, Card& c3)
{
    bool colorCheck = false;
    bool shapeCheck = false;
    bool numberCheck = false;
    bool result = false;

    //for color
    if ((c1.getColor() != c2.getColor()) && (c2.getColor() != c3.getColor()) && (c1.getColor() != c3.getColor()))
    {
        colorCheck = true;
    }
    if ((c1.getColor() == c2.getColor()) && (c2.getColor() == c3.getColor()) && (c1.getColor() == c3.getColor()))
    {
        colorCheck = true;
    }

    //for shape
    if ((c1.getShape() != c2.getShape()) && (c2.getShape() != c3.getShape()) && (c1.getShape() != c3.getShape()))
    {
        shapeCheck = true;
    }
    if ((c1.getShape() == c2.getShape()) && (c2.getShape() == c3.getShape()) && (c1.getShape() == c3.getShape()))
    {
        shapeCheck = true;
    }

    //for numbers
    if ((c1.getNumber() != c2.getNumber()) && (c2.getNumber() != c3.getNumber()) && (c1.getNumber() != c3.getNumber()))
    {
        numberCheck = true;
    }
    if ((c1.getNumber() == c2.getNumber()) && (c2.getNumber() == c3.getNumber()) && (c1.getNumber() == c3.getNumber()))
    {
        numberCheck = true;
    }

    //returning result
    if ((numberCheck == true) && (shapeCheck == true) && (colorCheck == true))
    {
        result = true;
    }

    return result;
}

int main()
{
    string color;
    string shape;
    int number;
    Card c1, c2, c3; //three object cards

    //taking input from user for card

    //for color
    cout << "Enter color for card" << endl;
    cout << "Enter color for 1st card" << endl;
    cin >> color;
    c1.setColor(color); //setting color to 1st card

    cout << "Enter color for 2nd card" << endl;
    cin >> color;
    c2.setColor(color); //setting color to 2nd card

    cout << "Enter color for 3rd card" << endl;
    cin >> color;
    c3.setColor(color); //setting color to 3rd card

    //for shape
    cout << "Enter Shape for card" << endl;
    cout << "Enter Shape for 1st card" << endl;
    cin >> shape;
    c1.setShape(shape); //setting Shape to 1st card

    cout << "Enter Shape for 2nd card" << endl;
    cin >> shape;
    c2.setShape(shape); //setting Shape to 2nd card
        cout << "Enter Shape for 3rd card" << endl;
    cin >> shape;
    c3.setShape(shape); //setting Shape to 3rd card

    //for number
    cout << "Enter number for card" << endl;
    cout << "Enter number for 1st card" << endl;
    cin >> number;
    c1.setNumber(number); //setting number to 1st card

    cout << "Enter number for 2nd card" << endl;
    cin >> number;
    c2.setNumber(number); //setting number to 2nd card

    cout << "Enter number for 3rd card" << endl;
    cin >> number;
    c3.setNumber(number); //setting number to 3rd card

    bool result = checkCards(c1, c2, c3);

    if (result == false) {
        cout << "Cards are not in set!" << endl;
    }

    if (result == true) {
        cout << "Cards are in set!" << endl;
    }

    return 0;
}

