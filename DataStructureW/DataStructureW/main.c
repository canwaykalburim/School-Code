#include <stdio.h>
#include <windows.h>

void WarmingUp() {
	char week[7][3] = { "월", "화", "수", "목", "금", "토", "일" };

	for (int i = 0; i < 7; i++) {
		printf("%s ", week[i]);
	}
}

typedef struct TreeNode {
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
}BTreeNode;

BTreeNode * MakeBTreeNode(void) {
	BTreeNode * nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

int GetData(BTreeNode * bt) {
	return bt->data;
}

void SetData(BTreeNode * bt, int data) {
	bt->data = data;
}

BTreeNode * GetLeft(BTreeNode * bt) {
	return bt->left;
}

BTreeNode * GetRight(BTreeNode * bt) {
	return bt->right;
}

void MakeLeft(BTreeNode * main, BTreeNode * sub) {
	if (main->left != NULL)
		free(main->left);

	main->left = sub;
}

void MakeRight(BTreeNode * main, BTreeNode * sub) {
	if (main->right != NULL)
		free(main->right);

	main->right = sub;
}

void SubMain() {
	BTreeNode * bt1 = MakeBTreeNode();
	BTreeNode * bt2 = MakeBTreeNode();
	BTreeNode * bt3 = MakeBTreeNode();
	BTreeNode * bt4 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);

	MakeLeft(bt1, bt2);
	MakeRight(bt1, bt3);
	MakeLeft(bt2, bt4);

	printf("%d\n", GetData(GetLeft(bt1)));
	printf("%d\n", GetData(GetLeft(GetLeft(bt1))));
}

int main(void) {
	//WarmingUp();
	SubMain();
	return 0;
}