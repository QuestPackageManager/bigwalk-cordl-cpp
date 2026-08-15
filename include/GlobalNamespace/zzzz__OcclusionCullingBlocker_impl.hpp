#pragma once
// IWYU pragma private; include "GlobalNamespace/OcclusionCullingBlocker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OcclusionCullingBlocker_def.hpp"
#include "GlobalNamespace/zzzz__CameraTriggerController_def.hpp"
#include "GlobalNamespace/zzzz__CameraTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OcclusionCullingBlocker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OcclusionCullingBlocker::*)()>(&::GlobalNamespace::OcclusionCullingBlocker::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803ede70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlocker*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OcclusionCullingBlocker.HandleOnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OcclusionCullingBlocker::*)(::GlobalNamespace::CameraTriggerController*)>(&::GlobalNamespace::OcclusionCullingBlocker::HandleOnEnter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlocker*>(),
                        {"HandleOnEnter", {}, {::i2c::type_of<::GlobalNamespace::CameraTriggerController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OcclusionCullingBlocker.HandleOnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OcclusionCullingBlocker::*)(::GlobalNamespace::CameraTriggerController*)>(&::GlobalNamespace::OcclusionCullingBlocker::HandleOnExit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803ee0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlocker*>(),
                        {"HandleOnExit", {}, {::i2c::type_of<::GlobalNamespace::CameraTriggerController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OcclusionCullingBlocker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OcclusionCullingBlocker::*)()>(&::GlobalNamespace::OcclusionCullingBlocker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlocker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CameraTrigger>& GlobalNamespace::OcclusionCullingBlocker::__cordl_internal_get__cameraTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraTrigger;
}
constexpr ::UnityW<::GlobalNamespace::CameraTrigger> const& GlobalNamespace::OcclusionCullingBlocker::__cordl_internal_get__cameraTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraTrigger;
}
constexpr void GlobalNamespace::OcclusionCullingBlocker::__cordl_internal_set__cameraTrigger(::UnityW<::GlobalNamespace::CameraTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraTrigger = value;
}
inline void GlobalNamespace::OcclusionCullingBlocker::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlocker*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OcclusionCullingBlocker::HandleOnEnter(::GlobalNamespace::CameraTriggerController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlocker*>(),
                        {"HandleOnEnter", {}, {::i2c::type_of<::GlobalNamespace::CameraTriggerController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GlobalNamespace::OcclusionCullingBlocker::HandleOnExit(::GlobalNamespace::CameraTriggerController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlocker*>(),
                        {"HandleOnExit", {}, {::i2c::type_of<::GlobalNamespace::CameraTriggerController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GlobalNamespace::OcclusionCullingBlocker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlocker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OcclusionCullingBlocker* GlobalNamespace::OcclusionCullingBlocker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OcclusionCullingBlocker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OcclusionCullingBlocker::OcclusionCullingBlocker()   {
}
