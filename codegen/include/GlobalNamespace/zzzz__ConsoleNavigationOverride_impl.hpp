#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleNavigationOverride.hpp"
#include "UnityEngine/UI/zzzz__Navigation_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConsoleNavigationOverride_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConsoleNavigationOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleNavigationOverride::*)()>(&::GlobalNamespace::ConsoleNavigationOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleNavigationOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Selectable>& GlobalNamespace::ConsoleNavigationOverride::__cordl_internal_get_selectable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectable;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable> const& GlobalNamespace::ConsoleNavigationOverride::__cordl_internal_get_selectable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectable;
}
constexpr void GlobalNamespace::ConsoleNavigationOverride::__cordl_internal_set_selectable(::UnityW<::UnityEngine::UI::Selectable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectable = value;
}
constexpr ::UnityEngine::UI::Navigation& GlobalNamespace::ConsoleNavigationOverride::__cordl_internal_get_navigation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navigation;
}
constexpr ::UnityEngine::UI::Navigation const& GlobalNamespace::ConsoleNavigationOverride::__cordl_internal_get_navigation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navigation;
}
constexpr void GlobalNamespace::ConsoleNavigationOverride::__cordl_internal_set_navigation(::UnityEngine::UI::Navigation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navigation = value;
}
inline void GlobalNamespace::ConsoleNavigationOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleNavigationOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConsoleNavigationOverride* GlobalNamespace::ConsoleNavigationOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConsoleNavigationOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleNavigationOverride::ConsoleNavigationOverride()   {
}
