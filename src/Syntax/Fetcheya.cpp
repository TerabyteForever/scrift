/* MIT License
# Forked from https://github.com/FerhatGec/fetcheya
# Modified for Scrift
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include <chrono>

// Libraries 
#include "../../include/src/Scrift.hpp"
#include "../../include/src/synflang.hpp"
#include "../../Library/Colorized.hpp"
#include "../../Library/FileSystemPlusPlus.h"

#define FETCHEYA_VERSION "0.2"
#define FETCHEYA_STATUS "beta-1"

using namespace std; // Sorry...

const std::string compilation_time = __TIME__;
std::string ftime(compilation_time); // Convert

class systemInfo {
public:
	string EraseAllSubString(string & mainString, const string & erase) {
   	 size_t pos = string::npos;
   	 while((pos = mainString.find(erase)) != string::npos) {
   	     	mainString.erase(pos, erase.length());
   	 }
   		return mainString;
    	}

	void getOS() {
		fsplusplus::ReadFilePath("/etc/os-release"); 
	}
	
	void getCPU() {
		fsplusplus::ReadCPU();
	}

	void Test16bitColours() {
		colorized::PrintWith(colorized::Colorize(BOLD, BLACK).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, RED).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, GREEN).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, YELLOW).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, BLUE).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, CYAN).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_BLACK).c_str(), "███\n");
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_BLACK).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_RED).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_GREEN).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_YELLOW).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_BLUE).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_MAGENTA).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_CYAN).c_str(), "███");
		colorized::PrintWith(colorized::Colorize(BOLD, WHITE).c_str(), "███");	
	}

	string getSystem() {
		struct utsname buf;
		if(!uname(&buf)) { //Get name and information about current kernel.
			//printf("%s\n",buf.sysname);//Display the system name.
			return buf.sysname;
		} else {
			perror("uname");
			return "?";
		}
	}
	
	string getHostname() {
		struct utsname sysinfo;
		uname(&sysinfo);
		hostname = sysinfo.nodename;
		return hostname;
	}
	string getUsername() {
		username = getenv("USER");
		return username;
	}
	int getUserHostLength() {
		hostnameLength = getHostname().length();
		usernameLength = getUsername().length();
		UserHostLength = usernameLength + hostnameLength;
		return UserHostLength;
	}
	string getDevice() {
		ifstream device;
		filename = "/sys/devices/virtual/dmi/id/product_family";
		device.open(filename);
		if(device.good()){
			getline(device, deviceName);
		}
		device.close();
		return deviceName;
	}
	string getUptime() {
		struct sysinfo info;
		sysinfo(&info);
		uptime = info.uptime;
		if(uptime/60 >= 60) {
			uptimeHour = (uptime/60)/60;
			uptimeHourWhole = uptimeHour;
			uptimeMinutes = uptimeHour - uptimeHourWhole;
			uptimeMinutesWhole = uptimeMinutes * 60;
			if(uptimeHour >= 24) {
				uptimeDay = uptimeHour/24;
				uptimeDayWhole = uptimeDay;
				uptimeHour = uptimeDay - uptimeDayWhole;
				uptimeHour = uptimeHour * 24;
				uptimeHourWhole = uptimeHour;
				uptimeStream << uptimeDayWhole << "d " << uptimeHourWhole << "h " << uptimeMinutesWhole << "m";
			}
			else {
				uptimeStream << uptimeHourWhole << "h " << uptimeMinutesWhole << "m";
			}
		}
		else {
			uptimeMinutes = uptime/60;
			uptimeMinutesWhole = uptimeMinutes;
			uptimeStream << uptimeMinutesWhole << "m";
		}
		uptimeString = uptimeStream.str();
		return uptimeString;
	}
	string getShell() {
		shell = getenv("SHELL");
		shell.erase(0,5);
		return shell;
	}
	string getTerm() {
		terminal = getenv("TERM");
		return terminal;
	}
	string getKernel() {
		struct utsname sysinfo;
		uname(&sysinfo);
		kernelVersion = sysinfo.release;
		return kernelVersion;
	}
	string getArch() {
		struct utsname sysinfo;
		uname(&sysinfo);
		architecture = sysinfo.machine;
		return architecture;
	}
	string getEditor() {
		editor = getenv("EDITOR");
		return editor;
	}
	string getVisual() {
		visual = getenv("VISUAL");
		return visual;
	}
private:
	string distroLine, filename, hostname, username, deviceName,
		uptimeString, shell, terminal, kernelVersion, architecture,
		editor, visual, lineOne;
	double uptime, uptimeMinutes, uptimeHour, uptimeDay;
	int initialUptime, uptimeMinutesWhole, uptimeHourWhole, uptimeDayWhole, usernameLength,
		hostnameLength, UserHostLength;
	stringstream uptimeStream;
};

class Colours {
public:
	string getColourBar() {
		ColourBar =colourZero + colourOne + colourTwo + colourThree + colourFour + colourFive + colourSix + colourSeven;
		return ColourBar;
	}
	string getFullColourBar() {
		FullColourBar = getColourBar() + "\n" + colourEight + colourNine + colourTen + colourEleven + colourTwelve + colourThirteen + colourFourteen + colourFifteen;
		return FullColourBar;
	}
	string getTextColourNeutral() {
		NeutralText = "\033[0;37m";
		return NeutralText;
	}
	string getTextColourRed() {
		RedText = "\033[0;31m";
		return RedText;
	}
	string getTextColourGreen() {
		GreenText = "\033[0;32m";
		return GreenText;
	}
	string getTextColourYellow() {
		YellowText = "\033[0;33m";
		return YellowText;
	}
	string getTextColourBlue() {
		BlueText = "\033[0;34m";
		return BlueText;
	}
	string getTextColourMagenta() {
		MagentaText = "\033[0;35m";
		return MagentaText;
	}
	string getTextColourCyan() {
		CyanText = "\033[0;36m";
		return CyanText;
	}
private:
	string colourZero = "\033[7;30m  ", colourOne = "\033[7;31m  ", colourTwo = "\033[7;32m  ", colourThree = "\033[7;33m  ",
	       colourFour = "\033[7;34m  ", colourFive = "\033[7;35m  ", colourSix = "\033[7;36m  ", colourSeven = "\033[7;37m  ",
	       colourEight = "\033[7;90m  ", colourNine = "\033[7;91m  ", colourTen = "\033[7;92m  ", colourEleven = "\033[7;93m  ",
	       colourTwelve = "\033[7;94m  ", colourThirteen = "\033[7;95m  ", colourFourteen = "\033[7;96m  ", colourFifteen = "\033[7;97m  ",
	       ColourBar, FullColourBar, NeutralText, RedText, GreenText, YellowText, BlueText, MagentaText, CyanText;
};

int main() {
	int a = 0;
	bool control = false;
	systemInfo systemInfo;
	Colours Colours;
	string underline = "▂▂"; 
	colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_BLUE).c_str(), systemInfo.getUsername().c_str());
	colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_CYAN).c_str(), "@");  
	colorized::PrintWith(colorized::Colorize(BOLD, BLUE).c_str(), (systemInfo.getHostname() + " \n").c_str());
	for(int i = 0; i != systemInfo.getUserHostLength() + 1; i++) {
		colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_BLACK).c_str(), "▂");
		/*if(BLACK + i >= LIGHT_GRAY) {  
			if(LIGHT_BLACK + a > WHITE) {
				a = 0;
				colorized::PrintWith(colorized::Colorize(BOLD, BLACK + a).c_str(), (underline + "").c_str()); 	
				control = true;
				if(control == true) {
					break;
				}
			} else {
				colorized::PrintWith(colorized::Colorize(BOLD, LIGHT_BLACK + a).c_str(), (underline + "").c_str()); 
				a++;
			}
		} else {
			colorized::PrintWith(colorized::Colorize(BOLD, BLACK + i).c_str(), (underline + "").c_str());      
		}*/
	}         
	cout << "\033[1;36m" << " \n\nScrift Version: " << "\033[01;33m" <<  SCRIFT_VERSION << WBOLD_YELLOW_COLOR << hyphen << WBOLD_CYAN_COLOR << SCRIFT_STATUS << endl;                                
	cout << "\033[1;34m" << "Build: " << "\033[01;33m" << FETCHEYA_VERSION << "-" << FETCHEYA_STATUS << "-" << "fetcheyav" << systemInfo.EraseAllSubString(ftime, ":") << endl;
	cout << "\033[1;31m" << "OS Name:" << "\033[1;36m" << " " << fsplusplus::ReadOSName() << endl;
	cout << "\033[1;36m" << "Architecture:" << "\033[1;33m" << " " << systemInfo.getArch() << endl;
	cout << "\033[1;32m" << "Hostname:" << "\033[1;35m" << " " << systemInfo.getHostname() << endl;
	cout << "\033[1;34m" << "Kernel Name:" << "\033[1;35m" << " " <<  systemInfo.getSystem() << endl;
	cout << "\033[01;33m" << "Kernel Release:" << "\033[1;34m" << " "  << systemInfo.getKernel() << endl;
	cout << "\033[1;35m" << "CPU:" << "\033[1;31m" << " ";
	systemInfo.getCPU();
	cout << "\033[1;34m" << "Uptime:" << "\033[01;33m" << " "  <<  systemInfo.getUptime() << endl;
	cout << "\033[1;35m" << "Terminal:" << "\033[1;32m" << " "  << systemInfo.getTerm() << endl;
	cout << "\033[1;36m" << "Shell:" << "\033[1;31m" << " " << systemInfo.getShell() << endl << endl;
	systemInfo.Test16bitColours();
	cout << endl;
	return F_OK;
}

