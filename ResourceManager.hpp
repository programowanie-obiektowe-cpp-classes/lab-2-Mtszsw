#pragma once

#include "Resource.hpp"

class Resource {
    // ... (Implementacja klasy Resource)
public:
    double get() {
        // Zwracanie wartości zasobu (symulowane pobranie z serwera, itp.)
        return 42.0; // Przykładowa wartość zasobu
    }
};

class ResourceManager {
private:
    Resource resource; // Zarządzany obiekt typu Resource

public:
    ResourceManager() : resource() {} // Konstruktor domyślny, inicjalizuje zarządzany zasób

    // Konstruktor kopiujący, przenoszący, operator przypisania, itp.
    ResourceManager(const ResourceManager&) = default;
    ResourceManager& operator=(const ResourceManager&) = default;
    ResourceManager(ResourceManager&&) = default;
    ResourceManager& operator=(ResourceManager&&) = default;
    ~ResourceManager() = default;

    double get() {
        return resource.get(); // Wywołanie metody get z zarządzanego zasobu
    }
};