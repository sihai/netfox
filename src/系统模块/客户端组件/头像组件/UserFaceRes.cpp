#include "StdAfx.h"
#include "Resource.h"
#include "UserFaceRes.h"

//////////////////////////////////////////////////////////////////////////

//宏定义
#define COLOR_TRANS						RGB(255,0,255)				//透明颜色

//////////////////////////////////////////////////////////////////////////

//构造函数
CUserFaceRes::CUserFaceRes(void)
{
	//加载资源
	HINSTANCE hInstancle=GetModuleHandle(USER_FACE_DLL_NAME);
	m_NormalFace.LoadFromResource(hInstancle,IDB_FACE_NORMAL);
	m_SmallFace.LoadFromResource(hInstancle,IDB_FACE_NORMAL);

	//设置变量
	m_wCount=m_NormalFace.GetWidth()/NOR_FACE_WIDTH;
	m_NormalSize.SetSize(NOR_FACE_WIDTH,NOR_FACE_HEIGHT);
	m_SmallSize.SetSize(LIT_FACE_WIDTH,LIT_FACE_HEIGHT);

	return;
}

//析构函数
CUserFaceRes::~CUserFaceRes(void)
{
}

//接口查询
void * __cdecl CUserFaceRes::QueryInterface(const IID & Guid, DWORD dwQueryVer)
{
	QUERYINTERFACE(IUserFaceRes,Guid,dwQueryVer);
	QUERYINTERFACE_IUNKNOWNEX(IUserFaceRes,Guid,dwQueryVer);
	return NULL;
}

//绘画头像
void __cdecl CUserFaceRes::DrawSmallFace(CDC * pDC, int nXPos, int nYPos, WORD wFaceID)
{
	//调整参数
	if (wFaceID>=m_wCount) wFaceID=0;

	//绘画头像
	CDC DCFace;
	DCFace.CreateCompatibleDC(NULL);
	DCFace.SelectObject(m_SmallFace);
	AlphaDrawImage(pDC,nXPos,nYPos,m_SmallSize.cx,m_SmallSize.cy,&DCFace,wFaceID*m_SmallSize.cx,0);

	return;
}

//绘画头像
void __cdecl CUserFaceRes::DrawNormalFace(CDC * pDC, int nXPos, int nYPos, WORD wFaceID)
{
	//调整参数
	if (wFaceID>=m_wCount) wFaceID=0;

	//绘画头像
	CDC DCFace;
	DCFace.CreateCompatibleDC(NULL);
	DCFace.SelectObject(m_NormalFace);
	AlphaDrawImage(pDC,nXPos,nYPos,m_NormalSize.cx,m_NormalSize.cy,&DCFace,wFaceID*m_NormalSize.cx,0);

	return;
}

//透明绘画
bool CUserFaceRes::AlphaDrawImage(CDC * pDestDC, int xDest, int yDest, int cxDest, int cyDest, CDC * pScrDC, int xSrc, int ySrc)
{
	//效验参数
	ASSERT(pScrDC!=NULL);
	ASSERT(pDestDC!=NULL);

	//建立 DC
	pScrDC->SetBkColor(COLOR_TRANS);
	pScrDC->SetBkMode(TRANSPARENT);

	//建立掩码图
	CDC DCMask;
	CBitmap BMPMask;
	BMPMask.CreateBitmap(cxDest,cyDest,1,1,NULL);
	DCMask.CreateCompatibleDC(pDestDC);
	DCMask.SelectObject(&BMPMask);
	DCMask.BitBlt(0,0,cxDest,cyDest,pScrDC,xSrc,ySrc,SRCCOPY);

	//绘画目标图
	CDC DCDest;
	CBitmap BMPDest;
	DCDest.CreateCompatibleDC(pDestDC);
	BMPDest.CreateCompatibleBitmap(pDestDC,cxDest,cyDest);
	DCDest.SelectObject(&BMPDest);
	DCDest.BitBlt(0,0,cxDest,cyDest,pDestDC,xDest,yDest,SRCCOPY);
	DCDest.BitBlt(0,0,cxDest,cyDest,pScrDC,xSrc,ySrc,SRCINVERT);
	DCDest.BitBlt(0,0,cxDest,cyDest,&DCMask,0,0,SRCAND);
	DCDest.BitBlt(0,0,cxDest,cyDest,pScrDC,xSrc,ySrc,SRCINVERT);
	pDestDC->BitBlt(xDest,yDest,cxDest,cyDest,&DCDest,0,0,SRCCOPY);

	//清理资源
	DCMask.DeleteDC();
	DCDest.DeleteDC();
	BMPMask.DeleteObject();
	BMPDest.DeleteObject();
	
	return true;
}

//////////////////////////////////////////////////////////////////////////

//建立对象函数
extern "C" __declspec(dllexport) void * __cdecl CreateUserFaceRes(const GUID & Guid, DWORD dwInterfaceVer)
{
	//建立对象
	CUserFaceRes * pUserFaceRes=NULL;
	try
	{
		pUserFaceRes=new CUserFaceRes();
		if (pUserFaceRes==NULL) throw TEXT("创建失败");
		void * pObject=pUserFaceRes->QueryInterface(Guid,dwInterfaceVer);
		if (pObject==NULL) throw TEXT("接口查询失败");
		return pObject;
	}
	catch (...) {}

	//清理对象
	SafeDelete(pUserFaceRes);
	return NULL;
}

//////////////////////////////////////////////////////////////////////////
