#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//class Node {
//	public:
//		int data;
//		Node* next;
//
//};
//
//class List {
//	public:
//		Node* headNode;
//		Node* r;
//		List()
//		{
//			r = headNode;
//		}
//		void Insert(Node* node)
//		{
//			if (headNode == NULL)
//			{
//				headNode = node;
//
//			}
//			else {
//				r->next = node;
//				r = node;
//				r->next = NULL;
//			}
//			
//
//		}
//		void passList()
//		{
//			Node* t = headNode->next;
//			while (t!=NULL)
//			{
//				cout << t->data << endl;
//				t = t->next;
//			}
//		}
//		~List()
//		{
//			;
//		}
//};
//
//int main()
//{
//	List list;
//	for (int i = 1; i <= 5; i++)
//	{
//		Node* pNode = new Node();
//		pNode->data = i;
//		list.Insert(pNode);
//	}
//	list.passList();
//	return 0;
//}


//��������д���ɲ��У�
//class Node {  
//public:
//	int data;
//	Node* next;
//};
//
//class List {
//public:
//	Node* headNode;
//
//	List()
//	{
//		headNode = new Node();
//		headNode = nullptr;
//	}
//
//	void CreateList()
//	{
//		int x;
//		Node* s, * r = headNode;
//		printf("����99��ʾ����!\n");
//		scanf("%d",&x);
//		while (x != 99) {
//			s = new Node();
//			s->data = x;
//			r->next = s;
//			r = s;
//			scanf("%d", &x);
//		}
//		r->next = nullptr;
//	}
//
//	void passList()
//	{
//		Node* t = headNode;
//		while (t->next!=nullptr)
//		{
//			
//			t = t->next;
//			cout << t->data << endl;
//		}
//	}
//};
//
//int main()
//{
//	List list;
//	list.CreateList();
//	list.passList();
//	return 0;
//}

class Node {
public:
	int data;
	Node* next;

};

class LinkList {
public:
	Node* head;
	//���캯��
	LinkList()
	{
		head = new Node;
		head->data = 0;
		head->next = nullptr;

	}
	//��������
	~LinkList()
	{
		delete head;
	}
	//��������
	void create(int size);

	//��������
	void showList();
};

void LinkList::create(int size)
{
	Node* s, * r = head;
	if (size < 0)
	{
		cout << "����ڵ�����" << endl;
		exit(-1);
	}
	for (int i = 0; i < size; i++)
	{
		s = new Node;
		cout << "�������" << i + 1 << "��Ԫ��ֵ" << endl;
		cin >> s->data;
		r->next = s;
		r = s;
		r->next = nullptr;
	}
}

void LinkList::showList()
{
	Node* t = head;
	if (head == nullptr && head->next == nullptr)
	{
		cout << "����Ϊ�ձ�" << endl;
		exit(-1);
	}
	while (t->next!= nullptr)
	{
		t = t->next;
		cout << t->data << endl;
	}
}

int main()
{
	LinkList list;
	int size;
	cout << "�����೤������:";
	cin >> size ;
	list.create(size);
	list.showList();
	return 0;
}