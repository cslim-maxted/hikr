// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface IDeferred :331
// {
uInterfaceType* IDeferred_typeof();

struct IDeferred
{
    void(*fp_Perform)(uObject*);
    static void Perform(const uInterface& __this) { __this.VTable<IDeferred>()->fp_Perform(__this); }
};
// }

}} // ::g::Fuse
