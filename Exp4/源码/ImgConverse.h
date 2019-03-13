#include <iostream>
#include "CImg.h"
using namespace std;
using namespace cimg_library;
class ImgConverse{
private:
	CImg<int> img; //ͼ��
	CImg<int> gray_img; //�Ҷ�ͼ��
	CImg<int> hist_equalImg; //ֱ��ͼ���Ȼ����ͼƬ
	CImg<float> sourceImg; //����ͼ��ת����ԭͼ
	CImg<float> targetImg; //����ͼ��ת����Ŀ�걳��ͼ
	CImg<float> sourcelab; //lab�ռ�ͼ
	CImg<float> targetlab;
	//����ת������ľ�ֵ
	float mean0[3];
	float mean1[3];
	//����ת������ı�׼��
	float std0[3];
	float std1[3];
	CImg<float> result; //ת����Ľ��ͼ
public:
	ImgConverse();
	void toGray(); //��ͼƬ����Ϊ�Ҷ�ͼ
	CImg<int> Hist(CImg<int> ); //����ֱ��ͼ��������庯��
	void Hist_gray(); //�ԻҶ�ͼ����ֱ��ͼ���⴦��
	//��rgbͼ����ֱ��ͼ���⴦�����������ַ���
	void Hist_color();  //1.��rgb�ռ�ֱ����ֱ��ͼ����
	void RGB_HSI();  //2.��ͼƬ��rgb�ռ�תΪhsi�ռ䲢�������ȿռ����ֱ��ͼ������תΪrgb������ʾ
	CImg<float> RGB_LAB(CImg<float>, float *, float *);//��ͼƬתΪlab�ռ�
	CImg<float> LAB_RGB(CImg<float>);
	void colorTransfer(); //��lab�ռ����ת������
	void Hist_impress(); //�ԻҶȴ������ݶ����Ե���иĽ�
};