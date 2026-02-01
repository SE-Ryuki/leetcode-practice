//リスト[1,2,4]を作る
#include <iostream>
using namespace std;

// ★ 自分で ListNode を定義
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0, ListNode* n = nullptr) : val(x), next(n) {}
};

int main() {
    // [1,2,4] のリストを作る
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(4);

    n1->next = n2;
    n2->next = n3;

    // 表示して確認
    ListNode* cur = n1;
    while (cur != nullptr) {
        cout << cur->val << " ";
        cur = cur->next;
    }

    cout << endl;
    return 0;
}


/*　省略形
ListNode* list1 = new ListNode(1,
    new ListNode(2,
        new ListNode(4, nullptr)
    )
);
*/