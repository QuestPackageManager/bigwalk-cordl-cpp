#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindAction.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RebindAction_def.hpp"
#include "GlobalNamespace/zzzz__RebindAction_def.hpp"
#include "GlobalNamespace/zzzz__RebindMenu_def.hpp"
#include "GlobalNamespace/zzzz__RebindRow_def.hpp"
#include "GlobalNamespace/zzzz__Rebinder_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RebindAction___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction___c::*)()>(&::GlobalNamespace::RebindAction___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction___c._GetActionMaps_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RebindAction___c::*)(::Rewired::ActionElementMap*, ::Rewired::ActionElementMap*)>(&::GlobalNamespace::RebindAction___c::_GetActionMaps_b__14_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804444e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction___c*>(),
                        {"<GetActionMaps>b__14_0", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RebindAction___c::setStaticF___9(::GlobalNamespace::RebindAction___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RebindAction___c*, "<>9", ::GlobalNamespace::RebindAction___c*>(std::forward<::GlobalNamespace::RebindAction___c*>(value));
}
inline ::GlobalNamespace::RebindAction___c* GlobalNamespace::RebindAction___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RebindAction___c*, "<>9", ::GlobalNamespace::RebindAction___c*>();
}
inline void GlobalNamespace::RebindAction___c::setStaticF___9__14_0(::System::Comparison_1<::Rewired::ActionElementMap*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Rewired::ActionElementMap*>*, "<>9__14_0", ::GlobalNamespace::RebindAction___c*>(std::forward<::System::Comparison_1<::Rewired::ActionElementMap*>*>(value));
}
inline ::System::Comparison_1<::Rewired::ActionElementMap*>* GlobalNamespace::RebindAction___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Rewired::ActionElementMap*>*, "<>9__14_0", ::GlobalNamespace::RebindAction___c*>();
}
inline void GlobalNamespace::RebindAction___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RebindAction___c::_GetActionMaps_b__14_0(::Rewired::ActionElementMap*  a, ::Rewired::ActionElementMap*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction___c*>(),
                        {"<GetActionMaps>b__14_0", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::RebindAction___c* GlobalNamespace::RebindAction___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RebindAction___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RebindAction___c::RebindAction___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::RebindAction.get_rebindType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Rebinder_RebindType (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::get_rebindType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18043a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"get_rebindType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::get_player)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043a890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction::*)(::GlobalNamespace::RebindMenu*, int32_t, ::Rewired::AxisRange)>(&::GlobalNamespace::RebindAction::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18043a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RebindMenu*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.ReplaceOldMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction::*)(::Rewired::ActionElementMap*)>(&::GlobalNamespace::RebindAction::ReplaceOldMaps)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18043a160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"ReplaceOldMaps", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.GetActionMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>* (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::GetActionMaps)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x1804399a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"GetActionMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.CheckSharedElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ActionElementMap*, ::Rewired::ActionElementMap*)>(&::GlobalNamespace::RebindAction::CheckSharedElement)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804397f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"CheckSharedElement", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.HasMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::HasMaps)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18043a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"HasMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.IsDisabledForController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::IsDisabledForController)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"IsDisabledForController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::Refresh)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18043a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.GetWrappedGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RebindAction::*)(::Rewired::ActionElementMap*)>(&::GlobalNamespace::RebindAction::GetWrappedGlyph)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180439fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"GetWrappedGlyph", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180439950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.StartRebind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::StartRebind)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18043a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"StartRebind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.AfterRebindFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction::*)(bool)>(&::GlobalNamespace::RebindAction::AfterRebindFinished)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180439700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"AfterRebindFinished", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.AfterRebindSucess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::AfterRebindSucess)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180439770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"AfterRebindSucess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.AfterRebindTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::AfterRebindTimeout)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804397c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"AfterRebindTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindAction.GetBestController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::GlobalNamespace::RebindAction::*)()>(&::GlobalNamespace::RebindAction::GetBestController)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180439f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"GetBestController", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RebindAction::__cordl_internal_get_actionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionId;
}
constexpr int32_t const& GlobalNamespace::RebindAction::__cordl_internal_get_actionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionId;
}
constexpr void GlobalNamespace::RebindAction::__cordl_internal_set_actionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionId = value;
}
constexpr ::UnityW<::GlobalNamespace::RebindRow>& GlobalNamespace::RebindAction::__cordl_internal_get_rebindRow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindRow;
}
constexpr ::UnityW<::GlobalNamespace::RebindRow> const& GlobalNamespace::RebindAction::__cordl_internal_get_rebindRow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindRow;
}
constexpr void GlobalNamespace::RebindAction::__cordl_internal_set_rebindRow(::UnityW<::GlobalNamespace::RebindRow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindRow = value;
}
constexpr ::Rewired::AxisRange& GlobalNamespace::RebindAction::__cordl_internal_get_axisRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisRange;
}
constexpr ::Rewired::AxisRange const& GlobalNamespace::RebindAction::__cordl_internal_get_axisRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisRange;
}
constexpr void GlobalNamespace::RebindAction::__cordl_internal_set_axisRange(::Rewired::AxisRange  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisRange = value;
}
constexpr ::Rewired::Pole& GlobalNamespace::RebindAction::__cordl_internal_get_axisPole()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisPole;
}
constexpr ::Rewired::Pole const& GlobalNamespace::RebindAction::__cordl_internal_get_axisPole() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisPole;
}
constexpr void GlobalNamespace::RebindAction::__cordl_internal_set_axisPole(::Rewired::Pole  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisPole = value;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu>& GlobalNamespace::RebindAction::__cordl_internal_get_rebindMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenu;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& GlobalNamespace::RebindAction::__cordl_internal_get_rebindMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenu;
}
constexpr void GlobalNamespace::RebindAction::__cordl_internal_set_rebindMenu(::UnityW<::GlobalNamespace::RebindMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindMenu = value;
}
inline void GlobalNamespace::RebindAction::setStaticF_PROMPT_STRING(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "PROMPT_STRING", ::GlobalNamespace::RebindAction*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RebindAction::getStaticF_PROMPT_STRING()  {
return ::cordl_internals::getStaticField<::StringW, "PROMPT_STRING", ::GlobalNamespace::RebindAction*>();
}
inline void GlobalNamespace::RebindAction::setStaticF_UNMAPPED_STRING(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "UNMAPPED_STRING", ::GlobalNamespace::RebindAction*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RebindAction::getStaticF_UNMAPPED_STRING()  {
return ::cordl_internals::getStaticField<::StringW, "UNMAPPED_STRING", ::GlobalNamespace::RebindAction*>();
}
inline void GlobalNamespace::RebindAction::setStaticF_NOTAPPLICABLE_STRING(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "NOTAPPLICABLE_STRING", ::GlobalNamespace::RebindAction*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RebindAction::getStaticF_NOTAPPLICABLE_STRING()  {
return ::cordl_internals::getStaticField<::StringW, "NOTAPPLICABLE_STRING", ::GlobalNamespace::RebindAction*>();
}
inline ::GlobalNamespace::Rebinder_RebindType GlobalNamespace::RebindAction::get_rebindType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"get_rebindType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Rebinder_RebindType>(this, ___internal_method);
}
inline ::Rewired::Player* GlobalNamespace::RebindAction::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(this, ___internal_method);
}
inline void GlobalNamespace::RebindAction::_ctor(::GlobalNamespace::RebindMenu*  rebindMenu, int32_t  actionId, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RebindMenu*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rebindMenu, actionId, axisRange);
}
inline void GlobalNamespace::RebindAction::ReplaceOldMaps(::Rewired::ActionElementMap*  incoming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"ReplaceOldMaps", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, incoming);
}
inline ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>* GlobalNamespace::RebindAction::GetActionMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"GetActionMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline bool GlobalNamespace::RebindAction::CheckSharedElement(::Rewired::ActionElementMap*  aem1, ::Rewired::ActionElementMap*  aem2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"CheckSharedElement", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aem1, aem2);
}
inline bool GlobalNamespace::RebindAction::HasMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"HasMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RebindAction::IsDisabledForController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"IsDisabledForController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RebindAction::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RebindAction::GetWrappedGlyph(::Rewired::ActionElementMap*  actionElementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"GetWrappedGlyph", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, actionElementMap);
}
inline void GlobalNamespace::RebindAction::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindAction::StartRebind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"StartRebind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindAction::AfterRebindFinished(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"AfterRebindFinished", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::RebindAction::AfterRebindSucess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"AfterRebindSucess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindAction::AfterRebindTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"AfterRebindTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Controller* GlobalNamespace::RebindAction::GetBestController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindAction*>(),
                        {"GetBestController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(this, ___internal_method);
}
inline ::GlobalNamespace::RebindAction* GlobalNamespace::RebindAction::New_ctor(::GlobalNamespace::RebindMenu*  rebindMenu, int32_t  actionId, ::Rewired::AxisRange  axisRange)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RebindAction*>(rebindMenu, actionId, axisRange));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RebindAction::RebindAction()   {
}
