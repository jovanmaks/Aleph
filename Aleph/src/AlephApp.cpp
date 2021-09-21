#include "../../Engine/src/Engine.h"
/* #include <Engine.h> */


class Aleph : public Engine::Application
{

    public:
  Aleph()
    {

    }


    ~Aleph()
    {
      
    }
};

Engine::Application* Engine::CreateApplication()
{

  return new Aleph();
}
