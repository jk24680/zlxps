#pragma once

#include <QWidget>

class XImage : public QWidget
{
	Q_OBJECT

public:
	XImage(QWidget *parent=0);
	~XImage();
	void paintEvent(QPaintEvent* ev);
public slots:
	void Open();

protected:
	QImage src;



};
