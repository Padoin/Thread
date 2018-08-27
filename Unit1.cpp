//---------------------------------------------------------------------------

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	num = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AtivarClick(TObject *Sender)
{
	Thread1->Active=True;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DesativarClick(TObject *Sender)
{
	Thread1->Active=False;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IncrementarClick(TObject *Sender)
{
    num++;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DecrementarClick(TObject *Sender)
{
	num--;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Thread1Run(TIdThreadComponent *Sender)
{
	Memo1->Lines->Add(num);
	Sleep(500);
}
//---------------------------------------------------------------------------
