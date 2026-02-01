/*配列: int a[3] = {1,2,4};
・メモリに連続して並ぶ
・サイズが決まっている
連結リスト:
・値と次の場所の住所をセットで持つ
C++での連結リストの定義
struct ListNode{
    int val;        値
    ListNode* next; 次のノードの住所
};

ノードを1個作ってみる
ListNode* node = new ListNode();
node->val = 1;　値
node->next = nullptr;　次はない
node
 ↓
[1|null]

ノードを2個つなげる
ListNode* node1 = new ListNode();
node1->val = 1;
ListNode* node2 = nwe ListNode();
node2->val = 2;
node1->nedt =node2;
node2->next = nullptr;
[1| ]→[2| null]
 
リスト[1,2,4]を作る
*/
