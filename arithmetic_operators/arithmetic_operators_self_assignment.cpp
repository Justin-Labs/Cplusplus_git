# include<iostream>

using std::cout;
using std::endl;

int main()
{
    //simple assignment
    int apples = 10;
    cout << "Originally I had: " << apples << endl;


    //addition assignment
    apples += 5;
    cout << "After adding five apples I have now got: " << apples << endl;

    //subtraction assignment
    apples -= 2;
    cout << "After eating two apples I have now got: " << apples << endl;

    //multiplication assignment
    apples *= 3;
    cout << "After tripling my apples I have now got: " << apples << endl;

    //division assignment
    apples /= 5;
    cout << "After splitting the apples amongst 5 friends each friend has: " << apples << endl;

    //modulo assignment
    apples %= 4;
    cout << "After splitting the apples amongst 4 friends and keeping the rest I have: " << apples << endl;

    return 0;
}
