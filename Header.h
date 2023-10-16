#pragma once
#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
struct DsSoNguyen {
	Node* head;
	Node* tail;
};
Node* createNode(int n);
void khoiTaoDsRong(DsSoNguyen& ds);
void xoaDs(DsSoNguyen& ds); 
void dsSan(DsSoNguyen& ds);
void duyetDs(DsSoNguyen ds);
int tinhTongCacNut(DsSoNguyen ds);
DsSoNguyen noi2List(DsSoNguyen ds1, DsSoNguyen ds2);
void sapXep(DsSoNguyen& ds);
void xoaADau(DsSoNguyen& ds,int a);
void chenAVanGiuTinhXs(DsSoNguyen& ds, int a);
void tachKoCapPhat(DsSoNguyen ds, DsSoNguyen& dsChan, DsSoNguyen& dsLe);