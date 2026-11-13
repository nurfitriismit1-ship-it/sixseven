#ifndef RULE_BASED_FILLTERING_HPP
#define RULE_BASED_FILLTERING_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct mahasiswa {
    string nama;
    string npm;
    string program_studi;
    int semester;
    float ipk;
    int desil;
    string domisili;

};

struct beasiswa {
    string id_beasiswa;
    string nama_beasiswa;
    string jenis_beasiswa;
    int semester_min;
    int semester_max;
    float ipk_min;
    int desil;
    string domisili;
    string deadline;
    string persyaratan;
    string link_situs_resmi_beasiswa;
};

extern vector<beasiswa> dataBeasiswa;

void RuleBasedFilltering(const mahasiswa& mhs);

#endif
