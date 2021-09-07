#include "ximage.h"
#include <QPainter>
#include <QFileDialog>

XImage::XImage(QWidget *parent)
	: QWidget(parent)
{
}

XImage::~XImage()
{
}


//打开图像
void XImage::Open()
{
	//打开图像用户选择图片
	QString filename = QFileDialog::getOpenFileName(this, QStringLiteral("打开图片"), "", QStringLiteral("支持的格式(*.png *.jpg *.bmp)")); 
	if (filename.isEmpty()) return;
	if (!src.load(filename)) return;


}

void XImage::paintEvent(QPaintEvent* ev)
{
	QPainter p(this);
	


	//显示原图
	if(!src.isNull())
	p.drawImage(0, 0, src);
}