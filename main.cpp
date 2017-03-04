#include <iostream>
#define MAX 100
using namespace std;


void NhapMang(int a[],int &n)
// Truyen tham chieu vao bien n
// Nhap n o ben trong

{
    // Nhap so luong phan tu cua mang.
    do {
        cout << "\nNhap vao so luong phan tu cua mang: ";
        cin >> n;

        if (n <0 || n > MAX)
        {
            cout << "\nSo luong phan tu khong hop le. Xin kiem tra lai.";
        }
    } while (n <0 || n > MAX);

    // Duyet vong lap de nhap tung gia tri
    for (int i=0; i<n;i++)
    {
        cout << "\nNhap vao a[" <<i<<"] = ";
        cin >> a[i];
    }
}

void XuatMang(int a[],int n)
{
  for (int i=0; i<n;i ++)
  {
      cout  << a[i] << "   ";

  }
  cout << "\n";
}

// Ham tim kiem xem 1 phan tu co nam trong mang hay khong,
// tra ve false , true neu tim thay

bool TimKiem(int a[],int n, int x)  // x la phan tu can tim kiem
{
    // Duyet tung phan tu trong mang dem so sanh voi ay
    for (int i=0; i<n; i++)
    {
        if (a[i]==x)
        {
            return true;
        }
    }
    return false;
}

bool KiemTra1(int a[],int n)
{
    int dem=0;
   for (int i=0;i<n;i++)
   {
      if(a[i]>0)
      {
          dem++;
      }
   }
   if (dem==n)
   {
       return true;
   }
   else
   {
       return false;
   }
}

bool KiemTra2(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (a[i]<0)
            return false;
    }
    return true;

}

void TachMang(int a[],int b[],int n,int &m)
{
    int j=0;
    for(int i=0; i<n;i ++)
    {
        if (a[i]<0)
        {
                b[j]= a[i];
                j++;
        }
    }
    m=j;
}

void GopMang (int a[],int b[], int &n, int m)
{
    n += m;
    int j=0;
        for (int i=n-m;i<n;i++)
        {
            a[i] = b[j++];
        }
}

int TimMin(int a[],int n)
{
    int MIN;
    MIN = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<MIN)
            MIN=a[i];
    }
    return MIN;
}

int TimMax(int a[],int n)
{
    int MAXIMUM;
    MAXIMUM = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>MAXIMUM)
            MAXIMUM=a[i];
    }
    return MAXIMUM;
}

void HoanVi(int &x, int &y)
{
    int Temp=x;
    x=y;
    y=Temp;
}
void SapXepTangDan(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
                HoanVi(a[i],a[j]);
        }
    }
}
int main()
{
    int a[MAX],b[MAX]; // Khai bao mang
    int n,m; // So luong phan tu cua mang
    NhapMang(a,n);
    XuatMang(a,n);
    SapXepTangDan(a,n);
    cout << "\nMang sau khi sap xep" ;
    XuatMang(a,n);

}
