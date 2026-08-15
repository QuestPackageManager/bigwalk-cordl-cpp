#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindRow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RebindRow_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__RebindAction_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RebindRow.SelectToRebind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindRow::*)()>(&::GlobalNamespace::RebindRow::SelectToRebind)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180454820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindRow*>(),
                        {"SelectToRebind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindRow.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindRow::*)()>(&::GlobalNamespace::RebindRow::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180454800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindRow*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindRow.ActionBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindRow::*)()>(&::GlobalNamespace::RebindRow::ActionBack)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804547d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindRow*>(),
                        {"ActionBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindRow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindRow::*)()>(&::GlobalNamespace::RebindRow::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindRow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::RebindRow::__cordl_internal_get_label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::RebindRow::__cordl_internal_get_label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr void GlobalNamespace::RebindRow::__cordl_internal_set_label(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___label = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::RebindRow::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::RebindRow::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void GlobalNamespace::RebindRow::__cordl_internal_set_status(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
constexpr ::GlobalNamespace::RebindAction*& GlobalNamespace::RebindRow::__cordl_internal_get_rebindAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindAction;
}
constexpr ::GlobalNamespace::RebindAction* const& GlobalNamespace::RebindRow::__cordl_internal_get_rebindAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindAction;
}
constexpr void GlobalNamespace::RebindRow::__cordl_internal_set_rebindAction(::GlobalNamespace::RebindAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindAction = value;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable>& GlobalNamespace::RebindRow::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable> const& GlobalNamespace::RebindRow::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::RebindRow::__cordl_internal_set_button(::UnityW<::UnityEngine::UI::Selectable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
inline void GlobalNamespace::RebindRow::SelectToRebind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindRow*>(),
                        {"SelectToRebind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindRow::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindRow*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindRow::ActionBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindRow*>(),
                        {"ActionBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindRow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindRow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RebindRow* GlobalNamespace::RebindRow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RebindRow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RebindRow::RebindRow()   {
}
