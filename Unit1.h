//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdThreadComponent.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Ativar;
	TButton *Desativar;
	TButton *Incrementar;
	TButton *Decrementar;
	TIdThreadComponent *Thread1;
	TMemo *Memo1;
	void __fastcall AtivarClick(TObject *Sender);
	void __fastcall DesativarClick(TObject *Sender);
	void __fastcall IncrementarClick(TObject *Sender);
	void __fastcall DecrementarClick(TObject *Sender);
	void __fastcall Thread1Run(TIdThreadComponent *Sender);
private:
	int num;	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
