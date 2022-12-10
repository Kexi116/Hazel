#pragma once

#include <memory>
#include "Hazel/Renderer/Buffer.h"

namespace Hazel
{

	class VertexArray
	{
	public:
		virtual ~VertexArray() {};

		virtual void Bind() const = 0;
		virtual void Unbind()const = 0;
		//���VB
		virtual void AddVertexBuffer(const std::shared_ptr<VertexBuffer>& vertexBuffer) = 0;
		//����IB
		virtual void SetIndexBuffer(const std::shared_ptr<IndexBuffer>& indexBuffer) = 0;
		//��ȡVB
		virtual const std::vector<std::shared_ptr<VertexBuffer>>& GetVertexBuffers()const = 0;
		//��ȡIB
		virtual const std::shared_ptr<IndexBuffer>& GetIndexBuffer() const = 0;

		static VertexArray* Create();

	};

}