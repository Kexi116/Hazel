#pragma once

#include "RenderCommand.h"

namespace Hazel
{

	class Renderer
	{
	public:
		//������ʼ
		static void BeginScene();
		//��������
		static void EndScene();
		//��Ⱦ�����ύ
		static void Submit(const std::shared_ptr<VertexArray>& vertexArray);

		inline static RendererAPI::API GetAPI() { return RendererAPI::GetAPI(); }
	};

}