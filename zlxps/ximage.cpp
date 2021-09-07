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


//��ͼ��
void XImage::Open()
{
	//��ͼ���û�ѡ��ͼƬ
	QString filename = QFileDialog::getOpenFileName(this, QStringLiteral("��ͼƬ"), "", QStringLiteral("֧�ֵĸ�ʽ(*.png *.jpg *.bmp)")); 
	if (filename.isEmpty()) return;
	if (!src.load(filename)) return;


}

void XImage::paintEvent(QPaintEvent* ev)
{
	QPainter p(this);
	


	//��ʾԭͼ
	if(!src.isNull())
	p.drawImage(0, 0, src);
}