#include "ruleBasedFilltering.hpp"
#include <cctype>

void RuleBasedFilltering(const mahasiswa& mhs) {
    vector<beasiswa> rekomendasiBeasiswa;

    for (const auto& beasiswa : dataBeasiswa) {

        if (beasiswa.semester_min > 0) {
            if (mhs.semester < beasiswa.semester_min) {
                continue;
            }
        }

        // Pemeriksaan semester maksimal
        if (beasiswa.semester_max > 0) {
            if (mhs.semester > beasiswa.semester_max) {
                continue;
            }
        }
                
            

        if (beasiswa.ipk_min > 0)
            if (mhs.ipk < beasiswa.ipk_min) {
                continue;
            } 
                
            

        if (beasiswa.desil > 0)
           if (mhs.desil > beasiswa.desil) {
                continue;
            } 
                
            

        // Pemeriksaan domisili
        if (!beasiswa.domisili.empty()) {
            string domisiliKecil = mhs.domisili;
            string domisiliBeasiswa = beasiswa.domisili;

            for (char& karakter : domisiliKecil) {
                karakter = static_cast<char>(
                    tolower(
                        static_cast<unsigned char>(karakter)
                    )
                );
            }

            for (char& karakter : domisiliBeasiswa) {
                karakter = static_cast<char>(
                    tolower(
                        static_cast<unsigned char>(karakter)
                    )
                );
            }

            if (domisiliKecil.find(domisiliBeasiswa)
                == string::npos) {
                continue;
            }
        }

        // Beasiswa lolos semua persyaratan
        rekomendasiBeasiswa.push_back(beasiswa);
    }

//==============================================================================================
cout << "\n==================================================\n";
cout << "                 HASIL REKOMENDASI\n";
cout << "==================================================\n";

cout << "\nNama Mahasiswa : " << mhs.nama << '\n';
cout << "\nNpm            : " << mhs.npm << '\n';
cout << "\nProgram Studi  : " << mhs.program_studi << '\n';

if (rekomendasiBeasiswa.empty()) {
    cout << "\nTidak ada beasiswa yang sesuai.\n";
    return;
}

int nomor = 1;

for (auto& rekomendasi : rekomendasiBeasiswa) {

    cout << "\n--------------------------------------------------\n";
    cout << "[" << nomor << "] "
         << rekomendasi.nama_beasiswa << '\n';
    cout << "--------------------------------------------------\n";

    cout << "ID Beasiswa       : "
         << rekomendasi.id_beasiswa << '\n';

    cout << "Jenis Beasiswa    : "
         << rekomendasi.jenis_beasiswa << '\n';

    cout << "Deadline          : "
         << rekomendasi.deadline << '\n';

    cout << "\nPersyaratan:\n";
    cout << rekomendasi.persyaratan << '\n';

    cout << "\nLink Pendaftaran:\n";
    cout << rekomendasi.link_situs_resmi_beasiswa<< '\n';

    nomor++;
    }

    cout << "\n==================================================\n";
    cout << "Catatan:\n";
    cout << "Hasil merupakan rekomendasi awal. Periksa kembali\n";
    cout << "persyaratan resmi sebelum mendaftar.\n";
    cout << "==================================================\n";

}
