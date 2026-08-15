#pragma once
// IWYU pragma private; include "GlobalNamespace/DevMenuRow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevMenuRow_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevMenuRow.Assign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevMenuRow::*)(::StringW, ::UnityEngine::Events::UnityAction*)>(&::GlobalNamespace::DevMenuRow::Assign)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180420ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevMenuRow*>(),
                        {"Assign", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevMenuRow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevMenuRow::*)()>(&::GlobalNamespace::DevMenuRow::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevMenuRow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::DevMenuRow::__cordl_internal_get_labelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___labelText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::DevMenuRow::__cordl_internal_get_labelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___labelText;
}
constexpr void GlobalNamespace::DevMenuRow::__cordl_internal_set_labelText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___labelText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::DevMenuRow::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::DevMenuRow::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::DevMenuRow::__cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
inline void GlobalNamespace::DevMenuRow::Assign(::StringW  label, ::UnityEngine::Events::UnityAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevMenuRow*>(),
                        {"Assign", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, action);
}
inline void GlobalNamespace::DevMenuRow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevMenuRow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevMenuRow* GlobalNamespace::DevMenuRow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevMenuRow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevMenuRow::DevMenuRow()   {
}
