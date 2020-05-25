#pragma once

#include <QWidget>
#include <QtCore>
namespace HT
{
	class HapticDeviceState;

	typedef  std::function<void(const HapticDeviceState*, const QVariantList &vList)> EVENT_SIGNAL;
	
	// 1st begin, stop.. end , update?? �����ΰ�??
	// 2st �÷��̵� time..
	typedef  std::function<void(int, double)> HPLAYER_EVENT_SIGNAL;
};


