#include "CommandFunc.h"
#ifndef HELP_FUNCTION_HPP
#define HELP_FUNCTION_HPP

typest {
public:
    virtual func help() {
        BOLD_GREEN_COLOR
        printlnf("Scrift \n"
            "help arguments: \n"
            "printlnf <arg> \n"
            "scr <argument>\n"
            "home || default\n"
            "lsf || lsfile\n"
            "lsd || lsdir\n"
            "scr mkdir\n"
            "scr ls\n"
            "scr apt\n"
            "scr make\n"
            "readtext <file>\n"
            "addtext <file>\n"
            "nanoaddtext <file>\n"
            "pause || stop\n"
            "cls || brk \n"
            "cd <folder>\n"
            "rstr <number>\n"
            "username\n"
            "ls\n"
            "ctxt <name>\n"
            "fetcheya\n"
            "clear || clear!!!\n"
            "set_locale_system || slcl_sys\n"
            "ip || myip\n");
        BLACK_COLOR
    }
    virtual func hello() {
        BOLD_BLUE_COLOR
        printlnf("Welcome to ");
        BOLD_GREEN_COLOR
        printlnf("ScriftLang");
        BOLD_BLUE_COLOR
        printlnf(" Terminal\n");
        BOLD_GREEN_COLOR
        printlnf("ScriftLang "); 
        BOLD_YELLOW_COLOR
        printlnf("licensed with");
        BOLD_RED_COLOR
        printlnf(" GPLv3\n");
        BOLD_MAGENTA_COLOR
        printlnf("Copyright (c) 2020");
        BOLD_CYAN_COLOR
        printlnf(" Ferhat Gecdogan\n");
        BLACK_COLOR
    } 
} fhelp;

#endif // HELP_FUNCTION_HPP