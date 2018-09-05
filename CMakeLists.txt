cmake_minimum_required(VERSION 3.12)
project(tareaextraclase2)

set(CMAKE_CXX_STANDARD 14)

add_executable(tareaextraclase2 Aplicacion/main.cpp "Abstract Factory/Abstract.h" "Abstract Factory/Carros.h" "Abstract Factory/Cliente.h" "Observer/Observer.h" "Observer/Subject.h" "Adapter/Adaptador.h" "Adapter/Colones.h" "Adapter/IAdaptador.h" Facade/Carro.cpp Facade/Carro.h Facade/Motor.cpp Facade/Motor.h Facade/Tanque.cpp Facade/Tanque.h Facade/CajaMarchas.cpp Facade/CajaMarchas.h Facade/LucesFrente.cpp Facade/LucesFrente.h Facade/Llantas.cpp Facade/Llantas.h Facade/SistemaElectrico.cpp Facade/SistemaElectrico.h Facade/SistemaSeguridad.cpp Facade/SistemaSeguridad.h Builder/Plane.cpp Builder/Plane.h Builder/PlaneBuilder.cpp Builder/PlaneBuilder.h Builder/PropellerBuilder.cpp Builder/PropellerBuilder.h Builder/JetBuilder.cpp Builder/JetBuilder.h Builder/Director.cpp Builder/Director.h)