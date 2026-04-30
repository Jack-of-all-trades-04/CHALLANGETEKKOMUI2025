#include <stdio.h>
#include <unistd.h>
void ketik(const char *text, int delay) {
    while (*text) {
        printf("%c", *text++);
        fflush(stdout);
        usleep(delay);
    }
}
int main() {
    printf("\033[1;34m");
    printf("Written by Tekkom UI 2024\n");
    printf("\033[0m");

    printf("Kalau udah sukses jangan lupain aslab kalian ya :( \n");
    printf("ID Lines aslab 23: \n CH : christianhadiwijaya \n DS: daffsf \n MF: macropp\n JD: jesayadavidp\n BH: bnhrd\n\n");
    printf("ID Lines aslab 24: \n NA : 123dodol123 \n NZ: naputrizu \n DY: hikari.akira_\n\n");

    ketik("==>By Mukhtar Teknik Komputer UI 2025<==\n\n", 30000);
    ketik("Terima kasih sebesar-besarnya kepada aslab yang sudah membimbing dan membantu kami.\n\n", 25000);
    ketik("Walaupun kakak-kakak aslab dalam keadaan sangat sibuk, namun tetap meluangkan waktu untuk membimbing kami dengan sabar dan penuh dedikasi.\n\n", 25000);
    ketik("Saya sangat menghargai semua usaha dan kerja keras yang telah kakak-kakak aslab lakukan untuk membantu kami memahami materi dan menyelesaikan tugas.\n\n", 25000);
    ketik("Mulai dari penjelasan yang jelas, contoh yang relevan, hingga umpan balik yang konstruktif, semuanya sangat berarti bagi kami.\n\n", 25000);
    ketik("Saya merasa sangat beruntung memiliki aslab yang begitu peduli dan berdedikasi dalam membantu kami belajar.\n\n", 25000);
    ketik("Sekali lagi, terima kasih banyak kepada semua aslab atas dukungan dan bimbingannya.\n\n", 25000);
    ketik("Semoga ke depannya kita semua bisa terus belajar dan berkembang bersama.\n\n", 25000);
    ketik("Dari tugas terakhir ini, saya berharap ini bukanlah perpisahan dari kita semua.\n\n", 25000);
    ketik("Tetap semangat dan teruslah menjadi inspirasi bagi kami semua dan generasi selanjutnya.\n\n", 25000);
    ketik("Salam hangat dari saya,\nMukhtar Teknik Komputer UI 2025.\n\n", 30000);
    return 0;
}
