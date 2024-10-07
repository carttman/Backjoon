#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // ���ĵ��� ���� ����
    vector<int> numbers = { 8, 3, 1, 7, 4, 5, 9, 2, 6 };

    // ���� ����
    sort(numbers.begin(), numbers.end());

    // ����ڿ��� ���� �Է� �ޱ�
    int target;
    cout << "�����̳ʿ��� �˻��ϰ� ���� ���ڸ� �Է��غ�����: ";
    cin >> target;

    // ���� Ž��
    bool found = binary_search(numbers.begin(), numbers.end(), target);

    if (found) {
        cout << "ã�ҽ��ϴ�." << endl;
    }
    else {
        cout << "����Ǿ� ���� �ʽ��ϴ�." << endl;
    }

    return 0;
}