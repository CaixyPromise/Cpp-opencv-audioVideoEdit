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
#pragma once

#include <QtWidgets/QWidget>
#include "ui_XVideoUI.h"

class XVideoUI : public QWidget
{
    Q_OBJECT

public:
    XVideoUI(QWidget *parent = Q_NULLPTR);
	void timerEvent(QTimerEvent *e);
public slots:
	//����ƵԴ�¼�
	void Open();
	void Play();
	void Pause();

	void SliderPress();
	void SliderRelease();
	//�������϶�
	void SetPos(int);
	void Left(int pos);
	void Right(int pos);

	//���ù�����
	void Set();

	//������Ƶ
	void Export();

	//��������
	void ExportEnd();
	
	//ˮӡ
	void Mark();

	//�ں�
	void Blend();

	//�ϲ�
	void Merge();


private:
    Ui::XVideoUIClass ui;
};
