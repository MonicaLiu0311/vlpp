﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, DemoReflection.h) */
#include "DemoReflection.h"
#endif
/* CodePack:EndIgnore() */

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const
	{
		::vl::__vwsn::This(__vwsnthis_0->ViewModel.Obj())->OpenUrl(::vl::__vwsn::This(__vwsnthis_0->documentViewer)->GetActiveHyperlinkReference());
	}
}

/***********************************************************************
Class (::demo::IViewModel)
***********************************************************************/

namespace demo
{
/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

	void MainWindowConstructor::__vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_)
	{
		(this->__vwsn_precompile_0 = __vwsn_this_);
		(this->ViewModel = ::vl::__vwsn::This(__vwsn_this_)->GetViewModel());
		(this->__vwsn_precompile_51 = ::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_51)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_51)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(640); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetText(::vl::WString::Unmanaged(L"RichTextEmbedding"));
		}
		{
			(this->documentViewer = new ::vl::presentation::controls::GuiDocumentViewer(::vl::presentation::theme::ThemeName::DocumentViewer));
		}
		(this->__vwsn_precompile_50 = ::vl::__vwsn::This(this->documentViewer)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_50)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(5); __vwsn_temp__.top = static_cast<::vl::vint>(5); __vwsn_temp__.right = static_cast<::vl::vint>(5); __vwsn_temp__.bottom = static_cast<::vl::vint>(5); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->documentViewer)->SetEditMode(::vl::presentation::controls::GuiDocumentCommonInterface::EditMode::ViewOnly);
		}
		(this->__vwsn_precompile_1 = ::vl::Ptr<::vl::presentation::controls::GuiDocumentItem>(new ::vl::presentation::controls::GuiDocumentItem(::vl::WString::Unmanaged(L"Button"))));
		{
			(this->__vwsn_precompile_2 = new ::vl::presentation::controls::GuiButton(::vl::presentation::theme::ThemeName::Button));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetText(::vl::WString::Unmanaged(L"Button"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_1.Obj())->GetContainer())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_2)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->documentViewer)->AddDocumentItem(this->__vwsn_precompile_1);
		}
		(this->__vwsn_precompile_3 = ::vl::Ptr<::vl::presentation::controls::GuiDocumentItem>(new ::vl::presentation::controls::GuiDocumentItem(::vl::WString::Unmanaged(L"TreeView"))));
		{
			(this->__vwsn_precompile_4 = new ::vl::presentation::controls::GuiTreeView(::vl::presentation::theme::ThemeName::TreeView));
		}
		(this->__vwsn_precompile_8 = ::vl::__vwsn::This(this->__vwsn_precompile_4)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(200); __vwsn_temp__.y = static_cast<::vl::vint>(100); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetVerticalAlwaysVisible(false);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetHorizontalAlwaysVisible(false);
		}
		(this->__vwsn_precompile_5 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>(new ::vl::presentation::controls::tree::MemoryNodeProvider(::vl::Ptr<::vl::reflection::DescriptableObject>(::vl::Ptr<::vl::presentation::controls::tree::TreeViewItem>(new ::vl::presentation::controls::tree::TreeViewItem(::vl::Ptr<::vl::presentation::GuiImageData>(), ::vl::WString::Unmanaged(L"GacUI Renderers")))))));
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5.Obj())->SetExpanding(true);
		}
		(this->__vwsn_precompile_6 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>(new ::vl::presentation::controls::tree::MemoryNodeProvider(::vl::Ptr<::vl::reflection::DescriptableObject>(::vl::Ptr<::vl::presentation::controls::tree::TreeViewItem>(new ::vl::presentation::controls::tree::TreeViewItem(::vl::Ptr<::vl::presentation::GuiImageData>(), ::vl::WString::Unmanaged(L"Direct2D")))))));
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_5.Obj())->Children()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_6));
		}
		(this->__vwsn_precompile_7 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>(new ::vl::presentation::controls::tree::MemoryNodeProvider(::vl::Ptr<::vl::reflection::DescriptableObject>(::vl::Ptr<::vl::presentation::controls::tree::TreeViewItem>(new ::vl::presentation::controls::tree::TreeViewItem(::vl::Ptr<::vl::presentation::GuiImageData>(), ::vl::WString::Unmanaged(L"GDI")))))));
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_5.Obj())->Children()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_7));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_4)->Nodes().Obj())->Children()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_5));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_3.Obj())->GetContainer())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_4)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->documentViewer)->AddDocumentItem(this->__vwsn_precompile_3);
		}
		(this->__vwsn_precompile_9 = ::vl::Ptr<::vl::presentation::controls::GuiDocumentItem>(new ::vl::presentation::controls::GuiDocumentItem(::vl::WString::Unmanaged(L"Menu"))));
		{
			(this->__vwsn_precompile_10 = new ::vl::presentation::controls::GuiToolstripMenuBar(::vl::presentation::theme::ThemeName::MenuBar));
		}
		{
			(this->__vwsn_precompile_11 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuBarButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_11)->SetAlt(::vl::WString::Unmanaged(L"F"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_11)->SetText(::vl::WString::Unmanaged(L"File"));
		}
		(this->__vwsn_precompile_12 = ::vl::__vwsn::This(this->__vwsn_precompile_11)->EnsureToolstripSubMenu());
		{
			(this->__vwsn_precompile_13 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_13)->SetAlt(::vl::WString::Unmanaged(L"N"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_13)->SetText(::vl::WString::Unmanaged(L"New"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_12)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_13));
		}
		{
			(this->__vwsn_precompile_14 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->SetAlt(::vl::WString::Unmanaged(L"O"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->SetText(::vl::WString::Unmanaged(L"Open"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_12)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_14));
		}
		{
			(this->__vwsn_precompile_15 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_15)->SetAlt(::vl::WString::Unmanaged(L"S"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_15)->SetText(::vl::WString::Unmanaged(L"Save"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_12)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_15));
		}
		{
			(this->__vwsn_precompile_16 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_16)->SetAlt(::vl::WString::Unmanaged(L"A"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_16)->SetText(::vl::WString::Unmanaged(L"Save As ..."));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_12)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_16));
		}
		{
			(this->__vwsn_precompile_17 = new ::vl::presentation::controls::GuiControl(::vl::presentation::theme::ThemeName::MenuSplitter));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_12)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_17));
		}
		{
			(this->__vwsn_precompile_18 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_18)->SetAlt(::vl::WString::Unmanaged(L"X"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_18)->SetText(::vl::WString::Unmanaged(L"Exit"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_12)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_18));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_10)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_11));
		}
		{
			(this->__vwsn_precompile_19 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuBarButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_19)->SetAlt(::vl::WString::Unmanaged(L"E"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_19)->SetText(::vl::WString::Unmanaged(L"Edit"));
		}
		(this->__vwsn_precompile_20 = ::vl::__vwsn::This(this->__vwsn_precompile_19)->EnsureToolstripSubMenu());
		{
			(this->__vwsn_precompile_21 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetAlt(::vl::WString::Unmanaged(L"U"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetText(::vl::WString::Unmanaged(L"Undo"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_20)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_21));
		}
		{
			(this->__vwsn_precompile_22 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_22)->SetAlt(::vl::WString::Unmanaged(L"R"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_22)->SetText(::vl::WString::Unmanaged(L"Redo"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_20)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_22));
		}
		{
			(this->__vwsn_precompile_23 = new ::vl::presentation::controls::GuiControl(::vl::presentation::theme::ThemeName::MenuSplitter));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_20)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_23));
		}
		{
			(this->__vwsn_precompile_24 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_24)->SetAlt(::vl::WString::Unmanaged(L"T"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_24)->SetText(::vl::WString::Unmanaged(L"Cut"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_20)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_24));
		}
		{
			(this->__vwsn_precompile_25 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_25)->SetAlt(::vl::WString::Unmanaged(L"C"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_25)->SetText(::vl::WString::Unmanaged(L"Copy"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_20)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_25));
		}
		{
			(this->__vwsn_precompile_26 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_26)->SetAlt(::vl::WString::Unmanaged(L"P"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_26)->SetText(::vl::WString::Unmanaged(L"Paste"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_20)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_26));
		}
		{
			(this->__vwsn_precompile_27 = new ::vl::presentation::controls::GuiControl(::vl::presentation::theme::ThemeName::MenuSplitter));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_20)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_27));
		}
		{
			(this->__vwsn_precompile_28 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_28)->SetAlt(::vl::WString::Unmanaged(L"A"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_28)->SetText(::vl::WString::Unmanaged(L"Select All"));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_20)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_28));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_10)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_19));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_9.Obj())->GetContainer())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_10)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->documentViewer)->AddDocumentItem(this->__vwsn_precompile_9);
		}
		(this->__vwsn_precompile_29 = ::vl::Ptr<::vl::presentation::controls::GuiDocumentItem>(new ::vl::presentation::controls::GuiDocumentItem(::vl::WString::Unmanaged(L"Table"))));
		(this->__vwsn_precompile_30 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetCellPadding(static_cast<::vl::vint>(5));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetRowsAndColumns(static_cast<::vl::vint>(3), static_cast<::vl::vint>(3));
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetRowOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetColumnOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetColumnOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_31 = ::vl::Ptr<::vl::presentation::elements::GuiSolidBorderElement>(::vl::reflection::description::Element_Constructor<::vl::presentation::elements::GuiSolidBorderElement>()));
		{
			::vl::__vwsn::This(this->__vwsn_precompile_31.Obj())->SetColor(::vl::__vwsn::Parse<::vl::presentation::Color>(::vl::WString::Unmanaged(L"#000000")));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetOwnedElement(::vl::Ptr<::vl::presentation::elements::IGuiGraphicsElement>(this->__vwsn_precompile_31));
		}
		(this->__vwsn_precompile_32 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_32)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_33 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_33)->SetText(::vl::WString::Unmanaged(L"XOR"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_32)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_33)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_32));
		}
		(this->__vwsn_precompile_34 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_34)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_35 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_35)->SetText(::vl::WString::Unmanaged(L"false"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_34)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_35)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_34));
		}
		(this->__vwsn_precompile_36 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_36)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(2), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_37 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_37)->SetText(::vl::WString::Unmanaged(L"true"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_36)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_37)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_36));
		}
		(this->__vwsn_precompile_38 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_38)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_39 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_39)->SetText(::vl::WString::Unmanaged(L"false"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_38)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_39)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_38));
		}
		(this->__vwsn_precompile_40 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_40)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_41 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_41)->SetText(::vl::WString::Unmanaged(L"false"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_40)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_41)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_40));
		}
		(this->__vwsn_precompile_42 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_42)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(2), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_43 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_43)->SetText(::vl::WString::Unmanaged(L"true"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_42)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_43)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_42));
		}
		(this->__vwsn_precompile_44 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_44)->SetSite(static_cast<::vl::vint>(2), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_45 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_45)->SetText(::vl::WString::Unmanaged(L"true"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_44)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_45)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_44));
		}
		(this->__vwsn_precompile_46 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_46)->SetSite(static_cast<::vl::vint>(2), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_47 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_47)->SetText(::vl::WString::Unmanaged(L"true"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_46)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_47)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_46));
		}
		(this->__vwsn_precompile_48 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_48)->SetSite(static_cast<::vl::vint>(2), static_cast<::vl::vint>(2), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_49 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_49)->SetText(::vl::WString::Unmanaged(L"false"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_48)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_49)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_48));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_29.Obj())->GetContainer())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_30));
		}
		{
			::vl::__vwsn::This(this->documentViewer)->AddDocumentItem(this->__vwsn_precompile_29);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::controls::GuiControl*>(this->documentViewer));
		}
		{
			::vl::__vwsn::This(this->documentViewer)->SetDocument(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::DocumentModel>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"EmbeddedDocument/Document"), true).Obj())));
		}
		{
			auto __vwsn_event_handler_ = LAMBDA(::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->documentViewer)->ActiveHyperlinkExecuted, __vwsn_event_handler_);
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: ViewModel(::vl::Ptr<::demo::IViewModel>())
		, documentViewer(static_cast<::vl::presentation::controls::GuiDocumentViewer*>(nullptr))
		, __vwsn_precompile_0(static_cast<::demo::MainWindow*>(nullptr))
		, __vwsn_precompile_1(::vl::Ptr<::vl::presentation::controls::GuiDocumentItem>())
		, __vwsn_precompile_2(static_cast<::vl::presentation::controls::GuiButton*>(nullptr))
		, __vwsn_precompile_3(::vl::Ptr<::vl::presentation::controls::GuiDocumentItem>())
		, __vwsn_precompile_4(static_cast<::vl::presentation::controls::GuiTreeView*>(nullptr))
		, __vwsn_precompile_5(::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>())
		, __vwsn_precompile_6(::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>())
		, __vwsn_precompile_7(::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>())
		, __vwsn_precompile_8(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_9(::vl::Ptr<::vl::presentation::controls::GuiDocumentItem>())
		, __vwsn_precompile_10(static_cast<::vl::presentation::controls::GuiToolstripMenuBar*>(nullptr))
		, __vwsn_precompile_11(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_12(static_cast<::vl::presentation::controls::GuiToolstripMenu*>(nullptr))
		, __vwsn_precompile_13(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_14(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_15(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_16(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_17(static_cast<::vl::presentation::controls::GuiControl*>(nullptr))
		, __vwsn_precompile_18(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_19(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_20(static_cast<::vl::presentation::controls::GuiToolstripMenu*>(nullptr))
		, __vwsn_precompile_21(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_22(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_23(static_cast<::vl::presentation::controls::GuiControl*>(nullptr))
		, __vwsn_precompile_24(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_25(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_26(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_27(static_cast<::vl::presentation::controls::GuiControl*>(nullptr))
		, __vwsn_precompile_28(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_29(::vl::Ptr<::vl::presentation::controls::GuiDocumentItem>())
		, __vwsn_precompile_30(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_31(::vl::Ptr<::vl::presentation::elements::GuiSolidBorderElement>())
		, __vwsn_precompile_32(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_33(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_34(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_35(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_36(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_37(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_38(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_39(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_40(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_41(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_42(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_43(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_44(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_45(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_46(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_47(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_48(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_49(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_50(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_51(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	::vl::Ptr<::demo::IViewModel> MainWindow::GetViewModel()
	{
		return this->__vwsn_parameter_ViewModel;
	}

	MainWindow::MainWindow(::vl::Ptr<::demo::IViewModel> __vwsn_ctor_parameter_ViewModel)
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
		, __vwsn_parameter_ViewModel(::vl::Ptr<::demo::IViewModel>())
	{
		(this->__vwsn_parameter_ViewModel = __vwsn_ctor_parameter_ViewModel);
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::MainWindow"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_MainWindow_Initialize(this);
	}

	MainWindow::~MainWindow()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiControlHost*>(this));
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
