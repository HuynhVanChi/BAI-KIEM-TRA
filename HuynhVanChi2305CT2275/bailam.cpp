#include <iostream>
#include <string>
using namespace std;

int main() {
    // Phần 1: Khai bao va khoi tao mang chua MSSV
    string danhsachMSSV[5] = { "0", "2303CT2275", "2302CT2286", "2301CT2293", "2304CT2295" };

    // Phần 2: Yeu cau ngoui dung nhap MSSV của minh
    cout << "Nhập mã số sinh viên của bạn: ";
    getline(cin, danhsachMSSV[0]);

    // Phần 3: In mang ra man hinh
    cout << "Danh sách MSSV:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << danhsachMSSV[i] << endl;
    }

    // Phan 4: Sap xep mang theo thu tu tu thap đen cao
    string temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            if (danhsachMSSV[j] > danhsachMSSV[j + 1]) {
                temp = danhsachMSSV[j];
                danhsachMSSV[j] = danhsachMSSV[j + 1];
                danhsachMSSV[j + 1] = temp;
            }
        }
    }

    // In mang da sap xep ra man hinh
    cout << "\nDanh sach MSSV đã sap xep:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << danhsachMSSV[i] << endl;
    }

    // Phan 5: Tim dia chi và in phan tu chua MSSV lon nhat
    string *ptrArrayMSSV = danhsachMSSV;
    string *maxMSSV = ptrArrayMSSV;
    for (int i = 1; i < 5; i++) {
        if (*ptrArrayMSSV < danhsachMSSV[i]) {
            maxMSSV = ptrArrayMSSV + i;
        }
    }
    cout << "Đia chi của phan tu chua MSSV lon nhat: " << maxMSSV << endl;
    cout << "MSSV lon nhat: " << *maxMSSV << endl;

    return 0;
}