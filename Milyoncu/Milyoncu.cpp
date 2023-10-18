#include <iostream>
using namespace std;
int main()
{
	do
	{
		cout << "Milyoncu oyununa xos gelmisiz\n";
		cout << "Komekleriniz:\n";
		cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
		cout << "Sual 1: Birinci Dunya Muharibesi ne vaxt baslayib?\n";
		cout << "A)1910		B)1920		C)1930		D)1945\n";

		cout << "Komekden istifade edirsiz?\n";
		cout << "1.He		2.Yox\n";
		int komekSecim;
		int komek;
		cin >> komekSecim;
		if (komekSecim == 1)
		{
			cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
			cout << "Seciminizi daxil edin:\n";
			cin >> komek;
			if (komek == 1)
			{
				cout << "A)1910		C)1930\n";
				cout << "Komekden istifade edirsiz?\n";
				cout << "1.He		2.Yox\n";
				cin >> komekSecim;
				if (komekSecim == 1)
				{
					cout << "2.Auditoriyanin komeyi		3.Dosta zeng\n";
					cin >> komek;
					if (komek == 2)
					{
						cout << "A ---- 73%\n";
						cout << "C------17%\n";
						cout << "Sizin variantiniz:	\n";
						char Variant;
						cin >> Variant;
						if (int(Variant) == 65 || int(Variant) == 97)
						{
							cout << "Tebrikler siz 2-ci suala kecdiz\n";
						}
						else if (int(Variant) == 67 || int(Variant) == 99)
						{
							cout << "Tessufki siz uduzduz\n";

						}
						else
						{
							cout << "Bele bir secim yoxdur\n";
						}
					}
					else if (komek == 3)
					{
						cout << "Dost deyir----C\n";
						cout << "Sizin variantiniz:	\n";
						char Variant;
						cin >> Variant;
						if (int(Variant) == 65 || int(Variant) == 97)
						{
							cout << "Tebrikler siz 2-ci suala kecdiz\n";
						}
						else if (int(Variant) == 67 || int(Variant) == 99)
						{
							cout << "Tessufki siz uduzduz\n";

						}
						else
						{
							cout << "Bele bir secim yoxdur\n";
						}
					}
					else
					{
						cout << "Bele bir secim imkaniniz yoxdur\n";
					}

				}
				else if (komekSecim == 2)
				{
					cout << "Sizin variantiniz:	\n";
				}
				char Variant;
				cin >> Variant;

				if (int(Variant) == 65 || int(Variant) == 97)
				{
					cout << "Tebrikler siz 2-ci suala kecdiz\n";
				}
				else if (int(Variant) == 67 || int(Variant) == 99)
				{
					cout << "Tessufki siz uduzduz\n";
				}
				else
				{
					cout << "Bele bir secim yoxdur\n";
				}

			}
			else if (komek == 2)
			{
				cout << "A----54%\nB----21%\nC----13%\nD----12%\n";
				cout << "Komekden istifade edirsiz?\n";
				cout << "1.He		2.Yox\n";
				cin >> komekSecim;
				if (komekSecim == 1)
				{
					cout << "1.50/50		3.Dosta zeng\n";
					cin >> komek;
					if (komek == 1)
					{
						cout << "A)1910		B)1920\n";
						cout << "Sizin variantiniz:	\n";
						char Variant;
						cin >> Variant;
						if (int(Variant) == 65 || int(Variant) == 97)
						{
							cout << "Tebrikler siz 2-ci suala kecdiz\n";
						}
						else if (int(Variant) == 66 || int(Variant) == 98)
						{
							cout << "Tessufki siz uduzduz\n";

						}
						else
						{
							cout << "Bele bir secim yoxdur\n";
						}

					}

				}
				else if (komekSecim == 2)
				{
					cout << "Sizin variantiniz:	\n";
				}
				char Variant;
				cin >> Variant;

				if (int(Variant) == 65 || int(Variant) == 97)
				{
					cout << "Tebrikler siz 2-ci suala kecdiz\n";
				}
				else if (int(Variant) == 67 || int(Variant) == 99)
				{
					cout << "Tessufki siz uduzduz\n";

				}

			}
			else if (komek == 3)
			{
				cout << "Dost deyir----C\n";
				cout << "Komekden istifade edirsiz?\n";
				cout << "1.He		2.Yox\n";
				cin >> komekSecim;
				if (komekSecim == 1)
				{
					cout << "1.50/50		2.Auditoriyanin komeyi\n";
					cin >> komek;
					if (komek == 1)
					{
						cout << "A)1910		C)1930\n";
						cout << "Sizin variantiniz:	\n";
						char Variant;
						cin >> Variant;
						if (int(Variant) == 65 || int(Variant) == 97)
						{
							cout << "Tebrikler siz 2-ci suala kecdiz\n";
						}
						else if (int(Variant) == 66 || int(Variant) == 98)
						{
							cout << "Tessufki siz uduzduz\n";

						}
						else
						{
							cout << "Bele bir secim yoxdur\n";
						}

					}

				}
				else if (komekSecim == 2)
				{
					cout << "Sizin variantiniz:	\n";
				}
				char Variant;
				cin >> Variant;

				if (int(Variant) == 65 || int(Variant) == 97)
				{
					cout << "Tebrikler siz 2-ci suala kecdiz\n";
				}
				else if (int(Variant) == 67 || int(Variant) == 99)
				{
					cout << "Tessufki siz uduzduz\n";
				}
				else
				{
					cout << "Bele bir secim yoxdur\n";
				}


			}

		}
		else if (komekSecim == 2)
		{
			cout << "Sizin variantiniz:	\n";
		}
		char Variant;
		cin >> Variant;

		if (int(Variant) == 65 || int(Variant) == 97)
		{
			cout << "Tebrikler siz 2-ci suala kecdiz\n";
		}
		else if (int(Variant) == 66 || int(Variant) == 67 || int(Variant) == 68 || int(Variant) == 98 || int(Variant) == 99 || int(Variant) == 100)
		{
			cout << "Tessufki siz uduzduz\n";

		}
		else
		{
			cout << "Bele bir secim yoxdur\n";
		}

		system("pause");

		system("cls");
	} while (true);
	

	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 2: Dunyanin en qedim sivilizasiyasi hansidir?\n";
	//cout << "A)Mesopotamiya		B)Sumer		C)Misir		D)Roma\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim2;
	//cin >> komekSecim2;
	//if (komekSecim2 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim2 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant2;
	//cin >> Variant2;

	//if (int(Variant2) == 65 || int(Variant2) == 97)
	//{
	//	cout << "Tebrikler siz 3-cu suala kecdiz\n";
	//}
	//else if (int(Variant2) == 66 || int(Variant2) == 67 || int(Variant2) == 68 || int(Variant2) == 98 || int(Variant2) == 99 || int(Variant2) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");


	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 3: Xilafetin zeiflediyi dovrde Bizans imperiyasi, ermeni ve gurcu feodallardan ibaret vahid xristian blokuna qarsi mübarizenin taleyi hell olunurdu:\n";
	//cout << "A)Bizans cebhesinde	B)Iran cebhesinde		C)Azerbaycan cebhesinde		D)Avropa cebhesinde\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim3;
	//cin >> komekSecim3;
	//if (komekSecim3 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim3 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant3;
	//cin >> Variant3;

	//if (int(Variant3) == 67 || int(Variant3) == 99)
	//{
	//	cout << "Tebrikler siz 4-cu suala kecdiz\n";
	//}
	//else if (int(Variant3) == 66 || int(Variant3) == 65 || int(Variant3) == 68 || int(Variant3) == 98 || int(Variant3) == 97 || int(Variant3) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");



	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 4: Selcuqlar dovrunde Azerbaycanda meydana gelen torpaq mulkiyyet formasi:\n";
	//cout << "A)Soyurqal torpaq sahibliyi	B)Tiyul torpaq sahibliyi		C)Iqta torpaq sahibliyi		D)Uc torpaq sahibliyi\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim4;
	//cin >> komekSecim4;
	//if (komekSecim4 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim4 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant4;
	//cin >> Variant4;

	//if (int(Variant4) == 68 || int(Variant4) == 100)
	//{
	//	cout << "Tebrikler siz 5-ci suala kecdiz\n";
	//}
	//else if (int(Variant4) == 66 || int(Variant4) == 65 || int(Variant4) == 67 || int(Variant4) == 98 || int(Variant4) == 97 || int(Variant4) == 99)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");

	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 5: Sonuncu Selcuq hokmdari:\n";
	//cout << "A)Sultan Sencer	B)I Togrul		C)Alp Arslan		D)I Meliksah\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim5;
	//cin >> komekSecim5;
	//if (komekSecim5 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim5 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant5;
	//cin >> Variant5;

	//if (int(Variant5) == 65 || int(Variant5) == 97)
	//{
	//	cout << "Tebrikler siz 6-ci suala kecdiz\n";
	//}
	//else if (int(Variant5) == 66 || int(Variant5) == 67 || int(Variant5) == 68 || int(Variant5) == 98 || int(Variant5) == 99 || int(Variant5) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");


	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 6: Selcuq sultanlarinin veliehdlerinin terbiyecileri adlanirdi:\n";
	//cout << "A)Emirler	B)Atabeyler		C)Sultanlar		D)Merzbanlar\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim6;
	//cin >> komekSecim6;
	//if (komekSecim6 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim6 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant6;
	//cin >> Variant6;

	//if (int(Variant6) == 66 || int(Variant6) == 98)
	//{
	//	cout << "Tebrikler siz 7-ci suala kecdiz\n";
	//}
	//else if (int(Variant6) == 65 || int(Variant6) == 67 || int(Variant6) == 68 || int(Variant6) == 97 || int(Variant6) == 99 || int(Variant6) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");


	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 7: Selcuq sultanlarinin veliehdlerinin terbiyecileri adlanirdi:\n";
	//cout << "A)Emirler	B)Atabeyler		C)Sultanlar		D)Merzbanlar\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim7;
	//cin >> komekSecim7;
	//if (komekSecim7 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim7 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant7;
	//cin >> Variant7;

	//if (int(Variant7) == 66 || int(Variant7) == 98)
	//{
	//	cout << "Tebrikler siz 8-ci suala kecdiz\n";
	//}
	//else if (int(Variant7) == 65 || int(Variant7) == 67 || int(Variant7) == 68 || int(Variant7) == 97 || int(Variant7) == 99 || int(Variant7) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");



	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 8: Selcuq sultanlarinin veliehdlerinin terbiyecileri adlanirdi:\n";
	//cout << "A)Emirler	B)Atabeyler		C)Sultanlar		D)Merzbanlar\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim8;
	//cin >> komekSecim8;
	//if (komekSecim8 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim8 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant8;
	//cin >> Variant8;

	//if (int(Variant8) == 66 || int(Variant8) == 98)
	//{
	//	cout << "Tebrikler siz 9-cu suala kecdiz\n";
	//}
	//else if (int(Variant8) == 65 || int(Variant8) == 67 || int(Variant8) == 68 || int(Variant8) == 97 || int(Variant8) == 99 || int(Variant8) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");



	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 9: Selcuq sultanlarinin veliehdlerinin terbiyecileri adlanirdi:\n";
	//cout << "A)Emirler	B)Atabeyler		C)Sultanlar		D)Merzbanlar\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim9;
	//cin >> komekSecim9;
	//if (komekSecim9 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim9 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant9;
	//cin >> Variant9;

	//if (int(Variant9) == 66 || int(Variant9) == 98)
	//{
	//	cout << "Tebrikler siz 10-cu suala kecdiz\n";
	//}
	//else if (int(Variant9) == 65 || int(Variant9) == 67 || int(Variant9) == 68 || int(Variant9) == 97 || int(Variant9) == 99 || int(Variant9) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");



	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 10: Selcuq sultanlarinin veliehdlerinin terbiyecileri adlanirdi:\n";
	//cout << "A)Emirler	B)Atabeyler		C)Sultanlar		D)Merzbanlar\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim10;
	//cin >> komekSecim10;
	//if (komekSecim10 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim10 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant10;
	//cin >> Variant10;

	//if (int(Variant10) == 66 || int(Variant10) == 98)
	//{
	//	cout << "Tebrikler siz 11-ci suala kecdiz\n";
	//}
	//else if (int(Variant10) == 65 || int(Variant10) == 67 || int(Variant9) == 68 || int(Variant10) == 97 || int(Variant10) == 99 || int(Variant10) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");



	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 11: Selcuq sultanlarinin veliehdlerinin terbiyecileri adlanirdi:\n";
	//cout << "A)Emirler	B)Atabeyler		C)Sultanlar		D)Merzbanlar\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim11;
	//cin >> komekSecim11;
	//if (komekSecim11 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim11 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant11;
	//cin >> Variant11;

	//if (int(Variant11) == 66 || int(Variant11) == 98)
	//{
	//	cout << "Tebrikler siz Son-cu suala kecdiz\n";
	//}
	//else if (int(Variant11) == 65 || int(Variant11) == 67 || int(Variant11) == 68 || int(Variant11) == 97 || int(Variant11) == 99 || int(Variant11) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");


	//cout << "Komekleriniz:\n";
	//cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//cout << "Sual 12: Selcuq sultanlarinin veliehdlerinin terbiyecileri adlanirdi:\n";
	//cout << "A)Emirler	B)Atabeyler		C)Sultanlar		D)Merzbanlar\n";

	//cout << "Komekden istifade edirsiz?\n";
	//cout << "1.He		2.Yox\n";
	//int komekSecim12;
	//cin >> komekSecim12;
	//if (komekSecim12 == 1)
	//{
	//	cout << "1.50/50		2.Auditoriyanin komeyi		3.Dosta zeng\n";
	//}
	//else if (komekSecim12 == 2)
	//{
	//	cout << "Sizin variantiniz:	\n";
	//}
	//char Variant12;
	//cin >> Variant12;

	//if (int(Variant12) == 66 || int(Variant12) == 98)
	//{
	//	cout << "Siz Qalibsiz";
	//}
	//else if (int(Variant12) == 65 || int(Variant12) == 67 || int(Variant12) == 68 || int(Variant12) == 97 || int(Variant12) == 99 || int(Variant12) == 100)
	//{
	//	cout << "Tessufki siz uduzduz\n";

	//}
	//else
	//{
	//	cout << "Bele bir secim yoxdur";
	//}
	///*int secim;
	//enum Komekler
	//{
	//	YariYari=1, AuditoriyaninKomeyi, DostaZeng
	//};
	//switch (Komekler(secim))
	//{
	//case YariYari:

	//	break;
	//case AuditoriyaninKomeyi:

	//	break;
	//case DostaZeng:

	//	break;
	//default:
	//	break;
	//}*/
	//system("pause");
	//system("cls");

	//cout << "Tebrikler siz qalibsiz";
}