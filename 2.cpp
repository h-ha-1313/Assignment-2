#include "ac0fe7d7450621a39364ed3b05cacd11-e1dc9b6c9221f1477d52bab918c9e8e34bb362f4 (1).zip"
#define MAX 100
using namespace std;

int KyTuXuatHienNhieuNhat(char[], char&);

int main() {
    char str[MAX];
    cout << "Nhap 1 chuoi: ";
    cin.getline(str, MAX);

    char chr;
    int max = KyTuXuatHienNhieuNhat(str, chr);

    if (max != 0)
        cout << "Ky tu " << chr << " xuat hien nhieu nhat la " << max << " lan." << endl;
    else
        cout << "Chuoi rong! Khong co ky tu xuat hien nhieu nhat." << endl;

    return 0;
}

int KyTuXuatHienNhieuNhat(char str[], char &chr) {
    int i, j, length = strlen(str);
    char curchr;
    int curcount;
    int max = 0;

    for (i = 0; i < length; i++) {
        curchr = str[i];
        curcount = 1;

        for (j = i + 1; j < length; j++)
            if (str[j] == str[i])
                curcount++;

        if (max < curcount) {
            max = curcount;
            chr = curchr;
        }
    }

    return max;
}
