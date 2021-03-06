/*
Copyright 2010  Christian Vetter veaac.fdirct@gmail.com

This file is part of MoNav.

MoNav is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

MoNav is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with MoNav.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef NODEMODIFICATORWIDGET_H
#define NODEMODIFICATORWIDGET_H

#include "types.h"

#include <QFrame>

namespace Ui {
	class NodeModificatorWidget;
}

class NodeModificatorWidget : public QFrame
{
	Q_OBJECT

public:

	explicit NodeModificatorWidget( QWidget* parent = 0 );
	~NodeModificatorWidget();

	void setModificator( const MoNav::NodeModificator& modificator );
	MoNav::NodeModificator modificator();

private:
	Ui::NodeModificatorWidget* m_ui;
};

#endif // NODEMODIFICATORWIDGET_H
