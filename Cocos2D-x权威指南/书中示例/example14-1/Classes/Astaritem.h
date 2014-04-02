#pragma once
#include "cocos2d.h"
using namespace cocos2d;
class AstarItem:public CCNode
{
public:
    AstarItem(void);
	~AstarItem(void);
	void setpos(int col,int row);
	int getcol(){return id_col;};
	int getrow(){return id_row;};
	void setg(int g);
	int getg(){return id_g;};
	void seth(int h);
	int geth(){return id_h;};
	void setfid(int fid);
	int getfid(){return id_fid;};
	void setf(int f);
	int getf(){return id_f;};
private:
	int id_col;//��
	int id_row;//��
	int id_g;// ʵ�ʴ���
	int id_h;// ���ƴ���
	int id_fid;// ���ڵ�id
	int id_f;// ���ۺ���f = g + h
};