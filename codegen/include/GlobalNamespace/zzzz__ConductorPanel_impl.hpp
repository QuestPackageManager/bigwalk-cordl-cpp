#pragma once
// IWYU pragma private; include "GlobalNamespace/ConductorPanel.hpp"
#include "GlobalNamespace/zzzz__ConductorLight_impl.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConductorPanel_def.hpp"
#include "GlobalNamespace/zzzz__PressInOrder_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConductorPanel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConductorPanel::*)()>(&::GlobalNamespace::ConductorPanel::Awake)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803f8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorPanel*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConductorPanel.SetShowLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConductorPanel::*)(int32_t, bool)>(&::GlobalNamespace::ConductorPanel::SetShowLight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803f8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorPanel*>(),
                        {"SetShowLight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConductorPanel.SetPromptLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConductorPanel::*)(int32_t, bool, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::ConductorPanel::SetPromptLight)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803f8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorPanel*>(),
                        {"SetPromptLight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConductorPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConductorPanel::*)()>(&::GlobalNamespace::ConductorPanel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PressInOrder>& GlobalNamespace::ConductorPanel::__cordl_internal_get_pressInOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressInOrder;
}
constexpr ::UnityW<::GlobalNamespace::PressInOrder> const& GlobalNamespace::ConductorPanel::__cordl_internal_get_pressInOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressInOrder;
}
constexpr void GlobalNamespace::ConductorPanel::__cordl_internal_set_pressInOrder(::UnityW<::GlobalNamespace::PressInOrder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressInOrder = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ConductorLight>>& GlobalNamespace::ConductorPanel::__cordl_internal_get_conductorLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conductorLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ConductorLight>> const& GlobalNamespace::ConductorPanel::__cordl_internal_get_conductorLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conductorLights;
}
constexpr void GlobalNamespace::ConductorPanel::__cordl_internal_set_conductorLights(::ArrayW<::UnityW<::GlobalNamespace::ConductorLight>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conductorLights = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& GlobalNamespace::ConductorPanel::__cordl_internal_get_promptSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptSystems;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& GlobalNamespace::ConductorPanel::__cordl_internal_get_promptSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptSystems;
}
constexpr void GlobalNamespace::ConductorPanel::__cordl_internal_set_promptSystems(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promptSystems = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::ConductorPanel::__cordl_internal_get_identifingSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifingSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::ConductorPanel::__cordl_internal_get_identifingSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifingSystem;
}
constexpr void GlobalNamespace::ConductorPanel::__cordl_internal_set_identifingSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___identifingSystem = value;
}
inline void GlobalNamespace::ConductorPanel::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorPanel*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConductorPanel::SetShowLight(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorPanel*>(),
                        {"SetShowLight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::ConductorPanel::SetPromptLight(int32_t  index, bool  value, ::GlobalNamespace::TrackedPeckState*  specificSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorPanel*>(),
                        {"SetPromptLight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value, specificSystem);
}
inline void GlobalNamespace::ConductorPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConductorPanel* GlobalNamespace::ConductorPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConductorPanel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConductorPanel::ConductorPanel()   {
}
