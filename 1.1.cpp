#include "ac0fe7d7450621a39364ed3b05cacd11-e1dc9b6c9221f1477d52bab918c9e8e34bb362f4 (1).zip"
#define MAX 200
using namespace std;

void ChuanHoaChuoi(char str[]) {
    int i;

    // Remove leading spaces
    while (str[0] == ' ') {
        for (i = 0; i < strlen(str) - 1; i++) {
            str[i] = str[i + 1]; //đẩy string lên nếu bắt đầu bằng khoảng trống
        }
        str[strlen(str) - 1] = '\0'; //'\0' xóa vị trí đó (tương đương với NULL)
    }

    // Remove trailing spaces
    while (str[strlen(str) - 1] == ' ') {
        str[strlen(str) - 1] = '\0'; //xóa vị trí cuối nếu đó là khoảng trống
    }

    i = 0;
    // loại bỏ khoảng cách dư giữa các chữ
    while (i < strlen(str) - 1) {
        if (str[i] == ' ') //khi có khoảng cách
        {
            if (str[i + 1] == ' ') //thấy nếu tiếp theo vẫn là 1 khoảng cách
            {
                for (int j = i + 1; j < strlen(str) - 1; j++) 
                {
                    str[j] = str[j + 1]; //đẩy string lên
                }
                str[strlen(str) - 1] = '\0'; //xóa vị trí cuối cùng
            } else {
                i++; //không thì tăng lên để kiểm tra
            }
        } else {
            i++; //không thì đến kí tự tiếp theo
        }
    }

    //đổi hết tất cả các ký tự sang chữ thường
    for (i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }

    //viết hoa ở đầu mỗi chữ
    str[0] = toupper(str[0]);
    for (i = 0; i < strlen(str) - 1; i++) {
        if (str[i] == ' ') {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
}

int main() {
    char str[MAX];

    cout << "Input full Name: ";
    cin.getline(str, MAX); //Nhập tên

    ChuanHoaChuoi(str);

    cout << "Result: " << str << endl;

    return 0;
}