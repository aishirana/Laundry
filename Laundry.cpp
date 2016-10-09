#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <windows.h>

void awal();
void loading();
void exit();
void heading();
void menu_utama();
void identitas();
void tanggal();
void tanggal_kilat();
void tanggal_biasa();
void back_menu();

void menu_kiloan();
void pil_kiloan_kilat();
void kiloan_kilat();
void struk_kiloan_kilat();
void pil_kiloan_biasa();
void kiloan_biasa();
void struk_kiloan_biasa();

void menu_potongan();
void pil_potongan_kilat();
void potongan_kilat();
void struk_potongan_kilat();
void pil_potongan_biasa();
void potongan_biasa();
void struk_potongan_biasa();

//deklarasi global
int tgl, bln, thn, max_tgl, pil_menu_utama, pil_menu_kiloan, pil_menu_potongan, kilat, biasa, diskon1, diskon2, kilat_potongan_p, kilat_potongan_np, biasa_potongan_p, biasa_potongan_np;
float berat, harga_kilat_kiloan, harga_biasa_kiloan, harga_kilat_potongan, harga_biasa_potongan;
char nama[100], alamat[100], tlp[100], back;

int main()
{
system("COLOR 0B"); //memnampilkan warna program background dan tulisan; 0:hitam, B:aqua
awal();
}
   //menampilkan awal program: loading, heading, identitas, tanggal, dan menu utama
	void awal()
   {
   loading();
   heading();
   identitas();
   tanggal();
   menu_utama();
   }

   	//loading: menampilkan delay saat membuka program
   	void loading()
		{
		cout<<"\n\n\n\n\t\t\t\tPlease wait\n\n\n\n";
		cout<<"\t\tLoading";
		for(int i=0;i<20;i++)
			{
			cout<<". ";
  			Sleep(50);
			}
		cout<<endl;
		clrscr();
		}

      //exit: menampilkan delay saat menutup program
      void exit()
   	{
   	cout<<"\n\n\n\n\n\t\tE x i t";
		for(int i=0;i<20;i++)
			{
			cout<<". ";
  			Sleep(50);
			}
  		}

   	//heading: bagian yang menyebutkan toko
   	void heading()
   	{
   	cout<<endl;
   	cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  		cout<<" /                                                                           /"<<endl;
  		cout<<" /           *         *     *   *   *    *   * *      * *     *   *         /"<<endl;
  		cout<<" /           *       *   *   *   *   **   *   *   *    *   *   *   *         /"<<endl;
  		cout<<" /           *       * * *   *   *   * *  *   *    *   * *     * * *         /"<<endl;
  		cout<<" /           *       *   *   *   *   *   **   *   *    *  *        *         /"<<endl;
  		cout<<" /           * * *   *   *   * * *   *    *   * *      *   *   * * *         /"<<endl;
  		cout<<" /                                                                           /"<<endl;
  		cout<<" /        BERSIH, WANGI, RAPIH, CEPAT, HIGIENIS, HEMAT, DAN TERPERCAYA       /"<<endl;
  		cout<<" /                                                                           /"<<endl;
  		cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  		cout<<endl;
   	cout<<endl;
   	}

      //identitas: menginputkan identitas pelanggan
   	void identitas()
   	{
   	cout<<" Nama Pelanggan		: "; gets(nama);
   	cout<<endl;
   	cout<<" Alamat			: "; gets(alamat);
   	cout<<endl;
   	cout<<" No Telpon		: "; gets(tlp);
   	cout<<endl;
   	}

      //tanggal: menginputkan tanggal kapan laundry diterima
   	void tanggal()
   	{
   	cout<<endl;
   	cout<<" Masukkan tanggal terima (dd mm yyyy): ";
   	cin>>tgl;
   	cin>>bln;
   	cin>>thn;
   	cout<<endl;
   	}

      //menu utama: menampilkan pilihan awal (kiloan atau potongan), dan menginputkan pilihan dengan menggunakan switch-case
   	void menu_utama()
   	{
   	clrscr();
   	cout<<endl;
   	cout<<"   "<<tgl<<" - "<<bln<<" - "<<thn<<endl;
   	cout<<endl;
		cout<<"   "<<nama<<endl;
   	cout<<endl;
   	cout<<"   "<<alamat<<endl;
   	cout<<endl;
   	cout<<"   "<<tlp<<endl;
   	cout<<endl;
   	cout<<endl;
   	heading();
   	cout<<"\t\t\t\tM E N U   U T A M A"<<endl;
   	cout<<endl;
   	cout<<endl;
   	cout<<"     1. CUCI/SETRIKA KILOAN"<<endl;
   	cout<<endl;
   	cout<<"     2. CUCI/SETRIKA POTONGAN"<<endl;
   	cout<<endl;
   	cout<<"     3. Exit"<<endl;
   	cout<<endl;
   	cout<<endl;
   	cout<<"  Masukkan nomor pilihan [1-3]: ";
   	cin>>pil_menu_utama;
   	switch(pil_menu_utama)
   		{
      	case 1:
      	menu_kiloan();
      	break;
      	case 2:
      	menu_potongan();
      	break;
      	case 3:
      	clrscr();
     		exit();
      	break;
      	default:
      	cout<<endl;
      	cout<<endl;
      	cout<<endl;
      	cout<<"  Pilihan anda tidak tercantum, ulangi kembali!!!"<<endl;
      	getch();
      	menu_utama();
      	}
   	}

         //menu kiloan: pilihan dari menu utama, menampilkan pilihan kiloan (kilat atau biasa), dan menginputkan pilihan kembali menggunakan switch-case
   		void menu_kiloan()
   		{
   		clrscr();
   		cout<<endl;
			cout<<"   "<<tgl<<" - "<<bln<<" - "<<thn<<endl;
   		cout<<endl;
			cout<<"   "<<nama<<endl;
			cout<<endl;
   		cout<<"   "<<alamat<<endl;
			cout<<endl;
   		cout<<"   "<<tlp<<endl;
   		heading();
   		cout<<"     1. KILOAN KILAT (1 Hari)"<<endl;
   		cout<<endl;
   		cout<<"     2. KILOAN BIASA (3 Hari)"<<endl;
   		cout<<endl;
   		cout<<"     3. Menu Utama"<<endl;
   		cout<<endl;
   		cout<<"     4. Exit"<<endl;
   		cout<<endl;
   		cout<<endl;
   		cout<<"  Masukkan nomor pilihan [1-4]: ";
   		cin>>pil_menu_kiloan;
   		switch(pil_menu_kiloan)
   			{
      		case 1:
      		pil_kiloan_kilat();
      		break;
      		case 2:
      		pil_kiloan_biasa();
      		break;
      		case 3:
      		menu_utama();
      		break;
      		case 4:
      		clrscr();
     			exit();
      		break;
      		default:
      		cout<<endl;
      		cout<<endl;
      		cout<<endl;
      		cout<<"  Pilihan anda tidak tercantum, ulangi kembali!!!"<<endl;
      		getch();
      		menu_kiloan();
      		}
   		}

               //pilihan kiloan kilat: dari menu kiloan, menampilkan pilihan kiloan kilat, menginputkan pilihan menggunakan if, dan menghitung harga total serta diskon
					void pil_kiloan_kilat()
   				{
   				clrscr();
   				cout<<endl;
					cout<<"   "<<tgl<<" - "<<bln<<" - "<<thn<<endl;
   				cout<<endl;
					cout<<"   "<<nama<<endl;
					cout<<endl;
  					cout<<"   "<<alamat<<endl;
					cout<<endl;
   				cout<<"   "<<tlp<<endl;
   				heading();
   				cout<<"\t\t\t PILIHAN KILOAN KILAT (1 Hari)"<<endl;
      			cout<<endl;
      			cout<<endl;
   				cout<<"     1. Setrika . . . . . . . . . . . . . . . . . . . . . . . Rp 5.000/kg"<<endl;
      			cout<<endl;
   				cout<<"     2. Cuci. . . . . . . . . . . . . . . . . . . . . . . . . Rp 7.000/kg"<<endl;
      			cout<<endl;
   				cout<<"     3. Cuci + Pewangi. . . . . . . . . . . . . . . . . . . . Rp 8.500/kg"<<endl;
      			cout<<endl;
   				cout<<"     4. Cuci + Setrika. . . . . . . . . . . . . . . . . . . . Rp 9.500/kg"<<endl;
      			cout<<endl;
   				cout<<"     5. Cuci + Pewangi + Setrika. . . . . . . . . . . . . . . Rp 11.000/kg"<<endl;
   				cout<<endl;
   				cout<<endl;
   				cout<<"  Masukkan nomor pilihan [1-5]: ";
   				cin>>kilat;
   				cout<<endl;
      			cout<<endl;
   				cout<<"  SILAHKAN MENIMBANG CUCIAN ANDA"<<endl;
   				cout<<endl;
      			cout<<"  Berat Cucian (kg): ";
   				cin>>berat;
   					{
      				if(kilat==1)
      					{
         				harga_kilat_kiloan=berat*5000;
         				}
						else if(kilat==2)
      					{
         				harga_kilat_kiloan=berat*7000;
	         			}
   	   			else if(kilat==3)
      					{
         				harga_kilat_kiloan=berat*8500;
	         			}
   	   			else if(kilat==4)
							{
         				harga_kilat_kiloan=berat*9500;
	         			}
   	   			else if(kilat==5)
      					{
         				harga_kilat_kiloan=berat*11000;
	         			}
         			else
         				{
            			pil_kiloan_kilat();
            			}
   	   			}
	   			cout<<endl;
   				cout<<"  Total: Rp "<<harga_kilat_kiloan<<endl;
      			cout<<endl;
  						{
		   			if (harga_kilat_kiloan >= 80000)
     						{
		      			diskon1=0.1*harga_kilat_kiloan;
     						diskon2=harga_kilat_kiloan-diskon1;
		      			cout<<"  Selamat anda mendapatkan diskon 10%"<<endl;
            			cout<<endl;
            			cout<<"  Total pembayaran: "<<diskon2<<endl;
    						}
        				}
  	   			getch();
      			struk_kiloan_kilat();
               back_menu();
      			}

                  //menghitung tanggal pengembalian cucian kilat (1 hari)
      				void tanggal_kilat()
      				{
      				if((tgl>0)&&(tgl<=31)&&(bln>0)&&(bln<=12)&&(thn>0))
							{
   						if(bln/8==0)
   							{
      						if(bln%2==1)
      							{
         						max_tgl=31;
         						}
      						else
      							{
         						if(bln==2)
         							{
            						if(thn%4==0)
            							{
               						max_tgl=29;
               						}
            						else
            							{
               						max_tgl=28;
               						}
            						}
         						else
         							{
            						max_tgl=30;
            						}
         						}
      						}
 							else
   							{
      						if(bln%2==1)
      							{
         						max_tgl=30;
         						}
      						else
      							{
         						max_tgl=31;
         						}
      						}
   						}

						if(tgl==max_tgl)
							{
   						if(bln==12)
   							{
      						tgl=1;
      						bln=1;
      						thn=thn+1;
      						}
   						else
   							{
      						tgl=1;
     	 						bln=1;
      						}
   						}
						else
							{
  							tgl=tgl+1;
 							}
   					}

                  //menampilkan struk total laundry kiloan kilat, outputnya; identitas pelanggan, berat, total, disko, dan pembayaran
      				void struk_kiloan_kilat()
      				{
      				clrscr();
      				cout<<endl;
  						cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  						cout<<" /                                                                         /"<<endl;
  						cout<<" /           *         *     *   *   *    *   * *      * *     *   *       /"<<endl;
  						cout<<" /           *       *   *   *   *   **   *   *   *    *   *   *   *       /"<<endl;
  						cout<<" /           *       * * *   *   *   * *  *   *    *   * *     * * *       /"<<endl;
  						cout<<" /           *       *   *   *   *   *   **   *   *    *  *        *       /"<<endl;
  						cout<<" /           * * *   *   *   * * *   *    *   * *      *   *   * * *       /"<<endl;
  						cout<<" /                                                                         /"<<endl;
  						cout<<" /        BERSIH, WANGI, RAPIH, CEPAT, HIGIENIS, HEMAT, DAN TERPERCAYA     /"<<endl;
  						cout<<" /                                                                         /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     "<<nama<<"                                                          /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     "<<alamat<<"                                                        /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     "<<tlp<<"                                                           /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     Laundry Kiloan Kilat (1 Hari)                                       /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     Berat          : "<<berat<<"                                        /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     Total          : "<<harga_kilat_kiloan<<"                           /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     Diskon         : "<<diskon1<<"                                      /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     Pembayaran     : "<<harga_kilat_kiloan-diskon1<<"                   /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				cout<<" /     Tanggal terima : "<<tgl<<" - "<<bln<<" - "<<thn<<"                  /"<<endl;
      				cout<<" /                                                                         /"<<endl;
      				tanggal_kilat();
      				cout<<" /     Tanggal kembali: "<<tgl<<" - "<<bln<<" - "<<thn<<"                  /"<<endl;
      				cout<<" /                                                                         /"<<endl;
  						cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  						cout<<endl;
                  }

                  //bagian yang berfungsi mengulang kembali menu awal
                  void back_menu()
                  {
                  cout<<"\n\n Apakah anda ingin kembali ke menu awal? [Y/T]: ";
            		cin>>back;
             		back=toupper(back);
            		if(back == 'Y')
            		menu_utama();
            		if(back == 'T')
      				clrscr();
  						exit();
                  }

               //pilihan kiloan biasa: dari menu kiloan, menampilkan pilihan kiloan biasa, menginputkan pilihan menggunakan if, dan menghitung harga total serta diskon
					void pil_kiloan_biasa()
 	  				{
  					clrscr();
 					cout<<endl;
					cout<<"   "<<tgl<<" - "<<bln<<" - "<<thn<<endl;
   				cout<<endl;
					cout<<"   "<<nama<<endl;
					cout<<endl;
	   			cout<<"   "<<alamat<<endl;
					cout<<endl;
	   			cout<<"   "<<tlp<<endl;
   				heading();
	   			cout<<"\t\t\t PILIHAN KILOAN BIASA (3 Hari)"<<endl;
      			cout<<endl;
      			cout<<endl;
   				cout<<"     1. Setrika . . . . . . . . . . . . . . . . . . . . . . . Rp 3.000/kg"<<endl;
      			cout<<endl;
	   			cout<<"     2. Cuci. . . . . . . . . . . . . . . . . . . . . . . . . Rp 5.000/kg"<<endl;
      			cout<<endl;
   				cout<<"     3. Cuci + Pewangi. . . . . . . . . . . . . . . . . . . . Rp 6.500/kg"<<endl;
      			cout<<endl;
	   			cout<<"     4. Cuci + Setrika. . . . . . . . . . . . . . . . . . . . Rp 7.500/kg"<<endl;
      			cout<<endl;
   				cout<<"     5. Cuci + Pewangi + Setrika. . . . . . . . . . . . . . . Rp 9.000/kg"<<endl;
	   			cout<<endl;
   				cout<<endl;
	   			cout<<"  Masukkan nomor pilihan [1-5]: ";
   				cin>>biasa;
	   			cout<<endl;
      			cout<<"  SILAHKAN MENIMBANG CUCIAN ANDA"<<endl;
					cout<<endl;
     				cout<<"  Berat Cucian (kg): ";
   				cin>>berat;
	   				{
   	   			if(biasa==1)
      					{
							harga_biasa_kiloan=berat*3000;
   	      			}
						else if(biasa==2)
	      				{
   	      			harga_biasa_kiloan=berat*5000;
      	   			}
	      			else if(biasa==3)
   	   				{
      	   			harga_biasa_kiloan=berat*6500;
         				}
	      			else if(biasa==4)
							{
      	   			harga_biasa_kiloan=berat*7500;
         				}
	      			else if(biasa==5)
   	   				{
      	   			harga_biasa_kiloan=berat*9000;
         				}
       				else
         				{
            			pil_kiloan_biasa();
            			}
	      			}
   				cout<<endl;
	   			cout<<"  Total: Rp "<<harga_biasa_kiloan<<endl;
      			cout<<endl;
  						{
		   			if (harga_biasa_kiloan >= 80000)
  							{
		      			diskon1=0.1*harga_biasa_kiloan;
		      			diskon2=harga_biasa_kiloan-diskon1;
 		     				cout<<"  Selamat anda mendapatkan diskon 10%"<<endl;
            			cout<<endl;
            			cout<<"  Total pembayaran: "<<diskon2<<endl;
		      			}
		   			}
    				cout<<endl;
      			getch();
      			struk_kiloan_biasa();
      			back_menu();
      			}

                  //menghitung tanggal pengembalian cucian biasa (3 hari)
   					void tanggal_biasa()
      					{
      					if((tgl>0)&&(tgl<=31)&&(bln>0)&&(bln<=12)&&(thn>0))
								{
   							if(bln/8==0)
   								{
      							if(bln%2==1)
      								{
         							max_tgl=31;
         							}
      							else
      								{
         							if(bln==2)
         								{
            							if(thn%4==0)
            								{
               							max_tgl=29;
               							}
            							else
            								{
               							max_tgl=28;
               							}
            							}
         							else
         								{
            							max_tgl=30;
            							}
         							}
      							}
 								else
   								{
      							if(bln%2==1)
      								{
         							max_tgl=30;
         							}
      							else
      								{
         							max_tgl=31;
         							}
      							}
   							}

							if(tgl==max_tgl)
								{
   							if(bln==12)
   								{
      							tgl=3;
      							bln=1;
      							thn=thn+1;
      							}
   							else
   								{
      							tgl=3;
     	 							bln=1;
      							}
   							}
							else
								{
  								tgl=tgl+3;
 								}
   						}

                  //menampilkan struk total laundry kiloan biasa, outputnya; identitas pelanggan, berat, total, disko, dan pembayaran
  						void struk_kiloan_biasa()
      				{
      				clrscr();
      				cout<<endl;
  						cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  						cout<<" /                                                                            "<<endl;
  						cout<<" /           *         *     *   *   *    *   * *      * *     *   *          "<<endl;
  						cout<<" /           *       *   *   *   *   **   *   *   *    *   *   *   *          "<<endl;
  						cout<<" /           *       * * *   *   *   * *  *   *    *   * *     * * *          "<<endl;
  						cout<<" /           *       *   *   *   *   *   **   *   *    *  *        *          "<<endl;
  						cout<<" /           * * *   *   *   * * *   *    *   * *      *   *   * * *          "<<endl;
  						cout<<" /                                                                            "<<endl;
  						cout<<" /        BERSIH, WANGI, RAPIH, CEPAT, HIGIENIS, HEMAT, DAN TERPERCAYA        "<<endl;
  						cout<<" /                                                                            "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     "<<nama<<"                                                             "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     "<<alamat<<"                                                           "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     "<<tlp<<"                                                              "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     Laundry Kiloan Biasa (3 Hari)                                          "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     Berat          : "<<berat<<"                                           "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     Total          : "<<harga_biasa_kiloan<<"                              "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     Diskon         : "<<diskon1<<"                                         "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     Pembayaran     : "<<harga_biasa_kiloan-diskon1<<"                      "<<endl;
      				cout<<" /                                                                            "<<endl;
      				cout<<" /     Tanggal terima : "<<tgl<<" - "<<bln<<" - "<<thn<<"                     "<<endl;
      				cout<<" /                                                                            "<<endl;
      				tanggal_biasa();
      				cout<<" /     Tanggal kembali: "<<tgl<<" - "<<bln<<" - "<<thn<<"                     "<<endl;
      				cout<<" /                                                                            "<<endl;
  						cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  						cout<<endl;
      				}

         //menu potongan: pilihan dari menu utama, menampilkan pilihan potongan (kilat atau biasa), dan menginputkan pilihan kembali menggunakan switch-case
   		void menu_potongan()
   		{
   		clrscr();
   		cout<<endl;
			cout<<"   "<<tgl<<" - "<<bln<<" - "<<thn<<endl;
   		cout<<endl;
			cout<<"   "<<nama<<endl;
			cout<<endl;
   		cout<<"   "<<alamat<<endl;
			cout<<endl;
   		cout<<"   "<<tlp<<endl;
   		heading();
   		cout<<"     1. POTONGAN KILAT (1 Hari)"<<endl;
   		cout<<endl;
   		cout<<"     2. POTONGAN BIASA (3 Hari)"<<endl;
   		cout<<endl;
   		cout<<"     3. Menu Utama"<<endl;
   		cout<<endl;
   		cout<<"     4. Exit"<<endl;
   		cout<<endl;
   		cout<<endl;
   		cout<<"  Masukkan nomor pilihan [1-4]: ";
   		cin>>pil_menu_potongan;
   		switch(pil_menu_potongan)
   			{
      		case 1:
      		pil_potongan_kilat();
      		break;
      		case 2:
      		pil_potongan_biasa();
      		break;
      		case 3:
      		menu_utama();
      		break;
      		case 4:
      		clrscr();
     			exit();
      		break;
      		default:
      		cout<<endl;
      		cout<<endl;
      		cout<<endl;
      		cout<<"  Pilihan anda tidak tercantum, ulangi kembali!!!"<<endl;
      		getch();
      		menu_potongan();
      		}
   		}

            //pilihan potongan kilat: dari menu potongan, menampilkan pilihan potongan kilat, menginputkan pilihan menggunakan if, dan menghitung harga total serta diskon
				void pil_potongan_kilat()
      		{
      		clrscr();
      		cout<<endl;
				cout<<"   "<<tgl<<" - "<<bln<<" - "<<thn<<endl;
   			cout<<endl;
				cout<<"   "<<nama<<endl;
				cout<<endl;
  				cout<<"   "<<alamat<<endl;
				cout<<endl;
 	 			cout<<"   "<<tlp<<endl;
      		heading();
      		cout<<"\t\t\t PILIHAN POTONGAN KILAT (1 Hari)"<<endl;
      		cout<<endl;
      		cout<<endl;
      		cout<<"     1. Pakaian (Jas, Kebaya, dll). . . . . . . . . . . . . . Rp 13.000/pcs"<<endl;
      		cout<<endl;
      		cout<<"     2. Non-Pakaian (Bed Cover, Selimut, Boneka, dll) . . . . Rp 28.000/pcs"<<endl;
      		cout<<endl;
      		cout<<"     3. Pakaian + Non-Pakaian"<<endl;
      		cout<<endl;
      		cout<<endl;
      		cout<<"  Masukkan nomor pilihan [1-3]: ";
      		cin>>kilat;
      		cout<<endl;
      		cout<<"  SILAHKAN MENIMBANG CUCIAN ANDA"<<endl;
      		cout<<endl;
      			{
         		if(kilat==1)
         			{
         			cout<<"  Potongan Cucian Pakaian (pcs): ";
            		cin>>kilat_potongan_p;
         			cout<<endl;
         			harga_kilat_potongan=kilat_potongan_p*13000;
         			cout<<"  Total: Rp "<<harga_kilat_potongan<<endl;
            		cout<<endl;
         				{
           				if(harga_kilat_potongan >= 100000)
      	     				{
                  		diskon1=0.1*harga_kilat_potongan;
               			diskon2=harga_kilat_potongan-diskon1;
               			cout<<"  Selamat anda mendapatkan diskon 10%"<<endl;
       		  				cout<<endl;
               			cout<<"  Total pembayaran: "<<diskon2<<endl;
                  		}
           				}
         			}
					else if(kilat==2)
         			{
        				cout<<"  Potongan Cucian Non-Pakaian (pcs): ";
						cin>>kilat_potongan_np;
    					cout<<endl;
            		harga_kilat_potongan=kilat_potongan_np*28000;
     					cout<<"  Total: Rp "<<harga_kilat_potongan<<endl;
            		cout<<endl;
         				{
          				if(harga_kilat_potongan >= 100000)
        						{
                  		diskon1=0.1*harga_kilat_potongan;
       		  				diskon2=harga_kilat_potongan-diskon1;
         	   			cout<<"  Selamat anda mendapatkan diskon 10%"<<endl;
               			cout<<endl;
               			cout<<"  Total pembayaran: "<<diskon2<<endl;
                  		}
            			}
         			}
         		else if(kilat==3)
         			{
        	 			cout<<"  Potongan Cucian Pakaian (pcs): ";
         			cin>>kilat_potongan_p;
            		cout<<endl;
         			cout<<"  Potongan Cucian Non-Pakaian (pcs): ";
         			cin>>kilat_potongan_np;
         			cout<<endl;
            		harga_kilat_potongan=((kilat_potongan_p*13000)+(kilat_potongan_np*28000));
         			cout<<"  Total: Rp "<<harga_kilat_potongan<<endl;
            		cout<<endl;
         				{
            			if(harga_kilat_potongan >= 100000)
            				{
               			diskon1=0.1*harga_kilat_potongan;
            				diskon2=harga_kilat_potongan-diskon2;
               			cout<<"  Selamat anda mendapatkan diskon 10%"<<endl;
               			cout<<endl;
               			cout<<"  Total pembayaran: "<<diskon2<<endl;
                  		}
            			}
           			}
         		else
         			{
        	 			pil_potongan_kilat();
         			}
         		}
      		cout<<endl;
      		getch();
      		struk_potongan_kilat();
      		back_menu();
      		}

               //menampilkan struk total laundry potongan kilat, outputnya; pakaian atau non-pakaian, total, diskon, dan pembayaran
      			void struk_potongan_kilat()
      			{
      			clrscr();
      			cout<<endl;
  					cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  					cout<<" /                                                                            "<<endl;
  					cout<<" /           *         *     *   *   *    *   * *      * *     *   *          "<<endl;
  					cout<<" /           *       *   *   *   *   **   *   *   *    *   *   *   *          "<<endl;
  					cout<<" /           *       * * *   *   *   * *  *   *    *   * *     * * *          "<<endl;
  					cout<<" /           *       *   *   *   *   *   **   *   *    *  *        *          "<<endl;
  					cout<<" /           * * *   *   *   * * *   *    *   * *      *   *   * * *          "<<endl;
  					cout<<" /                                                                            "<<endl;
  					cout<<" /        BERSIH, WANGI, RAPIH, CEPAT, HIGIENIS, HEMAT, DAN TERPERCAYA        "<<endl;
  					cout<<" /                                                                            "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     "<<nama<<"                                                             "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     "<<alamat<<"                                                           "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     "<<tlp<<"                                                              "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Laundry Potongan Kilat (1 Hari)                                        "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Pakaian        : "<<kilat_potongan_p<<"                                "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Non-Pakaian    : "<<kilat_potongan_np<<"                               "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Total          : "<<harga_kilat_potongan<<"                            "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Diskon         : "<<diskon1<<"                                         "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Pembayaran     : "<<harga_kilat_potongan-diskon1<<"                    "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Tanggal terima : "<<tgl<<" - "<<bln<<" - "<<thn<<"                     "<<endl;
      			cout<<" /                                                                            "<<endl;
      			tanggal_kilat();
      			cout<<" /     Tanggal kembali: "<<tgl<<" - "<<bln<<" - "<<thn<<"                     "<<endl;
      			cout<<" /                                                                            "<<endl;
  					cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  					cout<<endl;
      			}

            //pilihan potongan kilat: dari menu potongan, menampilkan pilihan potongan kilat, menginputkan pilihan menggunakan if, dan menghitung harga total serta diskon
      		void pil_potongan_biasa()
      		{
      		clrscr();
      		cout<<endl;
				cout<<"   "<<tgl<<" - "<<bln<<" - "<<thn<<endl;
   			cout<<endl;
				cout<<"   "<<nama<<endl;
				cout<<endl;
  				cout<<"   "<<alamat<<endl;
				cout<<endl;
 	 			cout<<"   "<<tlp<<endl;
      		heading();
      		cout<<"\t\t\t PILIHAN POTONGAN BIASA (3 Hari)"<<endl;
      		cout<<endl;
      		cout<<endl;
      		cout<<"     1. Pakaian (Jas, Kebaya, dll). . . . . . . . . . . . . . Rp 10.000/pcs"<<endl;
      		cout<<endl;
      		cout<<"     2. Non-Pakaian (Bed Cover, Selimut, Boneka, dll) . . . . Rp 25.000/pcs"<<endl;
      		cout<<endl;
      		cout<<"     3. Pakaian + Non-Pakaian"<<endl;
      		cout<<endl;
      		cout<<endl;
      		cout<<"  Masukkan nomor pilihan [1-3]: ";
      		cin>>biasa;
      		cout<<endl;
      		cout<<"  SILAHKAN MENIMBANG CUCIAN ANDA"<<endl;
      		cout<<endl;
      			{
         			if(biasa==1)
         			{
         			cout<<"  Potongan Cucian Pakaian (pcs): ";
         			cin>>biasa_potongan_p;
         			cout<<endl;
            		harga_biasa_potongan=biasa_potongan_p*10000;
         			cout<<"  Total: Rp "<<harga_biasa_potongan<<endl;
            		cout<<endl;
         				{
           				if(harga_biasa_potongan >= 100000)
      	     				{
                  		diskon1=0.1*harga_biasa_potongan;
       		  				diskon2=harga_biasa_potongan-diskon1;
               			cout<<"  Selamat anda mendapatkan diskon 10%"<<endl;
               			cout<<endl;
               			cout<<"  Total pembayaran: "<<diskon2<<endl;
                  		}
           				}
         			}
         		else if(biasa==2)
         			{
        				cout<<"  Potongan Cucian Non-Pakaian (pcs): ";
 		    			cin>>biasa_potongan_np;
    					cout<<endl;
            		harga_biasa_potongan=biasa_potongan_np*25000;
     					cout<<"  Total: Rp "<<harga_biasa_potongan<<endl;
            		cout<<endl;
         				{
          				if(harga_biasa_potongan >= 100000)
        						{
                  		diskon1=0.1*harga_biasa_potongan;
       		  				diskon2=harga_biasa_potongan-diskon1;
               			cout<<"  Selamat anda mendapatkan diskon 10%"<<endl;
                        cout<<endl;
               			cout<<"  Total pembayaran: "<<diskon2<<endl;
                  		}
            			}
         			}
         		else if(biasa==3)
         			{
        	 			cout<<"  Potongan Cucian Pakaian (pcs): ";
         			cin>>biasa_potongan_p;
         			cout<<endl;
            		cout<<"  Potongan Cucian Non-Pakaian (pcs): ";
         			cin>>biasa_potongan_np;
         			cout<<endl;
            		harga_biasa_potongan=(biasa_potongan_p*10000)+(biasa_potongan_np*25000);
         			cout<<"  Total: Rp "<<harga_biasa_potongan<<endl;
            		cout<<endl;
         				{
            			if(harga_biasa_potongan >= 100000)
            				{
                  		diskon1=0.1*harga_biasa_potongan;
            				diskon2=harga_biasa_potongan-diskon1;
               			cout<<"  Selamat anda mendapatkan diskon 10%"<<endl;
               			cout<<endl;
               			cout<<"  Total pembayaran: "<<diskon2<<endl;
                  		}
            			}
           			}
         		else
         			{
        	 			pil_potongan_biasa();
         			}
         		}
      		cout<<endl;
      		getch();
      		struk_potongan_biasa();
      		back_menu();
      		}

               //menampilkan struk total laundry potongan biasa, outputnya; pakaian atau non-pakaian, total, diskon, dan pembayaran
      			void struk_potongan_biasa()
      			{
      			clrscr();
      			cout<<endl;
  					cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  					cout<<" /                                                                            "<<endl;
  					cout<<" /           *         *     *   *   *    *   * *      * *     *   *          "<<endl;
  					cout<<" /           *       *   *   *   *   **   *   *   *    *   *   *   *          "<<endl;
  					cout<<" /           *       * * *   *   *   * *  *   *    *   * *     * * *          "<<endl;
  					cout<<" /           *       *   *   *   *   *   **   *   *    *  *        *          "<<endl;
  					cout<<" /           * * *   *   *   * * *   *    *   * *      *   *   * * *          "<<endl;
  					cout<<" /                                                                            "<<endl;
  					cout<<" /        BERSIH, WANGI, RAPIH, CEPAT, HIGIENIS, HEMAT, DAN TERPERCAYA        "<<endl;
  					cout<<" /                                                                            "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     "<<nama<<"                                                             "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     "<<alamat<<"                                                           "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     "<<tlp<<"                                                              "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Laundry Potongan Biasa (3 Hari)                                        "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Pakaian        : "<<biasa_potongan_p<<"                                "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Non-Pakaian    : "<<biasa_potongan_np<<"                               "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Total          : "<<harga_biasa_potongan<<"                            "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Diskon         : "<<diskon1<<"                                         "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Pembayaran     : "<<harga_biasa_potongan-diskon1<<"                    "<<endl;
      			cout<<" /                                                                            "<<endl;
      			cout<<" /     Tanggal terima : "<<tgl<<" - "<<bln<<" - "<<thn<<"                     "<<endl;
      			cout<<" /                                                                            "<<endl;
      			tanggal_biasa();
      			cout<<" /     Tanggal kembali: "<<tgl<<" - "<<bln<<" - "<<thn<<"                     "<<endl;
      			cout<<" /                                                                            "<<endl;
  					cout<<" / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /"<<endl;
  					cout<<endl;
      			}
