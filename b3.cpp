#include <iostream>

using namespace std;

int soCach(int x, int y, int x_goal, int y_goal) {
    // Nếu đã đạt được tỉ số mục tiêu
    if (x == x_goal && y == y_goal)
        return 1;
    // Nếu tỉ số hiện tại đã vượt quá tỉ số mục tiêu
    if (x > x_goal || y > y_goal)
        return 0;
    // Ghi bàn cho 1 trong 2 đội và đệ quy để tiếp tục
    return soCach(x + 1, y, x_goal, y_goal) + soCach(x, y + 1, x_goal, y_goal);
}

int main() {
    int x = 0;
    int y = 0;
    int x_goal, y_goal;
    cin >> x_goal >> y_goal;
    int socach = soCach(x, y, x_goal, y_goal);
    cout << "So cach de co ty so " << x_goal << " - " << y_goal << " la: " << socach << endl;

    return 0;
}
