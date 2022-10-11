#include "GaemECS/Entity.hpp"
#include "GaemECS/Component.hpp"

using namespace Gaem;

std::optional<Component*> Entity::getComponent(std::string name) {
    auto it = components.find(name);
    if(it == components.end())
        return std::nullopt;
    return std::make_optional(&it->second);
}
