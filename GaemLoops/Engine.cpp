#include "Engine.hpp"

using namespace Gaem;

void Engine::beforeInit() {
    
}

void Engine::afterInit() {
    
}

void Engine::beforeUpdate() {
    
}

void Engine::afterUpdate() {
    
}

void Engine::beforeDraw() {
    
}

void Engine::afterDraw() {
    
}

void Engine::beforeClose() {
    
}

void Engine::afterClose() {
    
}


void Engine::init() {
    
}

void Engine::update() {
    
}

void Engine::draw() {
    
}

void Engine::close() {
    
}

void Engine::wait() {
    
}

void Engine::setShouldClose() {
    shouldClose = true;
}

void Engine::loop() {
    beforeInit();
    init();
    afterInit();
    while(!shouldClose) {
        beforeUpdate();
        update();
        afterUpdate();
        beforeDraw();
        draw();
        afterDraw();
        wait();
    }
    beforeClose();
    close();
    afterClose();
}

 