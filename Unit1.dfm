object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 335
  ClientWidth = 242
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Ativar: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Ativar'
    TabOrder = 0
    OnClick = AtivarClick
  end
  object Desativar: TButton
    Left = 8
    Top = 56
    Width = 75
    Height = 25
    Caption = 'Desativar'
    TabOrder = 1
    OnClick = DesativarClick
  end
  object Incrementar: TButton
    Left = 136
    Top = 8
    Width = 75
    Height = 25
    Caption = '+'
    TabOrder = 2
    OnClick = IncrementarClick
  end
  object Decrementar: TButton
    Left = 136
    Top = 56
    Width = 75
    Height = 25
    Caption = '-'
    TabOrder = 3
    OnClick = DecrementarClick
  end
  object Memo1: TMemo
    Left = 8
    Top = 104
    Width = 203
    Height = 217
    Lines.Strings = (
      'Memo1')
    TabOrder = 4
  end
  object Thread1: TIdThreadComponent
    Active = False
    Loop = True
    Priority = tpNormal
    StopMode = smTerminate
    OnRun = Thread1Run
    Left = 264
    Top = 32
  end
end
