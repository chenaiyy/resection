// hfjhDlg.cpp : implementation file
//

#include "stdafx.h"
#include "hfjh.h"
#include "hfjhDlg.h"
#include "math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHfjhDlg dialog

CHfjhDlg::CHfjhDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CHfjhDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CHfjhDlg)
	x1 =-86.15;
	x2 =-53.40;
	x3 =-14.78;
	x4 =10.46;
	xx1 =36589.41;
	xx2 =37631.08;
	xx3 =39100.97;
	xx4 =40426.54;
	y1 =-68.99;
	y2 =82.21;
	y3 =-76.63;
	y4 =64.43;
	yy1 =25273.32;
	yy2 =31324.51;
	yy3 =24934.98;
	yy4 =30319.81;
	zz1 =2195.17;
	zz2 =728.69;
	zz3 =2386.50;
	zz4 =757.31;
	m_kappa = 0.0;
	m_omega = 0.0;
	m_phi = 0.0;
	m_Xs = 0.0;
	m_Ys = 0.0;
	m_Zs = 0.0;
	m_R1 = 0.0;
	m_R2 = 0.0;
	m_R3 = 0.0;
	m_R4 = 0.0;
	m_R5 = 0.0;
	m_R6 = 0.0;
	m_R7 = 0.0;
	m_R8 = 0.0;
	m_R9 = 0.0;
	m_m = 50000;
	m_f = 153.24;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHfjhDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CHfjhDlg)
	DDX_Text(pDX, IDC_x1, x1);
	DDX_Text(pDX, IDC_x2, x2);
	DDX_Text(pDX, IDC_x3, x3);
	DDX_Text(pDX, IDC_x4, x4);
	DDX_Text(pDX, IDC_xx1, xx1);
	DDX_Text(pDX, IDC_xx2, xx2);
	DDX_Text(pDX, IDC_xx3, xx3);
	DDX_Text(pDX, IDC_xx4, xx4);
	DDX_Text(pDX, IDC_y1, y1);
	DDX_Text(pDX, IDC_y2, y2);
	DDX_Text(pDX, IDC_y3, y3);
	DDX_Text(pDX, IDC_y4, y4);
	DDX_Text(pDX, IDC_yy1, yy1);
	DDX_Text(pDX, IDC_yy2, yy2);
	DDX_Text(pDX, IDC_yy3, yy3);
	DDX_Text(pDX, IDC_yy4, yy4);
	DDX_Text(pDX, IDC_zz1, zz1);
	DDX_Text(pDX, IDC_zz2, zz2);
	DDX_Text(pDX, IDC_zz3, zz3);
	DDX_Text(pDX, IDC_zz4, zz4);
	DDX_Text(pDX, IDC_kappa, m_kappa);
	DDX_Text(pDX, IDC_omega, m_omega);
	DDX_Text(pDX, IDC_phi, m_phi);
	DDX_Text(pDX, IDC_Xs, m_Xs);
	DDX_Text(pDX, IDC_Ys, m_Ys);
	DDX_Text(pDX, IDC_Zs, m_Zs);
	DDX_Text(pDX, IDC_R1, m_R1);
	DDX_Text(pDX, IDC_R2, m_R2);
	DDX_Text(pDX, IDC_R3, m_R3);
	DDX_Text(pDX, IDC_R4, m_R4);
	DDX_Text(pDX, IDC_R5, m_R5);
	DDX_Text(pDX, IDC_R6, m_R6);
	DDX_Text(pDX, IDC_R7, m_R7);
	DDX_Text(pDX, IDC_R8, m_R8);
	DDX_Text(pDX, IDC_R9, m_R9);
	DDX_Text(pDX, IDC_m, m_m);
	DDX_Text(pDX, IDC_f, m_f);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CHfjhDlg, CDialog)
	//{{AFX_MSG_MAP(CHfjhDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHfjhDlg message handlers

BOOL CHfjhDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CHfjhDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CHfjhDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CHfjhDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

