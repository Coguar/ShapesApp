#pragma once
#include "Button.h"

namespace ui
{
	typedef std::shared_ptr<ui::CButton> CButtonPtr;

	class CToolBar : public ui::CBaseControl
	{
	public:
		CToolBar(sf::RenderWindow & window);
		virtual ~CToolBar() = default;
		void OnDraw(sf::RenderTarget& target, sf::RenderStates states) const override;

	//	virtual void OnDraw(sf::RenderTarget& target, sf::RenderStates states) const;
		void InsertChild(const CButtonPtr & control, unsigned index) const override;
	//	void OnEvent(sf::Event const& event);

	private:

		std::vector<CBaseControlPtr> m_children;

		sf::RectangleShape m_background;

	};

}
