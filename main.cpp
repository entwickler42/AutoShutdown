//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TInterface *Interface;
//---------------------------------------------------------------------------
__fastcall TInterface::TInterface(TComponent* Owner) : TForm(Owner)
{}

//---------------------------------------------------------------------------
void __fastcall TInterface::CheckBoxClick(TObject *Sender)
{
   Timer->Interval = Time->Text.ToDouble()*60000;
   Timer->Enabled  = CheckBox->Checked;
   Time->Enabled   = !CheckBox->Checked;
}
//---------------------------------------------------------------------------
void __fastcall TInterface::TimerTimer(TObject *Sender)
{
   HANDLE hToken;
   TOKEN_PRIVILEGES tkp;

   // Get a token for this process.
   OpenProcessToken(GetCurrentProcess(),TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken);

   // Get the LUID for the shutdown privilege.
   LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME,&tkp.Privileges[0].Luid);

   tkp.PrivilegeCount = 1;  // one privilege to set
   tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

   // Get the shutdown privilege for this process.
   AdjustTokenPrivileges(hToken, FALSE, &tkp, 0,(PTOKEN_PRIVILEGES)NULL, 0);

   ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, 0);
}
//---------------------------------------------------------------------------