// 矩阵工具
// 矩阵转置
//矩阵m1，m行n列，转置后为m2,n行m列
void transpose(double *m1,double *m2,int m,int n)
{ 
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			m2[j*m+i]=m1[i*n+j];
		return;
}


// 矩阵求逆
// 矩阵a，n行n列，求逆后将逆矩阵存入a中
void inv(double *a,int n)
{ 
	int i,j,k;
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			if(i!=k)
				*(a+i*n+k)=-*(a+i*n+k)/(*(a+k*n+k));
		}
		*(a+k*n+k)=1/(*(a+k*n+k));
		for(i=0;i<n;i++){
			if(i!=k){
				for(j=0;j<n;j++){
					if(j!=k)
						*(a+i*n+j)+=*(a+k*n+j)* *(a+i*n+k);
				}
			}
		}
		for(j=0;j<n;j++){
			if(j!=k)
				*(a+k*n+j)*=*(a+k*n+k);
		}
	}
}


// 矩阵相乘
//矩阵m1，i_1行j_12列，
//矩阵m2,j_12行j_2列
//结果矩阵result,i_1行j_2列
void mult(double *m1,double *m2,double *result,int i_1,int j_12,int j_2)
{ 
	int i,j,k;
	for(i=0;i<i_1;i++)
		for(j=0;j<j_2;j++){
			result[i*j_2+j]=0.0;
			for(k=0;k<j_12;k++)
				result[i*j_2+j]+=m1[i*j_12+k]*m2[j+k*j_2];
		}
		return;
}




