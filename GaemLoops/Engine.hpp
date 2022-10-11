
namespace Gaem {
    class Engine {
        bool shouldClose;

    protected:
        void setShouldClose(); 

        virtual void beforeInit();
        virtual void afterInit();
        virtual void beforeUpdate();
        virtual void afterUpdate();
        virtual void beforeDraw();
        virtual void afterDraw();
        virtual void beforeClose();
        virtual void afterClose();
        
        virtual void init();
        virtual void update();
        virtual void draw();
        virtual void wait();
        virtual void close();

    public:
        void loop();
    };
}