#include "ruleBasedFilltering.hpp"
#include <limits>
#include <cctype>
#include <stdexcept>

int main() {
    mahasiswa mhs;

    cout << "====================================\n";
    cout << "  SISTEM REKOMENDASI BEASISWA KAMPUS\n";
    cout << "====================================\n";

    while (true) {
        bool valid = true;

        cout << "\n=== INPUT DATA MAHASISWA ===\n";

        cout << "Nama : ";
        getline(cin, mhs.nama);

        cout << "Npm : ";
        getline(cin, mhs.npm);

        cout << "Program studi : ";
        getline(cin, mhs.program_studi);

        cout << "Domisili : ";
        getline(cin, mhs.domisili);     

        cout << "Semester : ";

        string inputSemester;
        getline(cin, inputSemester);

        size_t posisiAngka =
            inputSemester.find_first_of("0123456789");

        if (posisiAngka == string::npos) {
            cout << "Semester harus mengandung angka.\n";
            continue;
        }

        try {
            mhs.semester =
                stoi(inputSemester.substr(posisiAngka));
        }
        catch (const exception& e) {
            cout << "Input semester tidak valid.\n";
            continue;
        }

        
        cout << "IPK (lebih dari 0 sampai 4.00) : ";
        if (!(cin >> mhs.ipk)) {
            cout << "IPK harus berupa angka.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Desil ekonomi (1 - 10) : ";
        if (!(cin >> mhs.desil)) {
            
            cout << "Desil harus berupa angka.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n=== VALIDASI PROFIL ===\n";

        if (mhs.nama.empty() || mhs.npm.empty() ||
            mhs.program_studi.empty() || mhs.domisili.empty()) {
            cout << "Data mahasiswa tidak boleh kosong.\n";
            valid = false;
        }

        if (mhs.semester < 1 || mhs.semester > 8 ) {
            cout << "Semester harus minimal 1 dan maksimal 8.\n";
            
            valid = false;
        }

        if (mhs.ipk <= 0 || mhs.ipk > 4.0) {
            cout << "IPK tidak valid! Masukkan IPK "
                 << "lebih dari 0 dan maksimal 4.00.\n";
            valid = false;
        }

        if (mhs.desil < 1 || mhs.desil > 10) {
            cout << "Desil harus antara 1 sampai 10.\n";
            valid = false;
        }

        
        //mengecek apakah domisili mengandung huruf
        bool adaHuruf = false;

        for (unsigned char huruf : mhs.domisili) {
            if (isalpha(huruf)) {
                adaHuruf = true;
                break;
            }
        }

        if (!adaHuruf) {
            cout << "Domisili harus berupa nama wilayah, "
                 << "bukan angka.\n";
            valid = false;
        }

        if (!valid) {
            cout << "\nData tidak valid. Silakan input "
                 << "kembali seluruh data mahasiswa.\n";
            continue;
        }

        cout << "Data mahasiswa berhasil divalidasi.\n";

        // Keluar jika semua data valid
        break;
    }

    // Filtering dijalankan setelah input valid
    RuleBasedFilltering(mhs);

    cout << "\nProgram selesai.\n";

    return 0;
}