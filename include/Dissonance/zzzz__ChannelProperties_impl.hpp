#pragma once
// IWYU pragma private; include "Dissonance/ChannelProperties.hpp"
#include "Dissonance/zzzz__ChannelPriority_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IChannelPriorityProvider_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
//  Writing Method size for method: ::Dissonance::ChannelProperties.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::ChannelProperties::*)()>(&::Dissonance::ChannelProperties::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::ChannelProperties::*)(uint16_t)>(&::Dissonance::ChannelProperties::set_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c55d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"set_Id", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties.get_Positional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::ChannelProperties::*)()>(&::Dissonance::ChannelProperties::get_Positional)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_Positional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties.set_Positional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::ChannelProperties::*)(bool)>(&::Dissonance::ChannelProperties::set_Positional)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c55e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"set_Positional", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::ChannelProperties::*)()>(&::Dissonance::ChannelProperties::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::ChannelProperties::*)(::Dissonance::ChannelPriority)>(&::Dissonance::ChannelProperties::set_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties.get_TransmitPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::ChannelProperties::*)()>(&::Dissonance::ChannelProperties::get_TransmitPriority)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c5570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_TransmitPriority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties.get_AmplitudeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::ChannelProperties::*)()>(&::Dissonance::ChannelProperties::get_AmplitudeMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties.set_AmplitudeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::ChannelProperties::*)(float_t)>(&::Dissonance::ChannelProperties::set_AmplitudeMultiplier)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c55b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"set_AmplitudeMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::ChannelProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::ChannelProperties::*)(::Dissonance::Audio::Capture::IChannelPriorityProvider*)>(&::Dissonance::ChannelProperties::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider*& Dissonance::ChannelProperties::__cordl_internal_get__defaultPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultPriority;
}
constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider* const& Dissonance::ChannelProperties::__cordl_internal_get__defaultPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultPriority;
}
constexpr void Dissonance::ChannelProperties::__cordl_internal_set__defaultPriority(::Dissonance::Audio::Capture::IChannelPriorityProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultPriority = value;
}
constexpr uint16_t& Dissonance::ChannelProperties::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr uint16_t const& Dissonance::ChannelProperties::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void Dissonance::ChannelProperties::__cordl_internal_set__Id_k__BackingField(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr bool& Dissonance::ChannelProperties::__cordl_internal_get__Positional_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Positional_k__BackingField;
}
constexpr bool const& Dissonance::ChannelProperties::__cordl_internal_get__Positional_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Positional_k__BackingField;
}
constexpr void Dissonance::ChannelProperties::__cordl_internal_set__Positional_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Positional_k__BackingField = value;
}
constexpr ::Dissonance::ChannelPriority& Dissonance::ChannelProperties::__cordl_internal_get__Priority_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Priority_k__BackingField;
}
constexpr ::Dissonance::ChannelPriority const& Dissonance::ChannelProperties::__cordl_internal_get__Priority_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Priority_k__BackingField;
}
constexpr void Dissonance::ChannelProperties::__cordl_internal_set__Priority_k__BackingField(::Dissonance::ChannelPriority  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Priority_k__BackingField = value;
}
constexpr float_t& Dissonance::ChannelProperties::__cordl_internal_get__amplitudeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeMultiplier;
}
constexpr float_t const& Dissonance::ChannelProperties::__cordl_internal_get__amplitudeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeMultiplier;
}
constexpr void Dissonance::ChannelProperties::__cordl_internal_set__amplitudeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitudeMultiplier = value;
}
inline uint16_t Dissonance::ChannelProperties::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Dissonance::ChannelProperties::set_Id(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"set_Id", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::ChannelProperties::get_Positional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_Positional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::ChannelProperties::set_Positional(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"set_Positional", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::ChannelPriority Dissonance::ChannelProperties::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline void Dissonance::ChannelProperties::set_Priority(::Dissonance::ChannelPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::ChannelPriority Dissonance::ChannelProperties::get_TransmitPriority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_TransmitPriority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline float_t Dissonance::ChannelProperties::get_AmplitudeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::ChannelProperties::set_AmplitudeMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {"set_AmplitudeMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::ChannelProperties::_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  defaultPriority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::ChannelProperties*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultPriority);
}
inline ::Dissonance::ChannelProperties* Dissonance::ChannelProperties::New_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  defaultPriority)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::ChannelProperties*>(defaultPriority));
}
// Ctor Parameters []
constexpr ::Dissonance::ChannelProperties::ChannelProperties()   {
}
