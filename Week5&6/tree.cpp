#include <iostream>
using namespace std;

// Một Node trong cây
class Node {
    // Chứa thông tin của Node đó
    int data;
    // Con trỏ đến Node cha
    Node* fatherNode;

    // Con trỏ đến các Node con
    // Đây là một danh sách liên kết (con trỏ đến con đầu tiên)
    // Thứ tự ưu tiên từ nhỏ đến lớn (con nhỏ được duyệt trước)
    Node* firstChild;
    Node* nextSibling;
    Node* next;
public:
    Node(int val) {
        // ...
        fatherNode = NULL;
        firstChild = NULL;
        nextSibling = NULL;
        data = val;
    }
    Node(int val, Node* FNode) {
        fatherNode = FNode;
        data = val;
        FNode->next = firstChild;
        firstChild->next = nextSibling;
    }
    // Các hàm khởi tạo khác nếu cần thiết

    friend class Tree;
};

// Lớp Cây
class Tree {
    // Chứa một Node gốc
    Node* root;
public:
    Tree() {
        // ...
    }

    Node* findNode(Node* root, int data) {
        if(root == NULL)
            return new Node();

    }

    Node* insertToSortLinkedList(Node* head, Node* newNode) {
        Node* p = head;
        while((p->next)->data < newNode->data) {
            p = p->next;
        }
        newNode->nextSibling = p->nextSibling;
        p->nextSibling = newNode;
    }
    // Các hàm khởi tạo khác nếu cần thiết

    // Hàm thêm một Node vào cây
    // Hàm trả về false nếu Node cha không tồn tại trên cây
    // hoặc Node father đã có con là data
    bool insert(int father, int data) {
        if(root == NULL) {
            Node* newNode = new Node(data);
            root = newNode;
        }
        else {
            Node* nodeF = findNode(root, father);
            if(nodeF == NULL)
                return false;
            Node* newNode = new Node(data, nodeF);
            insertToSortLinkedList(nodeF->firstChild, newNode);
            return true;
        }
    }

    // Hàm xoá một Node trên cây
    // Nếu không phải Node lá xoá Node đó và toàn bộ các Node con của nó
    // Hàm trả về số lượng Node đã xoá
    // Nếu Node data không tồn tại trả về 0 (zero)
    int remove(Node* root, int data) {
        Node* p = findNode(root, data);
        llToRemove = p->fatherNode->firstChild;
        return countNode(root);
    }

    // Hàm in ra các Node theo thứ tự preorder
    void preorder(Node* root) {
        cout<<root->fatherNode->data;
        if(root->firstChild != NULL) {
            Node* p = root;
            while(p!=NULL) {
                p = p->next;
                preorder();
            }
        }
    }

    // Hàm in ra các Node theo thứ tự postorder
    void postorder();

    // Hàm kiểm tra cây nhị phân
    bool isBinaryTree(Node* root)
    {
        if(root == NULL)
            return true;
        else {
            int cnt = countNodeLinkedList(root->firstChild);
            if(cnt > 2)
                return false;
            else {
                if (cnt == 0)
                    return true;
                else if (cnt == 1)
                    return isBinaryTree(root->firstChild);
                else
                    return isBinaryTree(root->firstChild->nextSibling);
            }
        }
    }

    // Hàm kiểm tra cây tìm kiếm nhị phân
    bool isBinarySearchTree();

    // Hàm kiểm tra cây max-heap
    bool isMaxHeapTree();

    // Hàm in ra các Node theo thứ tự inorder nếu là cây nhị phân
    void inorder() {
        if(r->firstChild == NULL)
            inorder(root->firstChild);
        cout<<
        if(r->firstChild != NULL && r->firstChild->nextSibling != NULL)
            inorder(root->firstChild->nextSibling);
        cout<<
    }

    // Hàm trả về độ cao của cây
    int height(Node* root) {
        if(root->firstChild == NULL) {
            return 0;
        }
        else {
        }
    }

    // Hàm trả về độ sâu của một Node
    int depth(int data) {
        Node* p = findNode(data);

    }

    // Hàm đếm số lượng lá
    int numOfLeaves();

    // Hàm trả về Node có giá trị lớn nhất
    int findMax();

    // Hàm trả về Node có nhiều con nhất
    int findMaxChild();
};

int main(int argc, char const *argv[]) {
    // Tạo ra một cây ngẫu nhiên có tối thiểu 30 Node
    // Test thử các hàm của lớp cây

    // Tạo ra một cây thoả mãn tính chất là Binary Search Tree và test lại

    // Tạo ra một cây thoả mãn tính chất là Max Heap Tree và test lại
    return 0;
}
