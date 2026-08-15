#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceScatterEvent.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AmbienceScatterEvent_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbienceScatterEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceScatterEvent::*)(float_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::AmbienceScatterEvent::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180322450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceScatterEvent>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceScatterEvent.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AmbienceScatterEvent::*)(::GlobalNamespace::AmbienceScatterEvent)>(&::GlobalNamespace::AmbienceScatterEvent::CompareTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180322420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceScatterEvent>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AmbienceScatterEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AmbienceScatterEvent::_ctor(float_t  time, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceScatterEvent>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, time, pos);
}
inline int32_t GlobalNamespace::AmbienceScatterEvent::CompareTo(::GlobalNamespace::AmbienceScatterEvent  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceScatterEvent>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AmbienceScatterEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>"
constexpr  GlobalNamespace::AmbienceScatterEvent::operator ::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>"
constexpr ::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>* GlobalNamespace::AmbienceScatterEvent::i___System__IComparable_1___GlobalNamespace__AmbienceScatterEvent_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AmbienceScatterEvent::AmbienceScatterEvent(float_t  Time, ::UnityEngine::Vector3  Position) noexcept  {
this->Time = Time;
this->Position = Position;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbienceScatterEvent::AmbienceScatterEvent()   {
}
