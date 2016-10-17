// This file was generated based on /Users/chulseunglim/Documents/Fuse/projects/hikr/build/Android/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_FuseControlsTextBox_Value_Property.h>
#include <_root.hikr_FuseControlsTextView_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[13];
static uType* TYPES[4];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :12
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("name");
    ::STRINGS[2] = uString::Const("location");
    ::STRINGS[3] = uString::Const("distance");
    ::STRINGS[4] = uString::Const("rating");
    ::STRINGS[5] = uString::Const("comments");
    ::STRINGS[6] = uString::Const("var Observable = require('FuseJS/Observable');\n"
        "\n"
        "\t\t\tvar name = Observable(\"Tricky Trails\");\n"
        "\t\t\tvar location = Observable(\"Lakebed, Utah\");\n"
        "\t\t\tvar distance = Observable(10.4)\n"
        "\t\t\tvar rating = Observable(4);\n"
        "\t\t\tvar comments = Observable(\"This hike was nice and hike -like. Glad I didn't bring a bike. \355\225\230\354\235\264\355\202\271\354\235\264 \352\267\270\353\240\207\352\262\214 \355\225\230\352\263\240 \354\213\266\353\202\230\354\232\224? \354\240\200\353\212\224 \352\261\267\353\212\224 \352\262\203 \353\263\204\353\241\234 \354\225\210\354\242\213\354\225\204\355\225\230\352\263\240, \354\236\220\354\240\204\352\261\260\353\245\274 \354\233\200\354\247\201\354\235\264\353\212\224 \352\262\203\353\217\204 \352\267\270\353\213\244\354\247\200 \353\260\224\353\235\274\354\247\200 \354\225\212\354\212\265\353\213\210\353\213\244. \352\267\270\353\203\245 \352\260\200\353\247\214\355\236\210 \354\236\210\354\234\274\353\251\264 \354\240\200\354\240\210\353\241\234 \354\233\200\354\247\201\354\235\264\353\251\264 \354\242\213\352\262\240\353\204\244\354\232\224. \355\227\220...\355\225\234\352\270\200 \352\271\250\354\247\200\353\204\244\354\232\224.\");\n"
        "\n"
        "\t\t\tmodule.exports = {\n"
        "\t\t\t\tname: name,\n"
        "\t\t\t\tlocation: location,\n"
        "\t\t\t\trating: rating,\n"
        "\t\t\t\tcomments: comments\n"
        "\t\t\t}");
    ::STRINGS[7] = uString::Const("MainView.ux");
    ::STRINGS[8] = uString::Const("name:");
    ::STRINGS[9] = uString::Const("location:");
    ::STRINGS[10] = uString::Const("distance:");
    ::STRINGS[11] = uString::Const("rating:");
    ::STRINGS[12] = uString::Const("comments:");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp4_Value_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 17;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :16
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :20
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :16
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;

// public MainView() [instance] :16
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :20
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp5 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp6 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp7 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp8 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp9 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Polyfills::Window::WindowModule* temp10 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp11 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp12 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp13 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp14 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp15 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp16 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp17 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Controls::TextBox* temp = ::g::Fuse::Controls::TextBox::New4();
    temp_Value_inst = ::g::hikr_FuseControlsTextBox_Value_Property::New1(temp, MainView::__selector0());
    ::g::Fuse::Controls::TextBox* temp1 = ::g::Fuse::Controls::TextBox::New4();
    temp1_Value_inst = ::g::hikr_FuseControlsTextBox_Value_Property::New1(temp1, MainView::__selector0());
    ::g::Fuse::Controls::TextBox* temp2 = ::g::Fuse::Controls::TextBox::New4();
    temp2_Value_inst = ::g::hikr_FuseControlsTextBox_Value_Property::New1(temp2, MainView::__selector0());
    ::g::Fuse::Controls::TextBox* temp3 = ::g::Fuse::Controls::TextBox::New4();
    temp3_Value_inst = ::g::hikr_FuseControlsTextBox_Value_Property::New1(temp3, MainView::__selector0());
    ::g::Fuse::Controls::TextView* temp4 = ::g::Fuse::Controls::TextView::New3();
    temp4_Value_inst = ::g::hikr_FuseControlsTextView_Value_Property::New1(temp4, MainView::__selector0());
    ::g::Fuse::Controls::ClientPanel* temp18 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Reactive::JavaScript* temp19 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp22 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[1/*"name"*/]);
    ::g::Fuse::Controls::Text* temp23 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp24 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[2/*"location"*/]);
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp26 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[3/*"distance"*/]);
    ::g::Fuse::Controls::Text* temp27 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp28 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[4/*"rating"*/]);
    ::g::Fuse::Controls::Text* temp29 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp30 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp4_Value_inst, ::STRINGS[5/*"comments"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp19->Code(::STRINGS[6/*"var Observa...*/]);
    temp19->LineNumber(3);
    temp19->FileName(::STRINGS[7/*"MainView.ux"*/]);
    temp20->Orientation(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp21->Value(::STRINGS[8/*"name:"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp23->Value(::STRINGS[9/*"location:"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    temp25->Value(::STRINGS[10/*"distance:"*/]);
    temp2->InputHint(5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp27->Value(::STRINGS[11/*"rating:"*/]);
    temp3->InputHint(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp29->Value(::STRINGS[12/*"comments:"*/]);
    temp4->TextWrapping(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
}

// public MainView New() [static] :16
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
