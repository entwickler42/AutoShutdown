//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TInterface : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
   TCheckBox *CheckBox;
   TEdit *Time;
   TLabel *Label1;
   TTimer *Timer;
   void __fastcall CheckBoxClick(TObject *Sender);
   void __fastcall TimerTimer(TObject *Sender);
private:	// Anwender-Deklarationen
public:		// Anwender-Deklarationen
   __fastcall TInterface(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInterface *Interface;
//---------------------------------------------------------------------------
#endif
