#include <fstream>
#include <string>
#include <filesystem>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#elif __APPLE__
#endif

int days_max = 365;
int hours_max = 24;

int DAYS_MAX = 365;
int HOURS_MAX = 24;
int MIN_MAX = 60;
int SEC_MAX = 60;

namespace fs = std::filesystem;

int main() {
#ifdef _WIN32
    ShellExecuteA(NULL, "open", "msedge.exe", NULL, NULL, SW_SHOWNORMAL);
#elif __APPLE__
    system("open -a Safari");
#endif
    std::string folderName = "panquehablaxd";
    fs::create_directory(folderName);

    while (true) {
        std::string fileName = "panquehabla" + std::to_string(days_max) + std::to_string(hours_max) + ".txt";
        std::string fullPath = folderName + "/" + fileName;

        std::ofstream outFile(fullPath);

        while (true) {
            std::string content = "Faltan " + std::to_string(DAYS_MAX) + " dias, " + std::to_string(HOURS_MAX) + " horas, " + std::to_string(MIN_MAX) + " minutos, " + std::to_string(SEC_MAX) + " segundos para la celebracion del dia del pan que habla";
            std::string content2 = "Faltan " + std::to_string(DAYS_MAX) + " dias, " + std::to_string(HOURS_MAX) + " horas, " + std::to_string(MIN_MAX) + " minutos, " + std::to_string(SEC_MAX) + " segundos para la celebracion del dia del pan que habla";
            std::string content3 = "Faltan " + std::to_string(DAYS_MAX) + " dias, " + std::to_string(HOURS_MAX) + " horas, " + std::to_string(MIN_MAX) + " minutos, " + std::to_string(SEC_MAX) + " segundos para la celebracion del dia del pan que habla";
            std::string content4 = "Faltan " + std::to_string(DAYS_MAX) + " dias, " + std::to_string(HOURS_MAX) + " horas, " + std::to_string(MIN_MAX) + " minutos, " + std::to_string(SEC_MAX) + " segundos para la celebracion del dia del pan que habla";
            if (outFile.is_open()) {
                outFile << content;
                outFile << content2;
                outFile << content3;
                outFile << content4;
            }

            if (SEC_MAX > 0) {
                SEC_MAX -= 1;
            } else {
                SEC_MAX = 59;
                if (MIN_MAX > 0) {
                    MIN_MAX -= 1;
                } else {
                    MIN_MAX = 59;
                    if (HOURS_MAX > 0) {
                        HOURS_MAX -= 1;
                    } else {
                        HOURS_MAX = 23;
                        if (DAYS_MAX > 0) {
                            DAYS_MAX -= 1;
                        } else {
                            break;
                        }
                    }
                }
            }
        }

        if (hours_max > 0) {
            hours_max -= 1;
        } else {
            hours_max = 23;
            if (days_max > 0) {
                days_max -= 1;
            } else {
                break;
            }
        }
    }
}