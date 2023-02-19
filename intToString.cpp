#include <iostream>
#include <string>
using namespace std;

const string ones[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
const string teens[] = {"muoi", "muoi mot", "muoi hai", "muoi ba", "muoi bon", "muoi lam", "muoi sau", "muoi bay", "muoi tam", "muoi chin"};
const string tens[] = {"", "", "hai muoi", "ba muoi", "ban muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
const string powers[] = {"", "nghin", "trieu" , "ty"};



string convertThreeDigits(int num)
{
    string result;
    if(num <10)
    	return  ones[num] + " ";
    if (num >= 100) {
        result += ones[num / 100] + " tram ";
        num %= 100;
    }
    if (num >= 10) {
        if (num >= 20  ) {
            result += tens[num / 10] + " ";
            
            num %= 10;
           
            if ( num  > 0 ) {
                result +=  ones[num] + " ";
            }
        } else {
            result += teens[num - 10] + " ";
        }
    } else if (num > 0) {
    	  
    	if(num >= 10)
        	result+=  ones[num] + " ";
        else
        	result+=  "le "+ ones[num] + " ";
    }
    return result;
}

string numberToWords(long long num) {
    if (num == 0) {
        return "khong";
    }
    string words = "";
    int i = 0;
    while (num > 0) {
        int threeDigits = num % 1000;
        num /= 1000;
        if (threeDigits > 0 ) {
            words = convertThreeDigits(threeDigits) + powers[i] + " " + words;
        }
        i++;
    }
    return words;
}

int main() {
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    if (n < 0) {
        cout << "Nhap vao so nguyen duong!" << endl;
        return 0;
    }
    cout << "Ket Qua: " << numberToWords(n) << endl;
    return 0;
}
