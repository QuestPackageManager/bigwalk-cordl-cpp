#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceScatterTriggerInfo.hpp"
#include "GlobalNamespace/zzzz__AmbienceScatterEvent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AmbienceScatterTriggerInfo_def.hpp"
#include "GlobalNamespace/zzzz__AmbienceScatterEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbienceScatterTriggerInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceScatterTriggerInfo::*)(::GlobalNamespace::AudioScatterContainer*, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>)>(&::GlobalNamespace::AmbienceScatterTriggerInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceScatterTriggerInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioScatterContainer*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::AmbienceScatterEvent>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& GlobalNamespace::AmbienceScatterTriggerInfo::__cordl_internal_get_Scatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scatter;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& GlobalNamespace::AmbienceScatterTriggerInfo::__cordl_internal_get_Scatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scatter;
}
constexpr void GlobalNamespace::AmbienceScatterTriggerInfo::__cordl_internal_set_Scatter(::UnityW<::GlobalNamespace::AudioScatterContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scatter = value;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>& GlobalNamespace::AmbienceScatterTriggerInfo::__cordl_internal_get_Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterEvent> const& GlobalNamespace::AmbienceScatterTriggerInfo::__cordl_internal_get_Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
constexpr void GlobalNamespace::AmbienceScatterTriggerInfo::__cordl_internal_set_Events(::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Events = value;
}
inline void GlobalNamespace::AmbienceScatterTriggerInfo::_ctor(::GlobalNamespace::AudioScatterContainer*  scatter, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceScatterTriggerInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioScatterContainer*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::AmbienceScatterEvent>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scatter, events);
}
inline ::GlobalNamespace::AmbienceScatterTriggerInfo* GlobalNamespace::AmbienceScatterTriggerInfo::New_ctor(::GlobalNamespace::AudioScatterContainer*  scatter, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  events)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AmbienceScatterTriggerInfo*>(scatter, events));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbienceScatterTriggerInfo::AmbienceScatterTriggerInfo()   {
}
