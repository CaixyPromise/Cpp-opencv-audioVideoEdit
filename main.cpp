/*******************************************************************************
**                                                                                           **
**                    Jiedi(China nanjing)Ltd.                                 **
**	      ��Ȩ���Ĳܿ����У��˴���ֻ����Ϊѧϰ�ο�                **                                                                            **
*******************************************************************************/

/*****************************FILE INFOMATION***********************************
**
** Project        : XVideoEdit
** Description : ��Ƶ�༭��
** Contact       : xiacaojun@qq.com
**	 QQȺ	      ��559312905 (������ѯ����)
** ΢�Ź��ں�  : jiedi2007
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
