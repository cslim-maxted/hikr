// This file was generated based on /Users/chulseunglim/Documents/Fuse/projects/hikr/build/Android/Preview/cache/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextBox;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct hikr_FuseControlsTextBox_Value_Property;}

namespace g{

// internal sealed class hikr_FuseControlsTextBox_Value_Property :1
// {
::g::Uno::UX::Property1_type* hikr_FuseControlsTextBox_Value_Property_typeof();
void hikr_FuseControlsTextBox_Value_Property__ctor_2_fn(hikr_FuseControlsTextBox_Value_Property* __this, ::g::Fuse::Controls::TextBox* obj, ::g::Uno::UX::Selector* name);
void hikr_FuseControlsTextBox_Value_Property__Get_fn(hikr_FuseControlsTextBox_Value_Property* __this, uString** __retval);
void hikr_FuseControlsTextBox_Value_Property__New1_fn(::g::Fuse::Controls::TextBox* obj, ::g::Uno::UX::Selector* name, hikr_FuseControlsTextBox_Value_Property** __retval);
void hikr_FuseControlsTextBox_Value_Property__get_Object_fn(hikr_FuseControlsTextBox_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void hikr_FuseControlsTextBox_Value_Property__Set_fn(hikr_FuseControlsTextBox_Value_Property* __this, uString* v, uObject* origin);
void hikr_FuseControlsTextBox_Value_Property__get_SupportsOriginSetter_fn(hikr_FuseControlsTextBox_Value_Property* __this, bool* __retval);

struct hikr_FuseControlsTextBox_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextBox*> _obj;

    void ctor_2(::g::Fuse::Controls::TextBox* obj, ::g::Uno::UX::Selector name);
    static hikr_FuseControlsTextBox_Value_Property* New1(::g::Fuse::Controls::TextBox* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
