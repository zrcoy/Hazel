#pragma once
#include "Application.h"
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
    Hazel::Log::Init();
    HZ_CORE_TRACE("Initialized Log!");
    HZ_INFO("Hello");   
    Hazel::Application* app = Hazel::CreateApplication();
    app->Run();
    delete app;
}

#endif
