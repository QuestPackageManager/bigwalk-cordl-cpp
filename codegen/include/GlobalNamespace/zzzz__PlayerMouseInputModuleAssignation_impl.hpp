#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMouseInputModuleAssignation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerMouseInputModuleAssignation_def.hpp"
#include "Rewired/Components/zzzz__PlayerMouse_def.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredStandaloneInputModule_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerMouseInputModuleAssignation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMouseInputModuleAssignation::*)()>(&::GlobalNamespace::PlayerMouseInputModuleAssignation::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMouseInputModuleAssignation.RefreshAssignation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMouseInputModuleAssignation::*)()>(&::GlobalNamespace::PlayerMouseInputModuleAssignation::RefreshAssignation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {"RefreshAssignation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMouseInputModuleAssignation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMouseInputModuleAssignation::*)()>(&::GlobalNamespace::PlayerMouseInputModuleAssignation::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMouseInputModuleAssignation.OnMousestatusChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMouseInputModuleAssignation::*)(bool)>(&::GlobalNamespace::PlayerMouseInputModuleAssignation::OnMousestatusChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18037ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {"OnMousestatusChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMouseInputModuleAssignation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMouseInputModuleAssignation::*)()>(&::GlobalNamespace::PlayerMouseInputModuleAssignation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Rewired::Components::PlayerMouse>& GlobalNamespace::PlayerMouseInputModuleAssignation::__cordl_internal_get_playerMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMouse;
}
constexpr ::UnityW<::Rewired::Components::PlayerMouse> const& GlobalNamespace::PlayerMouseInputModuleAssignation::__cordl_internal_get_playerMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMouse;
}
constexpr void GlobalNamespace::PlayerMouseInputModuleAssignation::__cordl_internal_set_playerMouse(::UnityW<::Rewired::Components::PlayerMouse>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMouse = value;
}
constexpr ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>& GlobalNamespace::PlayerMouseInputModuleAssignation::__cordl_internal_get_rewiredStandaloneInputModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredStandaloneInputModule;
}
constexpr ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule> const& GlobalNamespace::PlayerMouseInputModuleAssignation::__cordl_internal_get_rewiredStandaloneInputModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredStandaloneInputModule;
}
constexpr void GlobalNamespace::PlayerMouseInputModuleAssignation::__cordl_internal_set_rewiredStandaloneInputModule(::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rewiredStandaloneInputModule = value;
}
inline void GlobalNamespace::PlayerMouseInputModuleAssignation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMouseInputModuleAssignation::RefreshAssignation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {"RefreshAssignation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMouseInputModuleAssignation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMouseInputModuleAssignation::OnMousestatusChange(bool  activate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {"OnMousestatusChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activate);
}
inline void GlobalNamespace::PlayerMouseInputModuleAssignation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMouseInputModuleAssignation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerMouseInputModuleAssignation* GlobalNamespace::PlayerMouseInputModuleAssignation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerMouseInputModuleAssignation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerMouseInputModuleAssignation::PlayerMouseInputModuleAssignation()   {
}
