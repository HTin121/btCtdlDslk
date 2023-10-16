#include"Header.h"
Node* createNode(int n) {
	Node* p = new Node;
	p->data = n;
	p->next = NULL;
	return p;
}
void dsSan(DsSoNguyen& ds) {
	Node* p;
	p = createNode(2);
	ds.head = p;
	p->next = createNode(4);
	p = p->next;
	p->next = createNode(9);
	p = p->next;
	p->next = createNode(3);
	p = p->next;
	p->next = createNode(6);
	p = p->next;
	p->next = createNode(1);
	ds.tail = p->next;
}
void duyetDs(DsSoNguyen ds) {
	Node* p;
	p = ds.head;
	cout << "cac phan tu trong danh sach la: ";
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
void khoiTaoDsRong(DsSoNguyen& ds) {
	ds.head = NULL;
	ds.tail = NULL;
}
void xoaDs(DsSoNguyen& ds) {
	Node* p;
	Node* q;
	p = ds.head;
	while (p != NULL) {
		q = p;
		delete q;
		p = p->next;
	}
	ds.head = NULL;
	ds.tail = NULL;
}
int tinhTongCacNut(DsSoNguyen ds) {
	Node* p;
	int tong = 0;
	p = ds.head;
	while (p != NULL) {
		tong += p->data;
		p = p->next;
	}
	return tong;
}

DsSoNguyen noi2List(DsSoNguyen ds1, DsSoNguyen ds2) {
	DsSoNguyen noi;
	ds1.tail->next = ds2.head;
	noi.head = ds1.head;
	noi.tail = ds2.tail;
	return noi;
}
void sapXep(DsSoNguyen& ds){
	Node* p;
	Node* q;
	int tam;
	p = ds.head;
	q = ds.head;
	while (p != NULL) {
		q = ds.head;
		while (q->next != NULL) {
			if (q->data > q->next->data) {
				tam = q->data;
				q->data = q->next->data;
				q->next->data = tam;
			}
			q = q->next;
		}
		p = p->next;
	}
}
// 1 2 3 8 5
void xoaADau(DsSoNguyen& ds,int a) {
	Node* p;
	Node* q;
	p = ds.head;
	q = ds.head;
	while (p != NULL) {
		if (p->data == a) {
			q->next = p->next;
			if (p == ds.head)
				ds.head = p->next;
			delete p;
			break;

		}
		q = p;
		p = p->next;
	}
}
void chenAVanGiuTinhXs(DsSoNguyen& ds, int a) {
	Node* p;
	Node* q;
	Node* aNode = createNode(a);
	p = ds.head;
	q = ds.head;
	if (p->data >= a) {
		aNode->next = ds.head;
		ds.head = aNode;
	}
	while (p != NULL) {
		if (a >= q->data && a <= p->data) {
				aNode->next = q->next;
				q->next = aNode;
				break;
		}
		q = p;
		p = p->next;
	}
}
//tach mang ko cap phat
void tachKoCapPhat(DsSoNguyen ds, DsSoNguyen& dsChan, DsSoNguyen& dsLe) {
	Node* p;
	Node* q;
	int tam;
	p = ds.head;
	while (p != NULL) {
		if (p->data % 2 == 0) {
			q = p->next;
			while (q != NULL) {
				if (q->data % 2 != 0) {
					tam = p->data;
					p->data = q->data;
					q->data = tam;
					dsLe.tail = p;
				}
				q = q->next;
			}
		}
		else {
			dsLe.tail = p;
		}
		p = p->next;
	}
	dsChan.tail = ds.tail;
	dsLe.head = ds.head;
	dsChan.head = dsLe.tail->next;
	dsLe.tail->next = NULL;
}