void CHfjhDlg::OnOK()
{
	// TODO: Add extra validation here
	UpdateData(TRUE);
    CHfjhDlg dlg;

	//摄影比例尺
	int m=m_m;
	//摄影焦距
    double f=m_f;
	//存储控制点地面坐标数组
	double Xt[4],Yt[4],Zt[4];
	//存储像点坐标数组
	double x[4],y[4],x_[4],y_[4];
	//外方位元素三个角元素和线元素
	double phi=0,omega=0,kappa=0,Xs,Ys,Zs;
	//由角元素计算出的旋转矩阵R
    double R[3][3];


	//四个控制点的地面测量坐标
    Xt[0]=xx1;Xt[1]=xx2;Xt[2]=xx3;Xt[3]=xx4;
    Yt[0]=yy1;Yt[1]=yy2;Yt[2]=yy3;Yt[3]=yy4;
	Zt[0]=zz1;Zt[1]=zz2;Zt[2]=zz3;Zt[3]=zz4;
    
	//四个控制点对应的像点坐标量测值
    x[0]=x1;
    x[1]=x2;
    x[2]=x3;
    x[3]=x4;
    y[0]=y1;
    y[1]=y2;
    y[2]=y3;
    y[3]=y4;

	/*请同学们加入自己的代码，时间60分钟，矩阵工具函数已给出在全局函数中*/
	

// 1 依据书中的算法对外方位元素初始化
	Xs=(xx1+xx2+xx3+xx4)/4.0;
	Ys=(yy1+yy2+yy3+yy4)/4.0;
	Zs=m_f*m_m/1000;

// 2以迭代的方式求解外方位元素
// 迭代条件
	bool ISOK=true;
//A矩阵定义
	double A[8][6];
//L矩阵的定义
	double L[8][1];

//迭代开始
	while (ISOK)
	{	
		int i=0;   //循环系数
		//旋转矩阵的组成
		R[0][0]=cos(phi)*cos(kappa)-sin(phi)*sin(omega)*sin(kappa);
		R[0][1]=-cos(phi)*sin(kappa)-sin(phi)*sin(omega)*cos(kappa);
		R[0][2]=-sin(phi)*cos(omega);
		R[1][0]=cos(omega)*sin(kappa);
		R[1][1]=cos(omega)*cos(kappa);
		R[1][2]=-sin(omega);
		R[2][0]=sin(phi)*cos(kappa)+cos(phi)*sin(omega)*sin(kappa);
		R[2][1]=-sin(phi)*sin(kappa)+cos(phi)*sin(omega)*cos(kappa);
		R[2][2]=cos(phi)*cos(omega);
		
		for(i=0;i<4;i++)
		{
			double X=R[0][0]*(Xt[i]-Xs)+R[1][0]*(Yt[i]-Ys)+R[2][0]*(Zt[i]-Zs);
			double Y=R[0][1]*(Xt[i]-Xs)+R[1][1]*(Yt[i]-Ys)+R[2][1]*(Zt[i]-Zs);
			double Z=R[0][2]*(Xt[i]-Xs)+R[1][2]*(Yt[i]-Ys)+R[2][2]*(Zt[i]-Zs);
			//线性方程求近似值
			x_[i]=-f*X/Z;
			y_[i]=-f*Y/Z;
			//求常数项
			L[2*i][0]=x[i]-x_[i];
			L[2*i+1][0]=y[i]-y_[i];

			//求系数矩阵A
			A[2*i][0]=(R[0][0]*f+R[0][2]*x[i])/Z;
			A[2*i][1]=(R[1][0]*f+R[1][2]*x[i])/Z;
			A[2*i][2]=(R[2][0]*f+R[2][2]*x[i])/Z;
			A[2*i][3]=y[i]*sin(omega)-cos(omega)*(x[i]*(x[i]*cos(kappa)-y[i]*sin(kappa))/f+f*cos(kappa));
			A[2*i][4]=-f*sin(kappa)-x[i]*(x[i]*sin(kappa)+y[i]*cos(kappa))/f;
			A[2*i][5]=y[i];
			A[2*i+1][0]=(R[0][1]*f+R[0][2]*y[i])/Z;
			A[2*i+1][1]=(R[1][1]*f+R[1][2]*y[i])/Z;
			A[2*i+1][2]=(R[2][1]*f+R[2][2]*y[i])/Z;
			A[2*i+1][3]=x[i]*sin(omega)-cos(omega)*(x[i]*(x[i]*cos(kappa)-y[i]*sin(kappa))/f-f*cos(kappa));
			A[2*i+1][4]=-f*cos(kappa)-y[i]*(x[i]*sin(kappa)+y[i]*cos(kappa))/f;
			A[2*i+1][5]=-x[i];

		}

		//求解X矩阵
		double B[6][6];  //存储A与A转置相乘后的结果
		double C[6][8];  //存储B求逆后与A转置相乘后的结果
		double D[6][8];  //A 转置后的结果
		double XJ[6][1]; //最后的结果
		
		transpose(*A,*D,8,6);
		mult(*D,*A,*B,6,8,6);
		inv(*B,6);
		mult(*B,*D,*C,6,6,8);
		mult(*C,*L,*XJ,6,8,1);
    //形成新的外方位元素值
		Xs+=XJ[0][0];
		Ys+=XJ[1][0];
		Zs+=XJ[2][0];
		phi+=XJ[3][0];
		omega+=XJ[4][0];
		kappa+=XJ[5][0];

	//确定迭代条件
		for (i=0;i<6;i++)
		{
			if(fabs(XJ[i][0])>0.00001)
				break;
		}
		if (i==6)
			ISOK=false;
	}


//3 精度评定，计算单位权中误差以及各个未知数的中误差


	// 将计算结果赋给对话框的各个变量，并且将计算结果显示在对话框中
	m_phi=phi;
	m_omega=omega;
	m_kappa=kappa;
	m_Xs=Xs;
	m_Ys=Ys;
	m_Zs=Zs;
	m_R1=R[0][0];
	m_R2=R[0][1];
	m_R3=R[0][2];
	m_R4=R[1][0];
	m_R5=R[1][1];
	m_R6=R[1][2];
	m_R7=R[2][0];
	m_R8=R[2][1];
	m_R9=R[2][2];
  UpdateData(FALSE);

}
