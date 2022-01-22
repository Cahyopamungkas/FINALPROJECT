/*
 * 
 * Final Project
 * Rental motor dan mobil
 * 
*/

#include <iostream>

using namespace std;

int main()
{
home :
	int l_sewa;
	char nama[30];
	char pil, yt;
	cout << "===========================================================================" << endl;
	cout << "|            ****RENTAL/SEWA MOBIL DAN MOTOR KELOMPOK 7****               |" << endl;
	cout << "===========================================================================" << endl;
	cout << "|     KODE            JENIS MOBIL & MOTOR             HARGA SEWA/HARI     |" << endl;
	cout << "|     1               TOYOTA NEW AVANZA               RP. 750.000         |" << endl;
	cout << "|     2               TOYOTA RUSH                     RP. 900.000         |" << endl;
	cout << "|     3               TOYOTA CALYA                    RP. 700.000         |" << endl;
	cout << "|     4               HONDA NEW BRIO                  RP. 600.000         |" << endl;
	cout << "|     5               HONDA NEW BEAT                  RP. 150.000         |" << endl;
	cout << "|     6               HONDA NEW VARIO 150             RP. 250.000         |" << endl;
	cout << "|     7               YAMAHA NEW AEROX                RP. 250.000         |" << endl;
	cout << "|     8               YAMAHA NEW NMAX                 RP. 300.000         |" << endl;
	cout << "===========================================================================" << endl;
	cout << endl;
	cout << " Nama                                : "; cin >> nama;
	cout << " Kode Mobil (1/2/3/4/5/6/7/8)        : "; cin >> pil;
	cout << " Lama Sewa                           : "; cin >> l_sewa;
	cout << endl;
	system("cls");
	if (pil == '1') {
		int h_sewa, sub_tot, diskon, tot, bay, balik;
		h_sewa = 750000;
		sub_tot = l_sewa * h_sewa;
		if (l_sewa >= 14) (diskon = sub_tot * 0.3);
		else (diskon = sub_tot * 0);
		tot = sub_tot - diskon;
		cout << "===========================================================================" << endl;
		cout << "Nama Penyewa                   : " << nama << endl;
		cout << "Kode Mobil (1/2/3/4/5/6/7/8)   : " << pil << endl;
		cout << "Jenis Mobil                    : TOYOTA NEW AVANZA" << endl;
		cout << "Harga Sewa/Hari                : " << h_sewa << endl;
		cout << "Lama peminjaman                : " << l_sewa << " hari" << endl;
		cout << "Sub Total                      : Rp " << sub_tot << ",-" << endl;
		cout << "Diskon                         : Rp " << diskon << ",-" << endl;
		cout << "Total Bayar                    : Rp " << tot << ",-" << endl;
		cout << "===========================================================================" << endl;
		cout << endl;
		cout << "Uang Bayar   = Rp. "; cin >> bay;
		balik = bay - tot;
		cout << "Uang Kembali = Rp. " << balik << ",-" << endl;
	}
	if (pil == '2') {
		int h_sewa, sub_tot, diskon, tot, bay, balik;
		h_sewa = 900000;
		sub_tot = l_sewa * h_sewa;
		if (l_sewa >= 14) (diskon = sub_tot * 0.3);
		else (diskon = sub_tot * 0);
		tot = sub_tot - diskon;
		cout << "===========================================================================" << endl;
		cout << "Nama Penyewa                   : " << nama << endl;
		cout << "Kode Mobil (1/2/3/4/5/6/7/8)   : " << pil << endl;
		cout << "Jenis Mobil                    : TOYOTA RUSH" << endl;
		cout << "Harga Sewa/Hari                : " << h_sewa << endl;
		cout << "Lama peminjaman                : " << l_sewa << " hari" << endl;
		cout << "Sub Total                      : Rp " << sub_tot << ",-" << endl;
		cout << "Diskon                         : Rp " << diskon << ",-" << endl;
		cout << "Total Bayar                    : Rp " << tot << ",-" << endl;
		cout << "===========================================================================" << endl;
		cout << endl;
		cout << "Uang Bayar   = Rp. "; cin >> bay;
		balik = bay - tot;
		cout << "Uang Kembali = Rp. " << balik << ",-" << endl;
	}
	if (pil == '3') {
		int h_sewa, sub_tot, diskon, tot, bay, balik;
		h_sewa = 700000;
		sub_tot = l_sewa * h_sewa;
		if (l_sewa >= 14) (diskon = sub_tot * 0.3);
		else (diskon = sub_tot * 0);
		tot = sub_tot - diskon;
		cout << "===========================================================================" << endl;
		cout << "Nama Penyewa                   : " << nama << endl;
		cout << "Kode Mobil (1/2/3/4/5/6/7/8)   : " << pil << endl;
		cout << "Jenis Mobil                    : TOYOTA CALYA" << endl;
		cout << "Harga Sewa/Hari                : " << h_sewa << endl;
		cout << "Lama peminjaman                : " << l_sewa << " hari" << endl;
		cout << "Sub Total                      : Rp " << sub_tot << ",-" << endl;
		cout << "Diskon                         : Rp " << diskon << ",-" << endl;
		cout << "Total Bayar                    : Rp " << tot << ",-" << endl;
		cout << "===========================================================================" << endl;
		cout << endl;
		cout << "Uang Bayar   = Rp. "; cin >> bay;
		balik = bay - tot;
		cout << "Uang Kembali = Rp. " << balik << ",-" << endl;
	}
	if (pil == '4') {
		int h_sewa, sub_tot, diskon, tot, bay, balik;
		h_sewa = 600000;
		sub_tot = l_sewa * h_sewa;
		if (l_sewa >= 14) (diskon = sub_tot * 0.3);
		else (diskon = sub_tot * 0);
		tot = sub_tot - diskon;
		cout << "===========================================================================" << endl;
		cout << "Nama Penyewa                   : " << nama << endl;
		cout << "Kode Mobil (1/2/3/4/5/6/7/8)   : " << pil << endl;
		cout << "Jenis Mobil                    : HONDA NEW BRIO" << endl;
		cout << "Harga Sewa/Hari                : " << h_sewa << endl;
		cout << "Lama peminjaman                : " << l_sewa << " hari" << endl;
		cout << "Sub Total                      : Rp " << sub_tot << ",-" << endl;
		cout << "Diskon                         : Rp " << diskon << ",-" << endl;
		cout << "Total Bayar                    : Rp " << tot << ",-" << endl;
		cout << "===========================================================================" << endl;
		cout << endl;
		cout << "Uang Bayar   = Rp. "; cin >> bay;
		balik = bay - tot;
		cout << "Uang Kembali = Rp. " << balik << ",-" << endl;
	}
	if (pil == '5') {
		int h_sewa, sub_tot, diskon, tot, bay, balik;
		h_sewa = 150000;
		sub_tot = l_sewa * h_sewa;
		if (l_sewa >= 14) (diskon = sub_tot * 0.3);
		else (diskon = sub_tot * 0);
		tot = sub_tot - diskon;
		cout << "===========================================================================" << endl;
		cout << "Nama Penyewa                   : " << nama << endl;
		cout << "Kode Mobil (1/2/3/4/5/6/7/8)   : " << pil << endl;
		cout << "Jenis Mobil                    : HONDA NEW BEAT" << endl;
		cout << "Harga Sewa/Hari                : " << h_sewa << endl;
		cout << "Lama peminjaman                : " << l_sewa << " hari" << endl;
		cout << "Sub Total                      : Rp " << sub_tot << ",-" << endl;
		cout << "Diskon                         : Rp " << diskon << ",-" << endl;
		cout << "Total Bayar                    : Rp " << tot << ",-" << endl;
		cout << "===========================================================================" << endl;
		cout << endl;
		cout << "Uang Bayar   = Rp. "; cin >> bay;
		balik = bay - tot;
		cout << "Uang Kembali = Rp. " << balik << ",-" << endl;
	}
	if (pil == '6') {
		int h_sewa, sub_tot, diskon, tot, bay, balik;
		h_sewa = 250000;
		sub_tot = l_sewa * h_sewa;
		if (l_sewa >= 14) (diskon = sub_tot * 0.3);
		else (diskon = sub_tot * 0);
		tot = sub_tot - diskon;
		cout << "===========================================================================" << endl;
		cout << "Nama Penyewa                   : " << nama << endl;
		cout << "Kode Mobil (1/2/3/4/5/6/7/8)   : " << pil << endl;
		cout << "Jenis Mobil                    : HONDA NEW VARIO 150" << endl;
		cout << "Harga Sewa/Hari                : " << h_sewa << endl;
		cout << "Lama peminjaman                : " << l_sewa << " hari" << endl;
		cout << "Sub Total                      : Rp " << sub_tot << ",-" << endl;
		cout << "Diskon                         : Rp " << diskon << ",-" << endl;
		cout << "Total Bayar                    : Rp " << tot << ",-" << endl;
		cout << "===========================================================================" << endl;
		cout << endl;
		cout << "Uang Bayar   = Rp. "; cin >> bay;
		balik = bay - tot;
		cout << "Uang Kembali = Rp. " << balik << ",-" << endl;
	}
	if (pil == '7') {
		int h_sewa, sub_tot, diskon, tot, bay, balik;
		h_sewa = 250000;
		sub_tot = l_sewa * h_sewa;
		if (l_sewa >= 14) (diskon = sub_tot * 0.3);
		else (diskon = sub_tot * 0);
		tot = sub_tot - diskon;
		cout << "===========================================================================" << endl;
		cout << "Nama Penyewa                   : " << nama << endl;
		cout << "Kode Mobil (1/2/3/4/5/6/7/8)   : " << pil << endl;
		cout << "Jenis Mobil                    : YAMAHA NEW AEROX" << endl;
		cout << "Harga Sewa/Hari                : " << h_sewa << endl;
		cout << "Lama peminjaman                : " << l_sewa << " hari" << endl;
		cout << "Sub Total                      : Rp " << sub_tot << ",-" << endl;
		cout << "Diskon                         : Rp " << diskon << ",-" << endl;
		cout << "Total Bayar                    : Rp " << tot << ",-" << endl;
		cout << "===========================================================================" << endl;
		cout << endl;
		cout << "Uang Bayar   = Rp. "; cin >> bay;
		balik = bay - tot;
		cout << "Uang Kembali = Rp. " << balik << ",-" << endl;
	}
	if (pil == '8') {
		int h_sewa, sub_tot, diskon, tot, bay, balik;
		h_sewa = 300000;
		sub_tot = l_sewa * h_sewa;
		if (l_sewa >= 14) (diskon = sub_tot * 0.3);
		else (diskon = sub_tot * 0);
		tot = sub_tot - diskon;
		cout << "===========================================================================" << endl;
		cout << "Nama Penyewa                   : " << nama << endl;
		cout << "Kode Mobil (1/2/3/4/5/6/7/8)   : " << pil << endl;
		cout << "Jenis Mobil                    : YAMAHA NEW NMAX" << endl;
		cout << "Harga Sewa/Hari                : " << h_sewa << endl;
		cout << "Lama peminjaman                : " << l_sewa << " hari" << endl;
		cout << "Sub Total                      : Rp " << sub_tot << ",-" << endl;
		cout << "Diskon                         : Rp " << diskon << ",-" << endl;
		cout << "Total Bayar                    : Rp " << tot << ",-" << endl;
		cout << "===========================================================================" << endl;
		cout << endl;
		cout << "Uang Bayar   = Rp. "; cin >> bay;
		balik = bay - tot;
		cout << "Uang Kembali = Rp. " << balik << ",-" << endl;
	}
	else {
		cout << "PEMBELIAN BERHASIL";
		cout << endl;
	}
	cout << endl;
	cout << "Apakah Sobat Ingin Coba Lagi ? [Y/T] : ";
	cin >> yt;
	cout << endl;

	if (yt == 'Y' || yt == 'y')
	{
		goto home;
	}
	if (yt == 'T' || yt == 't')
	{
		goto selesai;
	}
selesai:
	cout << "===========================================================================" << endl;
	cout << "                 TERIMA KASIH SUDAH BERBELANJA DISINI            " << endl;
	cout << "===========================================================================" << endl;

	system("pause");

	return 0;
}  