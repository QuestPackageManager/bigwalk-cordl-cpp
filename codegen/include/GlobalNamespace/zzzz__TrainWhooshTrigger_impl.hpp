#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainWhooshTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrainWhooshTrigger_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__TrainAudio_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrainWhooshTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainWhooshTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::TrainWhooshTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803e1a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainWhooshTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainWhooshTrigger.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrainWhooshTrigger::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::TrainWhooshTrigger::GetX)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803e1a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainWhooshTrigger*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainWhooshTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainWhooshTrigger::*)()>(&::GlobalNamespace::TrainWhooshTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainWhooshTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrainAudio>& GlobalNamespace::TrainWhooshTrigger::__cordl_internal_get_TrainAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrainAudio;
}
constexpr ::UnityW<::GlobalNamespace::TrainAudio> const& GlobalNamespace::TrainWhooshTrigger::__cordl_internal_get_TrainAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrainAudio;
}
constexpr void GlobalNamespace::TrainWhooshTrigger::__cordl_internal_set_TrainAudio(::UnityW<::GlobalNamespace::TrainAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrainAudio = value;
}
inline void GlobalNamespace::TrainWhooshTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainWhooshTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool GlobalNamespace::TrainWhooshTrigger::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainWhooshTrigger*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::TrainWhooshTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainWhooshTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrainWhooshTrigger* GlobalNamespace::TrainWhooshTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrainWhooshTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrainWhooshTrigger::TrainWhooshTrigger()   {
}
