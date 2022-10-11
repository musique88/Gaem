
namespace Gaem {
    class Entity;

    class Component {
    protected:
        Entity* parentEntity;
    public: 
        virtual void init();
        virtual void update();
        virtual void draw();
        virtual void close();
    };
}