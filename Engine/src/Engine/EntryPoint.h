#pragma once 

extern Engine::Application* Engine::CreateApplication();




int main (int argc, char** argv)
{
  printf( "Wooorksss.\n");
  auto app = Engine::CreateApplication();
  app->Run();
  delete  app;
}
