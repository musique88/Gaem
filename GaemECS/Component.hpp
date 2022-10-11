
namespace Gaem {
    class Entity;

    class Component {
    protected:
        Entity* parentEntity;
    public: 
        void setParent(Entity* p);
        virtual void init();
        virtual void update();
        virtual void draw();
        virtual void close();
    };
}