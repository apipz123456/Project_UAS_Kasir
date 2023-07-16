#include<iostream>
#include<string.h>
#include<time.h>
#include<iomanip>
using namespace std;




int main(){
	char nama[40],menu[50],balik,balik2;
	int makanan,jumlah,makan,total, bayar,kurang,bonus,kembalian,diskon;
	int harga[13]={299000, 250000, 12000, 8000,18000,3000,4000,12000,8000,7000,8000,9000},i=0,potongan;
	
    time_t now = time(0);
    char*dt= ctime(&now);
 
 	
 	system("cls");
	cout<<"                            = = = = = = = = = = = = = = =                                     "<< endl;
	cout<<"                        = = = = = = = =   =   = = = = = = = = =                               "<< endl;
	cout<<"                    = = = = = = = = =  =======  = = = = = = = = =                             "<< endl;
	cout<<"                  = = = = = = = = =  ===========   = = = = = = = = =                          "<< endl;
	cout<<"              = = = = = = = = = =  ===============  = = = = = = = = = =                       "<< endl;
	cout<<"          = = = = = = = = = = = = =  ===========   = = = = = = = = = = = =                    "<< endl;
	cout<<"        = = = = = = = = = = = = = = =  =======   = = = = = = = = = = = = = =                  "<< endl;
	cout<<"      = = = = = = = = = = = = = = = = =  ===   = = = = = = = = = = = = = = = =                "<< endl;
	cout<<"    ====================================  =  ==================================               "<< endl;
	cout<<"  ===============================================================================     ^^     "<< endl;
	cout<<" =================================================================================   |  |    "<< endl;
	cout<<"===================================================================================|| || ||  "<< endl;
	cout<<"||====    $$ $$ $$ $$ $$       $$ $$ $$ $$ $$ $$        $$ $$ $$ $$ $$ $$   ====||   $$$$   ||"<< endl;
	cout<<"||===  $$ $$ $$ $$  $$ $$     $$ $$ $$ $$ $$ $$ $$    $$ $$ $$ $$ $$ $$  $$   ==||  $$  $$  ||"<< endl;
	cout<<"||==  $$ $$          $$ $$    $$ $$ $$ $$ $$ $$ $$    $$ $$ $$ $$ $$ $$ $$ $$  =||  $$$$$   ||"<< endl;
	cout<<"||=   $$ $$                   $$ $$                   $$ $$           $$ $$ $$  ||  $$ $$   ||"<< endl;
    cout<<"||    $$ $$                   $$ $$                   $$ $$           $$ $$ $$  ||  $$  $$$ ||"<< endl;	
	cout<<"||    $$ $$                   $$ $$                   $$ $$           $$ $$ $$  ||         || "<< endl;
	cout<<"||    $$  $$ $$ $$  $$ $$     $$ $$ $$ $$ $$ $$ $     $$ $$           $$ $$ $$  ||   $$$$$  ||"<< endl;
	cout<<"||    $$ $$ $$ $$ $$ $$ $$    $$ $$ $$ $$ $$ $$ $$    $$ $$ $$ $$ $$ $$ $$ $$  =||  $$      ||"<< endl;
	cout<<"||    $$ $$          $$ $$    $$ $$ $$ $$ $$ $$ $     $$ $$ $$ $$ $$ $$ $$    ==||  $$$$$$  ||"<< endl;
    cout<<"||    $$ $$          $$ $$    $$ $$                   $$ $$ $$ $$ $$ $$      ===||  $$      ||"<< endl;
	cout<<"||    $$ $$          $$ $$    $$ $$                   $$ $$                =====||   $$$$$  ||"<< endl;
	cout<<"||    $$ $$          $$ $$    $$ $$                   $$ $$              =======||         || "<< endl;
	cout<<"||=   $$ $$          $$ $$    $$ $$ $$ $$ $$ $$ $$    $$ $$            =========||  $$  $$  ||"<< endl;
	cout<<"||===   $$ $$ $$ $$ $$ $$     $$ $$ $$ $$ $$ $$ $$    $$ $$       ==============||  $$ $    ||"<< endl;
	cout<<"||=====   $$ $$  $$ $$          $$ $$ $$ $$ $$        $$ $$    =================||  $$$     ||"<< endl;
	cout<<" |============================================================================= ||  $$ $    ||"<< endl;
	cout<<"   ======|| N U N G G I N G ||===================|| N U N G G I N G ||=======   ||  $$  $$ || "<< endl;
	cout<<"    ======================== || N U N G G I N G || ========================        || || ||    "<< endl;
	cout<<"      ==================================================================     || || || || || || || "<<endl;
	cout<<"                    =======================================       "<<endl;
	cout<<"            ========= ||   Jl.Yos Sudarso Timur KM 03  || ========="<<endl;
	cout<<"        ========= || Desa.Kedungpuji Kec.Gombong Kab.Kebumen || ========= "<<endl;
	cout<<"     =================== || JAWA TENGAH | INDONESIA  || ===================="<<endl;
	cout<<" =================================================================================    "<<endl;
	cout<<"||                        S E L A M A T    D A T A N G                           ||"<< endl;
	cout<<"||                  Hitung Menu Makanan Yang Telah Dinikmati                     ||"<<endl;
	cout<<"||===============================================================================||"<<endl;
	cout<<"||                                                                               ||"<<endl;
	cout<<"||            [1] Geprek Nungging + Hot + Teh Jumbo   = Rp.299.000               ||"<<endl;
	cout<<"||            [2] Geprek Nungging + Teh Jumbo         = Rp.250.000               ||"<<endl;
	cout<<"||            [3] Geprek + Teh Biasa                  = Rp.12.000                ||"<<endl;
	cout<<"||            [4] Geprek No_Teh                       = Rp.8.000                 ||"<<endl;
	cout<<"||            [5] Ayam Stik Kriukk                    = Rp.18.000                ||"<<endl;
	cout<<"||            [6] Es Jeruk / hangat                   = Rp.3.000                 ||"<<endl;
	cout<<"||            [7] Es Oyen                             = Rp.4.000                 ||"<<endl;
	cout<<"||            [8] Ayam Ricis                          = Rp.12.000                ||"<<endl;
	cout<<"||            [9] Jus Alpukat                         = Rp.8.000                 ||"<<endl;
	cout<<"||            [10] Jus Lokal (mangga,jambu,melon,dll) = Rp.7.000                 ||"<<endl;
	cout<<"||            [11] Soda Gembira Tumpeh-Tumpeh         = Rp.8.000                 ||"<<endl;
	cout<<"||            [12] Sop Mie Dingin                     = Rp.9.000                 ||"<<endl;
	cout<<"||-------------------------------------------------------------------------------||"<<endl;
	cout<<"||                       NB : Semua Menu Bonus Nasi                              ||"<<endl;
	cout<<"||          ANDA __________ BELANJA _____ ANDA ___________ BERAMAL               ||"<<endl;
	cout<<" =================================================================================" <<endl;
    

		
	
	cout <<" >> Masukkan Nama Anda : ";
	cin >>nama;
	
	do{
		
	cout<<endl;
	cout <<" >> Masukkan nomor pilihan menu favorit anda : ";
	cin >>makanan;
	
	
	switch(makanan){
		case 1:
			strcpy(menu," Geprek Nungging + Hot + Teh Jumbo ");
			cout<<" Menunya adalah                    : "<<menu<<endl;
		    cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : "<<jumlah*harga[i]<<endl;
			break;
		
		case 2:
			strcpy(menu," Geprek Nungging + Teh Jumbo ");
			i=1;
			cout<<" Menunya adalah                    : "<<menu<<endl;
			cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : "<<jumlah*harga[i]<<endl;
			break;
			
	    case 3:
	    	strcpy(menu," Geprek + Teh Biasa ");
	    	i=2;
	    	cout<<" Menunya adalah                    : "<<menu<<endl;
	    	cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : Rp. "<<jumlah*harga[i]<<endl;
	    	break;
	    	
	    case 4:
	        strcpy(menu,"Geprek No_Teh");
	        i=3;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : Rp. "<<jumlah*harga[i]<<endl;
	        break;
	        
	    case 5:
	        strcpy(menu,"Geprek No_Teh");
	        i=4;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : Rp. "<<jumlah*harga[i]<<endl;
	        break;
	    
		case 6:
	        strcpy(menu,"Geprek No_Teh");
	        i=5;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : Rp. "<<jumlah*harga[i]<<endl;
	        break;
			
	    case 7:
	        strcpy(menu,"Geprek No_Teh");
	        i=6;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : Rp. "<<jumlah*harga[i]<<endl;
	        break;
		
		case 8:
	        strcpy(menu,"Geprek No_Teh");
	        i=7;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : Rp. "<<jumlah*harga[i]<<endl;
	        break;
			
		case 9:
	        strcpy(menu,"Geprek No_Teh");
	        i=8;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : Rp. "<<jumlah*harga[i]<<endl;
	        break;
			
		case 10:
	        strcpy(menu,"Geprek No_Teh");
	        i=9;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : "<<jumlah*harga[i]<<endl;
	        break;
			
		case 11:
	        strcpy(menu,"Geprek No_Teh");
	        i=10;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : "<<jumlah*harga[i]<<endl;
	        break;
			
		case 12:
	        strcpy(menu,"Geprek No_Teh");
	        i=11;
	        cout<<" Menunya adalah                    : "<<menu<<endl;
	        cout<<" >> Masukan jumlah yang ternikmati : ";
		    cin>>jumlah;
		    total+=jumlah*harga[i];
		    cout<<" Total harga adalah                : "<<jumlah*harga[i]<<endl;
	        break;
			
		
			}cout<<" >> apakah ada menu yang telah anda nikmati lagi..??[Y/T]";
cin>>balik;
}while(balik=='Y'||balik=='y');
		cout<<" Total Pembayaran : Rp."<<total<<endl;
		cout<<endl;
		cout<<endl;
		
		if(total>=299000){
				cout <<" karna anda menikmati dengan harga melebihi batas-Max anda mendapatkan potongan Rp.15,000 gaess..."<<endl;
				diskon=total-15000;
				cout<<" harga setelah terserempet diskon : Rp."<<diskon<<endl;
			}
				
	cout<<">> Bayar di sini ya kak .....";
	cout<<" Rp. ";
	cin>>bayar;
	
	while (bayar < diskon){
		cout << " >>Maaf,, jumlah pembayaran anda kurang kak ....... "<<endl;
		cout << " >>silahkan lakukan pembayaran lagi  Rp. ";
		cin  >>kurang;
		 bayar += kurang;
		 cout<<endl;
		};
		
		kembalian = bayar - total;
		cout<< " >>Uang yang anda bayarkan : Rp. " << bayar << endl;
		cout<<" >>uang kembalian           : Rp. " << kembalian <<endl;
		
		
		
	
	cout <<endl;
	cout << "======================================================================================================" <<endl;
	cout << "|                                   || STRUCK PEMBAYARAN ||                                          |" <<endl;
	cout << "|                             ||   RUMAH MAKAN GEPREK NUNGGING   ||                                  |" <<endl;
	cout << "|                   || Jl. Yos Sudarso Timur KM03 Kedungpuji Gombong Kebumen ||                      |" <<endl;
	cout << "======================================================================================================" <<endl;
	cout << "|   NAMA    |       " <<setiosflags(ios::left)<<setw(20)<<nama<<" |                         TERIMAKASIH KAK.....              |"<<endl;
	cout << "|HARGA_TOTAL|     Rp." <<setiosflags(ios::left)<<setw(20)<<diskon<<"|          TELAH MAMPIR KERUMAH MAKAN GEPREK NUNGGING       |"<<endl;
    cout << "|TERBAYARKAN|     Rp." <<setiosflags(ios::left)<<setw(20)<<bayar<<"|                KAMI TUNGGU KEDATANGANYA KEMBALI           |"<<endl;
    cout << "|KEBALIAN   |     Rp." <<setiosflags(ios::left)<<setw(20)<<kembalian<<"|                        HATI-HATI DI JALAN                 |"<<endl;
	
		
    cout << "======================================================================================================"<<endl;
    cout << "                                                                            " <<setiosflags(ios::left)<<setw(80)<<dt<<endl;
		        
	
	
       
}
