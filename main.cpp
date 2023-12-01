/*******************************************************************************
**                                                                                           **
**                    Jiedi(China nanjing)Ltd.                                 **
**	      版权归夏曹俊所有，此代码只能作为学习参考                **                                                                            **
*******************************************************************************/

/*****************************FILE INFOMATION***********************************
**
** Project        : XVideoEdit
** Description : 视频编辑器
** Contact       : xiacaojun@qq.com
**	 QQ群	      ：559312905 (可以咨询问题)
** 微信公众号  : jiedi2007
**
*******************************************************************************/
#include "XVideoUI.h"
#include <QtWidgets/QApplication>
//#include "XAudio.h"
int main(int argc, char *argv[])
{
	//XAudio::Get()->ExportA("test3.mp4", "test3.mp3");
	//XAudio::Get()->Merge("test3.avi", "test3.mp3", "out3.avi");

    QApplication a(argc, argv);
    XVideoUI w;
    w.show();
    return a.exec();
}
