cmake_minimum_required(VERSION 3.12)
project(tareaextraclase2)

set(CMAKE_CXX_STANDARD 14)

add_executable(tareaextraclase2 main.cpp "Abstract Factory/Abstract.h" "Abstract Factory/Carros.h" "Abstract Factory/Cliente.h" "Observer/Observer.h" "Observer/Subject.h" "Adapter/Adaptador.h" "Adapter/Colones.h" "Adapter/IAdaptador.h" Facade/Carro.cpp Facade/Carro.h Facade/Motor.cpp Facade/Motor.h Facade/Tanque.cpp Facade/Tanque.h Facade/CajaMarchas.cpp Facade/CajaMarchas.h Facade/LucesFrente.cpp Facade/LucesFrente.h Facade/Llantas.cpp Facade/Llantas.h Facade/SistemaElectrico.cpp Facade/SistemaElectrico.h Facade/SistemaSeguridad.cpp Facade/SistemaSeguridad.h)