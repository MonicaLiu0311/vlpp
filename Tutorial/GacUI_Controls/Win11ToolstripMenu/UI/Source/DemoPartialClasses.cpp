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

	::vl::presentation::templates::GuiControlTemplate* __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_viewModel_) const
	{
		{
			return static_cast<::vl::presentation::templates::GuiControlTemplate*>(new ::demo::MenuToolBarControlTemplate());
		}
	}

	//-------------------------------------------------------------------

	__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiMouseEventArgs* arguments) const
	{
		auto b = ::vl::__vwsn::This(::vl::__vwsn::This(__vwsnthis_0->self)->GetContainerComposition())->GetGlobalBounds();
		auto p = [&](){ ::vl::presentation::Point __vwsn_temp__; __vwsn_temp__.x = (::vl::__vwsn::This(arguments)->x + b.x1); __vwsn_temp__.y = (::vl::__vwsn::This(arguments)->y + b.y1); return __vwsn_temp__; }();
		::vl::__vwsn::This(__vwsnthis_0->menuEdit)->ShowPopup(static_cast<::vl::presentation::controls::GuiControl*>(__vwsnthis_0->self), p);
	}
}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_)
	{
		(this->self = __vwsn_this_);
		(this->__vwsn_precompile_16 = ::vl::__vwsn::This(this->self)->GetContainerComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_16)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(320); __vwsn_temp__.y = static_cast<::vl::vint>(240); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->self)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(640); __vwsn_temp__.y = static_cast<::vl::vint>(480); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->self)->SetText(::vl::WString::Unmanaged(L"Win11ToolstripMenu"));
		}
		(this->commandCut = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandCut)->SetShortcutBuilder(::vl::WString::Unmanaged(L"Ctrl+X"));
		}
		{
			::vl::__vwsn::This(this->commandCut)->SetText(::vl::WString::Unmanaged(L"Cut"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandCut));
		}
		(this->commandCopy = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandCopy)->SetShortcutBuilder(::vl::WString::Unmanaged(L"Ctrl+C"));
		}
		{
			::vl::__vwsn::This(this->commandCopy)->SetText(::vl::WString::Unmanaged(L"Copy"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandCopy));
		}
		(this->commandPaste = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandPaste)->SetShortcutBuilder(::vl::WString::Unmanaged(L"Ctrl+V"));
		}
		{
			::vl::__vwsn::This(this->commandPaste)->SetText(::vl::WString::Unmanaged(L"Paste"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandPaste));
		}
		(this->commandDelete = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandDelete)->SetText(::vl::WString::Unmanaged(L"Delete"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandDelete));
		}
		(this->commandUndo = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandUndo)->SetShortcutBuilder(::vl::WString::Unmanaged(L"Ctrl+Z"));
		}
		{
			::vl::__vwsn::This(this->commandUndo)->SetText(::vl::WString::Unmanaged(L"Undo"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandUndo));
		}
		(this->commandRedo = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandRedo)->SetShortcutBuilder(::vl::WString::Unmanaged(L"Ctrl+Y"));
		}
		{
			::vl::__vwsn::This(this->commandRedo)->SetText(::vl::WString::Unmanaged(L"Redo"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandRedo));
		}
		(this->commandExportPrivate = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandExportPrivate)->SetText(::vl::WString::Unmanaged(L"Export as Private Format"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandExportPrivate));
		}
		(this->commandExportRtf = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandExportRtf)->SetText(::vl::WString::Unmanaged(L"Export as Rich Text Format"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandExportRtf));
		}
		(this->commandExportHtml = new ::vl::presentation::controls::GuiToolstripCommand());
		{
			::vl::__vwsn::This(this->commandExportHtml)->SetText(::vl::WString::Unmanaged(L"Export as HTML"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandExportHtml));
		}
		{
			(this->menuEdit = new ::vl::presentation::controls::GuiToolstripMenu(::vl::presentation::theme::ThemeName::Menu, static_cast<::vl::presentation::controls::GuiControl*>(nullptr)));
		}
		{
			(this->__vwsn_precompile_0 = new ::vl::presentation::controls::GuiToolstripGroupContainer(::vl::presentation::theme::ThemeName::CustomControl));
		}
		{
			(this->__vwsn_precompile_1 = new ::vl::presentation::controls::GuiToolstripGroup(::vl::presentation::theme::ThemeName::CustomControl));
		}
		{
			(this->__vwsn_precompile_2 = new ::vl::presentation::controls::GuiToolstripToolBar(::vl::presentation::theme::ThemeName::ToolstripToolBar));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetControlTemplate(LAMBDA(::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this)));
		}
		{
			(this->__vwsn_precompile_3 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::ToolstripButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_2)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_3));
		}
		{
			(this->__vwsn_precompile_4 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::ToolstripButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_2)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_4));
		}
		{
			(this->__vwsn_precompile_5 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::ToolstripButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_2)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_5));
		}
		{
			(this->__vwsn_precompile_6 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::ToolstripButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_2)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_6));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_1)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_2));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_1));
		}
		{
			(this->__vwsn_precompile_7 = new ::vl::presentation::controls::GuiToolstripGroup(::vl::presentation::theme::ThemeName::CustomControl));
		}
		{
			(this->__vwsn_precompile_8 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_7)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_8));
		}
		{
			(this->__vwsn_precompile_9 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_7)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_9));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_7));
		}
		{
			(this->__vwsn_precompile_10 = new ::vl::presentation::controls::GuiToolstripGroup(::vl::presentation::theme::ThemeName::CustomControl));
		}
		{
			(this->__vwsn_precompile_11 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_10)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_11));
		}
		{
			(this->__vwsn_precompile_12 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_10)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_12));
		}
		{
			(this->__vwsn_precompile_13 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_10)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_13));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_10));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->menuEdit)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_0));
		}
		{
			::vl::__vwsn::This(this->self)->AddControlHostComponent(static_cast<::vl::presentation::controls::GuiControlHost*>(this->menuEdit));
		}
		{
			(this->__vwsn_precompile_14 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		(this->__vwsn_precompile_15 = ::vl::__vwsn::This(this->__vwsn_precompile_14)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_15)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(5); __vwsn_temp__.top = static_cast<::vl::vint>(5); __vwsn_temp__.right = static_cast<::vl::vint>(5); __vwsn_temp__.bottom = static_cast<::vl::vint>(5); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->SetFont(::vl::Nullable<::vl::presentation::FontProperties>([&](){ ::vl::presentation::FontProperties __vwsn_temp__; __vwsn_temp__.fontFamily = ::vl::WString::Unmanaged(L"Segoe UI"); __vwsn_temp__.size = static_cast<::vl::vint>(24); return __vwsn_temp__; }()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->SetText(::vl::WString::Unmanaged(L"Right click to show the menu"));
		}
		{
			::vl::__vwsn::This(this->self)->AddChild(static_cast<::vl::presentation::controls::GuiControl*>(this->__vwsn_precompile_14));
		}
		{
			::vl::__vwsn::This(this->commandCut)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/Cut"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->commandCopy)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/Copy"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->commandPaste)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/Paste"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->commandDelete)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/Delete"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->commandUndo)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/Undo"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->commandRedo)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/Redo"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->commandExportPrivate)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/FormatPrivate"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->commandExportRtf)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/FormatRtf"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->commandExportHtml)->SetImage(::vl::__vwsn::Ensure(::vl::__vwsn::SharedPtrCast<::vl::presentation::GuiImageData>(::vl::__vwsn::This(__vwsn_this_)->ResolveResource(::vl::WString::Unmanaged(L"res"), ::vl::WString::Unmanaged(L"Images/FormatHtml"), true).Obj())));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetCommand(this->commandCut);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetCommand(this->commandCopy);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetCommand(this->commandPaste);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetCommand(this->commandDelete);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->SetCommand(this->commandUndo);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_9)->SetCommand(this->commandRedo);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_11)->SetCommand(this->commandExportPrivate);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_12)->SetCommand(this->commandExportRtf);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_13)->SetCommand(this->commandExportHtml);
		}
		{
			auto __vwsn_event_handler_ = LAMBDA(::vl_workflow_global::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->__vwsn_precompile_16)->GetEventReceiver()->rightButtonDown, __vwsn_event_handler_);
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: self(static_cast<::demo::MainWindow*>(nullptr))
		, commandCut(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, commandCopy(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, commandPaste(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, commandDelete(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, commandUndo(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, commandRedo(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, commandExportPrivate(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, commandExportRtf(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, commandExportHtml(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, menuEdit(static_cast<::vl::presentation::controls::GuiToolstripMenu*>(nullptr))
		, __vwsn_precompile_0(static_cast<::vl::presentation::controls::GuiToolstripGroupContainer*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::controls::GuiToolstripGroup*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::controls::GuiToolstripToolBar*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_4(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_5(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_6(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_7(static_cast<::vl::presentation::controls::GuiToolstripGroup*>(nullptr))
		, __vwsn_precompile_8(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_9(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_10(static_cast<::vl::presentation::controls::GuiToolstripGroup*>(nullptr))
		, __vwsn_precompile_11(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_12(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_13(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_14(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_15(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_16(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::MainWindow"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_MainWindow_Initialize(this);
	}

	MainWindow::~MainWindow()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiControlHost*>(this));
	}

/***********************************************************************
Class (::demo::MenuToolBarControlTemplateConstructor)
***********************************************************************/

	void MenuToolBarControlTemplateConstructor::__vwsn_demo_MenuToolBarControlTemplate_Initialize(::demo::MenuToolBarControlTemplate* __vwsn_this_)
	{
		(this->__vwsn_precompile_0 = __vwsn_this_);
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
	}

	MenuToolBarControlTemplateConstructor::MenuToolBarControlTemplateConstructor()
		: __vwsn_precompile_0(static_cast<::demo::MenuToolBarControlTemplate*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MenuToolBarControlTemplate)
***********************************************************************/

	MenuToolBarControlTemplate::MenuToolBarControlTemplate()
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::MenuToolBarControlTemplate"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_MenuToolBarControlTemplate_Initialize(this);
	}

	MenuToolBarControlTemplate::~MenuToolBarControlTemplate()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::templates::GuiTemplate*>(this));
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
