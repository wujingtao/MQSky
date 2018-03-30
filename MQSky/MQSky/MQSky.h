#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MQSky.h"

class MQSky : public QMainWindow
{
	Q_OBJECT

public:
	MQSky(QWidget *parent = Q_NULLPTR);

private:
	Ui::MQSkyClass ui;
};
