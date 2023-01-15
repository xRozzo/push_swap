/*
** EPITECH PROJECT, 2022
** info_file
** File description:
** ls bootstrap
*/
#include <pwd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/sysmacros.h>
#include "dirent.h"
#include <sys/types.h>
#include "lib/my/utils/my.h"
#include <unistd.h>

int main(int argc, char* argv[])
{
    if (argc == 1) {
        return (84);
    }
    if (argc == 2) {
        return (0);
    }
    create_list(argc, argv);
    return (0);
}
