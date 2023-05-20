object Interface: TInterface
  Left = 393
  Top = 325
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Auto Shutdown 1.0'
  ClientHeight = 78
  ClientWidth = 194
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 14
    Width = 104
    Height = 13
    Caption = 'Minutes till shutdown :'
  end
  object CheckBox: TCheckBox
    Left = 32
    Top = 44
    Width = 121
    Height = 17
    Caption = 'Shutdown Windows'
    TabOrder = 0
    OnClick = CheckBoxClick
  end
  object Time: TEdit
    Left = 120
    Top = 10
    Width = 65
    Height = 21
    TabOrder = 1
    Text = '0'
  end
  object Timer: TTimer
    Enabled = False
    OnTimer = TimerTimer
    Left = 160
    Top = 42
  end
end
