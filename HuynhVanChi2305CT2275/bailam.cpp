#include <iostream>
#include <string>
using namespace std;

int main() {
    // Phần 1: Khai báo và khởi tạo mảng chứa MSSV
    string danhsachMSSV[5] = { "", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002" };

    // Phần 2: Yêu cầu người dùng nhập MSSV của mình
    cout << "Nhập mã số sinh viên của bạn: ";
    getline(cin, danhsachMSSV[0]);

    // Phần 3: In mảng ra màn hình
    cout << "Danh sách MSSV:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << danhsachMSSV[i] << endl;
    }

    // Phần 4: Sắp xếp mảng theo thứ tự từ thấp đến cao
    string temp;
    for (int i = 0; i < 5 - 1; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            if (danhsachMSSV[j] > danhsachMSSV[j + 1]) {
                temp = danhsachMSSV[j];
                danhsachMSSV[j] = danhsachMSSV[j + 1];
                danhsachMSSV[j + 1] = temp;
            }
        }
    }

    // In mảng đã sắp xếp ra màn hình
    cout << "\nDanh sách MSSV đã sắp xếp:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << danhsachMSSV[i] << endl;
    }

    // Phần 5: Tìm địa chỉ và in phần tử chứa MSSV lớn nhất
    string *ptrArrayMSSV = danhsachMSSV;
    string *maxMSSV = ptrArrayMSSV;
    for (int i = 1; i < 5; ++i) {
        if (*ptrArrayMSSV < danhsachMSSV[i]) {
            maxMSSV = ptrArrayMSSV + i;
        }
    }
    cout << "\nĐịa chỉ của phần tử chứa MSSV lớn nhất: " << maxMSSV << endl;
    cout << "MSSV lớn nhất: " << *maxMSSV << endl;

    return 0;
}