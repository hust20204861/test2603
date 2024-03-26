#include <iostream>

using namespace std;

int tienToiThieu(int m, int d, int k, int c){
    int kq = 0;
    int kiemmoi = d;
    bool ren = true;
    for(int i=1; i<=m; i++){
        d-=k;
        if(d <= 0 && i < m) return -1;
        if(i == m-1 && d == k) ren = false;
        if(d <= k && ren){
            kq += c;
            d = kiemmoi;
        }
    }
    return kq;
}
// khi tiêu diệt hết m con quái, chạy vòng lặp từ 0 tới m, mỗi lần tiêu diệt 1 con quái, d bị giảm k đơn vị, nếu d < 0 thì thất bại. 
//mỗi lần d còn dưới k thì sẽ dùng c vàng để rèn lại kiếm như mới(vì muốn qua con quái tiếp theo giá trị d bắt buộc phải lớn hơn k)
//khi đến con quái cuối cùng nếu d đủ qua thì không cần rèn nữa
int main(){
    int m, d, k, c;
    cout << "nhap cac chi so: ";
    cin >> m >> d >> k >> c;
    int tien = tienToiThieu(m, d, k, c);
    cout <<"so tien toi thieu la: "<< tien <<endl;
    return 0;
}