g++ -o auto_installer auto_installer.cpp default.cpp nvidia.cpp yaypkg.cpp debiannvidia.cpp

# Derleme başarılıysa ekrana bilgi verir
if [ $? -eq 0 ]; then
    echo 'Compilation process finished please us "./auto_installer"'
else
    echo "Compilation process failed!"
fi
