#include <iostream>
#include <string>

using namespace std;

string numberToString(int num)
{
    string result;
    string onesPlace[] = {"", "mot", "hai", "ba", "", "nam", "sau", "bay", "tam", "chin"};
    string tensPlace[] = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
    if (num >= 1000000) {
        result += numberToString(num / 1000000) + " trieu ";
        num %= 1000000;
    }
    if (num >= 1000) {
        result += numberToString(num / 1000) + " ngan ";
        num %= 1000;
    }
    if (num >= 100) {
        result += onesPlace[num / 100] + " tram ";
        num %= 100;
    }
    if (num >= 10) {
        result += tensPlace[num / 10] + " ";	
        num %= 10;
    }
    if (num > 0) {
        result += onesPlace[num];
    }
    return result;
}

int main()
{
    int num;
    cout << "Nhap so nguyen: ";
    cin >> num;
    cout << numberToString(num) << endl;

    return 0;
}
