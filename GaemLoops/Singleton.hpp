#pragma once

namespace Gaem {
    template<class T>
    class Singleton {
        static T* singleton = nullptr;
    public:
        static T* getInstance() {
            if(Singleton<T>::singleton == nullptr)
                *singleton = new T();
            return singleton;
        }
    };
}