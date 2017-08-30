# Maniaplanet 4 classes

This is a history of Maniaplanet 4 classes. Check out the [commit history](https://github.com/codecat/maniaplanet4-classes/commits/master) for the juicy details. Updated whenever there is a new update for Maniaplanet.

## Generate header file

Just run the release build of Openplanet, which will generate the file.

## cpp_files.txt

Run this command on logs build:

	strings /d/Games/ManiaPlanet/ManiaPlanetLogs.exe | grep -ioe '\(source\|codebasetrunknondev\)\\.*\.\(cpp\|h\)' | sort | uniq -i > cpp_files.txt

You can download the logs build [here](http://files.v04.maniaplanet.com/setups/ManiaPlanetLogs.zip).
