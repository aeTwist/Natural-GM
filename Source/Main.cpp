/*-
 *  Copyright (c) 2014 Daniel Hrabovcak
 *
 *  This program is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU Lesser General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or (at your
 *  option) any later version.
 *
 *  This program is distributed in the hope that it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 *  for more details.
**/
#include <QApplication>
#include "SDIEditorWindow.hpp"
#include "PluginManager.hpp"

#include <QOpenGLFunctions>
#include <QDebug>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	NGM::Widget::SDIEditorWindow window;
	window.show();
	NGM::Manager::PluginManager pluginManager;
	QWidget *dialog = pluginManager.dialog();
	dialog->show();
	int ret = app.exec();
	delete dialog;
	return ret;
}
