#pragma once
// IWYU pragma private; include "Dissonance/Demo/ToggleInvertMute.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Demo/zzzz__ToggleInvertMute_def.hpp"
#include "Dissonance/zzzz__VoiceBroadcastTrigger_def.hpp"
//  Writing Method size for method: ::Dissonance::Demo::ToggleInvertMute.set_IsUnmuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ToggleInvertMute::*)(bool)>(&::Dissonance::Demo::ToggleInvertMute::set_IsUnmuted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805d18a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ToggleInvertMute*>(),
                        {"set_IsUnmuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ToggleInvertMute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ToggleInvertMute::*)()>(&::Dissonance::Demo::ToggleInvertMute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ToggleInvertMute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Dissonance::VoiceBroadcastTrigger>& Dissonance::Demo::ToggleInvertMute::__cordl_internal_get_Trigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Trigger;
}
constexpr ::UnityW<::Dissonance::VoiceBroadcastTrigger> const& Dissonance::Demo::ToggleInvertMute::__cordl_internal_get_Trigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Trigger;
}
constexpr void Dissonance::Demo::ToggleInvertMute::__cordl_internal_set_Trigger(::UnityW<::Dissonance::VoiceBroadcastTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Trigger = value;
}
inline void Dissonance::Demo::ToggleInvertMute::set_IsUnmuted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ToggleInvertMute*>(),
                        {"set_IsUnmuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Demo::ToggleInvertMute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ToggleInvertMute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::ToggleInvertMute* Dissonance::Demo::ToggleInvertMute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::ToggleInvertMute*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::ToggleInvertMute::ToggleInvertMute()   {
}
