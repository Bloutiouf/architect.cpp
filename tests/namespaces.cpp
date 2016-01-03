namespace App
{
    typedef void (*Callback)(void);

    namespace UI
    {
        void render();
    }

    namespace Core
    {
        typedef Callback CoreCallback;

        void visit(CoreCallback callback)
        {
            callback();
        }

        void update(int i)
        {
            visit(UI::render);
        }

    }
}
