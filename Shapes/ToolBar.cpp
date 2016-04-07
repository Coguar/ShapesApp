#include "stdafx.h"
#include "ToolBar.h"

namespace ui
{
	CToolBar::CToolBar(sf::RenderWindow & window)
	{
		m_background.setSize({ float(window.getSize().x),  float(window.getSize().y * 0.15) });
		m_background.setFillColor(sf::Color(64, 64, 64, 255));


	}

	void CToolBar::OnDraw(sf::RenderTarget & target, sf::RenderStates states) const
	{
		target.draw(m_background, states);
	}
}
//
//
//	void CToolBar::InsertChild(const CButtonPtr & control)
//	{
//		m_children.push_back(control);
//	}
//
//	void CToolBar::OnEvent(sf::Event const& event)
//	{
//		for (auto & child : m_children)
//		{
//			child->OnEvent(event);
//		}
//	}
//
//
//	void CToolBar::OnDraw(sf::RenderTarget & target, sf::RenderStates states) const
//	{
//		target.draw(m_background, states);
//	}
//
//	void CToolBar::draw(sf::RenderTarget & target, sf::RenderStates states) const
//	{
//		OnDraw(target, states);
//
//		for (auto & child : m_children)
//		{
//			target.draw(*child, states);
//		}
//	}
//}