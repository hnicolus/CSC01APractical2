
echo off
rmdir /S /Q bin
mkdir bin
mkdir src
g++ src\UserInput.cpp -o bin\UserInput.exe
g++ src\ApplyInterest.cpp -o bin\ApplyInterest.exe
g++ src\Output.cpp -o bin\Output.exe
cd bin
UserInput | ApplyInterest | ApplyInterest | ApplyInterest | Output.exe >> ../result.txt
pause