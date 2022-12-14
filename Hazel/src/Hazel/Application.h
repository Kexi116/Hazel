#pragma once


#include "Window.h"
#include "Events/Event.h"
#include "Hazel/LayerStack.h"
#include "Hazel/Events/ApplicationEvent.h"

#include "Hazel/ImGui/ImGuiLayer.h"
#include "Hazel/Core/Timestep.h"


namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application() = default;
		void Run();
		void OnEvent(Event& e);
		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
		inline static Application& Get() { return *s_Instance; }
		inline Window& GetWindow() { return *m_Window; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

	private:
		std::unique_ptr<Window> m_Window;//????
		ImGuiLayer* m_ImGuiLayer;//ui????
		bool m_Running = true;
		LayerStack m_LayerStack;
		float m_LastFrameTime = 0.0f;

	private:
		static Application* s_Instance;
	};

	Application* CreateApplication();
}

