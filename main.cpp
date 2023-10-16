#include"Header.h"
int main() {
	DsSoNguyen ds;
	DsSoNguyen ds2;
	DsSoNguyen dsGop;
	DsSoNguyen dsChan;
	DsSoNguyen dsLe;
	int a;
	/*khoiTaoDsRong(ds);*/
	dsSan(ds);
	/*dsSan(ds2);
	dsGop = noi2List(ds, ds2);*/
	/*xoaDs(ds);*/
	duyetDs(ds);
	/*sapXep(ds);
	duyetDs(ds);*/
	/*int tongCacNut = tinhTongCacNut(ds);
	cout << "tong cac nut la: " << tongCacNut;*/
	/*cout << "nhap so can xoa: ";
	cin >> a;*/
	/*xoaADau(ds,a);*/
	/*chenAVanGiuTinhXs(ds,a);*/
	tachKoCapPhat(ds, dsChan, dsLe);
	cout << "ds chan: ";
	duyetDs(dsChan);
	cout << "ds le: ";
	duyetDs(dsLe);

}