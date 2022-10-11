#include <unordered_map>
#include <string>
#include <optional>

namespace Gaem {
    class Component;

    class Entity {
        std::unordered_map<std::string, Component*> components;
    public:
        std::optional<Component*> getComponent(std::string name);
        void addComponent(std::string name, Component* c);
    };
}