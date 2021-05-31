; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CBsqViewView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "bsqview.h"
LastPage=0

ClassCount=13
Class1=CBigImageDlg
Class2=CBsqViewApp
Class3=CAboutDlg
Class4=CBsqViewDoc
Class5=CBsqViewView
Class6=CChildFrame
Class7=CChooseAreas
Class8=CClassesInputDlg
Class9=CClassSelectDlg
Class10=CMainFrame
Class11=CSelBandsDlg
Class12=CSelectedAreasDlg

ResourceCount=7
Resource1=IDD_BIG_IMAGE_DLG
Resource2=IDD_SELBANDSDLG
Resource3=IDD_DIALOG5
Resource4=IDD_IMAGEINITIATE
Resource5=IDD_ABOUTBOX
Resource6=IDR_MENU1
Class13=CImageInitiate
Resource7=IDR_MAINFRAME

[CLS:CBigImageDlg]
Type=0
BaseClass=CDialog
HeaderFile=BigImageDlg.h
ImplementationFile=BigImageDlg.cpp

[CLS:CBsqViewApp]
Type=0
BaseClass=CWinApp
HeaderFile=BsqView.h
ImplementationFile=BsqView.cpp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=BsqView.cpp
ImplementationFile=BsqView.cpp
LastObject=ID_NDVI_CAC

[CLS:CBsqViewDoc]
Type=0
BaseClass=CDocument
HeaderFile=BsqViewDoc.h
ImplementationFile=BsqViewDoc.cpp

[CLS:CBsqViewView]
Type=0
BaseClass=CScrollView
HeaderFile=BsqViewView.h
ImplementationFile=BsqViewView.cpp
Filter=C
VirtualFilter=VWC
LastObject=CBsqViewView

[CLS:CChildFrame]
Type=0
BaseClass=CMDIChildWnd
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp

[CLS:CChooseAreas]
Type=0
BaseClass=CDialog
HeaderFile=ChooseAreas.h
ImplementationFile=ChooseAreas.cpp

[CLS:CClassesInputDlg]
Type=0
BaseClass=CDialog
HeaderFile=ClassesInputDlg.h
ImplementationFile=ClassesInputDlg.cpp

[CLS:CClassSelectDlg]
Type=0
BaseClass=CDialog
HeaderFile=ClassSelectDlg.h
ImplementationFile=ClassSelectDlg.cpp

[CLS:CMainFrame]
Type=0
BaseClass=CMDIFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp

[CLS:CSelBandsDlg]
Type=0
BaseClass=CDialog
HeaderFile=SelBandsDlg.h
ImplementationFile=SelBandsDlg.cpp
Filter=D
VirtualFilter=dWC

[CLS:CSelectedAreasDlg]
Type=0
BaseClass=CDialog
HeaderFile=SelectedAreasDlg.h
ImplementationFile=SelectedAreasDlg.cpp

[DLG:IDD_BIG_IMAGE_DLG]
Type=1
Class=CBigImageDlg
ControlCount=1
Control1=IDC_BIG_IMAGE,static,1342177285

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_CLASSES_FILE]
Type=1
Class=CClassesInputDlg

[DLG:IDD_SELBANDSDLG]
Type=1
Class=CSelBandsDlg
ControlCount=20
Control1=IDOK,button,1342275584
Control2=IDCANCEL,button,1342275584
Control3=IDC_GREY,button,1342177289
Control4=IDC_RGB,button,1342177289
Control5=IDC_LIST1,listbox,1353777409
Control6=IDC_R,button,1342177289
Control7=IDC_G,button,1342177289
Control8=IDC_B,button,1342177289
Control9=IDC_STATIC,button,1342210055
Control10=IDC_STATIC,button,1342210055
Control11=IDC_STATIC,button,1342210055
Control12=IDC_STATIC,button,1342210055
Control13=IDC_STATIC_R,static,1342308352
Control14=IDC_STATIC_G,static,1342308352
Control15=IDC_STATIC_B,static,1342308352
Control16=IDC_STATIC,button,1342210055
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,button,1342210055
Control19=IDC_STATIC_PROPERIETY,static,1342308352
Control20=IDC_STATIC,button,1342210055

[MNU:IDR_MAINFRAME]
Type=1
Class=CBsqViewView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_WINDOW_NEW
Command18=ID_WINDOW_CASCADE
Command19=ID_WINDOW_TILE_HORZ
Command20=ID_WINDOW_ARRANGE
Command21=ID_APP_ABOUT
Command22=ID_NDVI
CommandCount=22

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[MNU:IDR_MENU1]
Type=1
Class=?
Command1=ID_SELBANDSDLG_OPEN
Command2=ID_SELBANDSDLG_FILELIST
Command3=ID_SELBANDSDIALOG_CLOSE
Command4=ID_SELBANDSDLG_CLOSEALL
Command5=ID_SELBANDSDLG_CANCEL
CommandCount=5

[DLG:IDD_DIALOG5]
Type=1
Class=?
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[DLG:IDD_IMAGEINITIATE]
Type=1
Class=CImageInitiate
ControlCount=23
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT2,edit,1350631552
Control8=IDC_EDIT3,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,button,1342210055
Control11=IDC_STATIC,button,1342210055
Control12=IDC_STATIC,button,1342210055
Control13=IDC_STATIC,static,1342308352
Control14=IDC_STATIC,button,1342210055
Control15=IDC_BYTE,button,1342308361
Control16=IDC_INT,button,1342177289
Control17=IDC_FLOAT,button,1342177289
Control18=IDC_STANDARD_IMAGE,button,1342308361
Control19=IDC_CLASSIFICATION_IMAGE,button,1342177289
Control20=IDC_TRACE_IMAGE,button,1342177289
Control21=IDC_STATIC,static,1342308352
Control22=IDC_HEADER_SENSOR,button,1342242816
Control23=IDC_STATIC,button,1342210055

[CLS:CImageInitiate]
Type=0
HeaderFile=ImageInitiate.h
ImplementationFile=ImageInitiate.cpp
BaseClass=CDialog
Filter=D
LastObject=CImageInitiate

