# Maniaplanet 4 classes

This is a history of Maniaplanet 4 classes.

## Generate header file

Just run the release build of Openplanet, which will generate the file.

## cpp_files.txt

Run this:

	strings /d/Games/ManiaPlanet4Beta/ManiaPlanet4_04_07.exe | grep -ioe '\(source\|codebasetrunknondev\)\\.*\.\(cpp\|h\)' | sort | uniq -i > cpp_files.txt
