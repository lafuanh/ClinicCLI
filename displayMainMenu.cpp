//
//  display.cpp
//  UTS_StructurData
//
//  Created by naufal adyatma on 20/05/24.
//

#include <iostream>
using namespace std;

void daftarMainMenu(){
    cout << "Clinic Menu:\n";
    cout << "1. Antri Pasien\n";
    cout << "2. Panggil Pasien\n";
    cout << "3. Input Rekam Medis\n";
   // cout << "4. DataBase\n";
    cout << "4. Exit\n";

}

void displayMainMenu() {
    bool isRun =true;
    int pilih;
    
    while (isRun) {
        daftarMainMenu();
        cout << "Pilih Menu: ";
        cin >> pilih;
        
        switch (pilih) {
            case 1:
                //display antrean
                break;
            case 2:
                //dequeue patient
                break;
            case 3:
                //show list of after exam
                // pick to add rekam medis
                break;
            case 4:
                isRun = false;
                break;
                            
        }
        

        
    }
}


