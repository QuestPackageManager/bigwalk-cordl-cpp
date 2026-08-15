#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectChangeLayer.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectChangeLayer_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectChangeLayer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer::PeckEffectChangeLayer_SpecialLayer(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer::PeckEffectChangeLayer_SpecialLayer()   {
}
constexpr ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer  GlobalNamespace::PeckEffectChangeLayer_SpecialLayer::DoNotChange{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer  GlobalNamespace::PeckEffectChangeLayer_SpecialLayer::Prop{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer  GlobalNamespace::PeckEffectChangeLayer_SpecialLayer::HideOnLocalCamera{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer  GlobalNamespace::PeckEffectChangeLayer_SpecialLayer::World{static_cast<int32_t>(0xa)};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectChangeLayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectChangeLayer::*)()>(&::GlobalNamespace::PeckEffectChangeLayer::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180448d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeLayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectChangeLayer.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectChangeLayer::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectChangeLayer::Peck)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180448df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeLayer*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectChangeLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectChangeLayer::*)()>(&::GlobalNamespace::PeckEffectChangeLayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeLayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer>& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_layersPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layersPerState;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer> const& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_layersPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layersPerState;
}
constexpr void GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_set_layersPerState(::ArrayW<::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layersPerState = value;
}
constexpr bool& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_onlyForLocalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyForLocalPlayer;
}
constexpr bool const& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_onlyForLocalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyForLocalPlayer;
}
constexpr void GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_set_onlyForLocalPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyForLocalPlayer = value;
}
constexpr bool& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectChangeLayer::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectChangeLayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeLayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectChangeLayer::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeLayer*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectChangeLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeLayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectChangeLayer* GlobalNamespace::PeckEffectChangeLayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectChangeLayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectChangeLayer::PeckEffectChangeLayer()   {
}
