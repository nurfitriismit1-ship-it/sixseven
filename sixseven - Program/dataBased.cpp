#include "ruleBasedFilltering.hpp"

vector<beasiswa> dataBeasiswa = {
    {
        "B01",
        "KIP-Kuliah",
        "Pemerintah",
        1,
        8, 
        2.75,
        4,
        "",
        "3 February 2027 - 31 Oktober 2027.",
        "Pas foto, foto kondisi rumah, dokumen pendukung ekonomi "
        "(KIP/KKS/SKTM/Surat Desil), surat penghasilan orang tua, "
        "serta dokumen identitas dan pendidikan.",
        "Untuk informasi persyaratan dan informasi resmi lainnya silahkan klik link berikut: https://kip-kuliah.kemdiktisaintek.go.id/panduan"
    },
    {
        "B02",
        "Beasiswa Unggulan",
        "Pemerintah",
        0, 
        0, 
        3.25,
        0,
        "",
        "20 - 24 Agustus 2027.",
        "Dokumen akademik, sertifikat UKBI, sertifikat pengalaman "
        "organisasi dan prestasi (jika ada), serta esai 1.000-1.500 kata.",
        "Untuk informasi persyaratan dan informasi resmi lainnya silahkan klik link berikut: https://beasiswaunggulan.kemendikdasmen.go.id/faq/"
    },
    {
        "B03",
        "Djarum Beasiswa Plus",
        "Lembaga",
        4, 
        8, 
        3.00,
        0,
        "",
        "30 Maert - 10 Juni 2027.",
        "Pas foto berjas almamater, KTM, KTP, transkrip nilai "
        "yang dilegalisir, sertifikat organisasi atau prestasi, "
        "serta surat keterangan tidak menerima beasiswa lain.",
        "Untuk informasi persyaratan dan informasi resmi lainnya silahkan klik link berikut: https://djarumbeasiswaplus.org/our-program/regulation-djarum-beasiswa-plus"
    },
    {
        "B04",
        "Beasiswa Beasiswa Harita Nickel",
        "Perusahaan",
        2, 
        7, 
        3.00,
        0,
        "halmahera selatan",
        "10 November - 22 November 2027.",
        "Pas foto, foto rumah, KTP, KK, KTM, bukti pembayaran UKT, "
        "KHS, surat aktif kuliah, surat bebas sanksi akademik, "
        "surat pernyataan, esai, tulisan motivasi, rencana penggunaan "
        "dana beasiswa, sertifikat prestasi, dan buku rekening.",
        "Untuk informasi persyaratan dan informasi resmi lainnya silahkan klik link berikut: https://tbpnickel.com/id/harita-nickel-luncurkan-beasiswa-harita-gemilang-untuk-mahasiswa-pulau-obi-cek-persyaratannya" 
    },
    {
        "B05",
        "GenBI",
        "Perguruan Tinggi",
        3, 
        8, 
        3.00,
        0,
        "",
        "February - Agustus 2027.",
        "Biodata, KTP, KTM, KHS, surat pernyataan pendaftar, "
        "surat motivasi, surat keterangan tidak mampu (jika ada), "
        "surat rekomendasi tokoh akademik atau non-akademik, "
        "serta sertifikat prestasi (jika ada).",
        "Untuk informasi persyaratan dan informasi resmi lainnya silahkan klik link berikut: https://www.generasibaruindonesia.com/whatsnew/ptn"
    }
};
