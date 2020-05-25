#include "qcustomplot_TracerExt.h"

QCPItemTracerExt::QCPItemTracerExt(QCustomPlot *parentPlot) :
	QCPItemTracer(parentPlot)
{

}

QCPItemTracerExt::~QCPItemTracerExt()
{

}

bool QCPItemTracerExt::updatePosition()
{
	bool bRet = QCPItemTracer::updatePosition();
	if (bRet == false)
		return false;

	QPointF pt = position->coords();
	// ������ġ ���.
	position->setCoords(pt.rx(), 0);
	return bRet;
}
