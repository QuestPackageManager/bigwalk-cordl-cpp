#pragma once
// IWYU pragma private; include "Dissonance/Networking/ChannelBitField.hpp"
#include "Dissonance/Networking/zzzz__ChannelBitField_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField.get_Bitfield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Networking::ChannelBitField::*)()>(&::Dissonance::Networking::ChannelBitField::get_Bitfield)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_Bitfield", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelType (::Dissonance::Networking::ChannelBitField::*)()>(&::Dissonance::Networking::ChannelBitField::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805da160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField.get_IsClosing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::ChannelBitField::*)()>(&::Dissonance::Networking::ChannelBitField::get_IsClosing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805da0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_IsClosing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField.get_IsPositional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::ChannelBitField::*)()>(&::Dissonance::Networking::ChannelBitField::get_IsPositional)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805da0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_IsPositional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::Networking::ChannelBitField::*)()>(&::Dissonance::Networking::ChannelBitField::get_Priority)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805da100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField.get_AmplitudeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Networking::ChannelBitField::*)()>(&::Dissonance::Networking::ChannelBitField::get_AmplitudeMultiplier)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805da090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Networking::ChannelBitField::*)()>(&::Dissonance::Networking::ChannelBitField::get_SessionId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805da140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ChannelBitField::*)(uint16_t)>(&::Dissonance::Networking::ChannelBitField::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ChannelBitField::*)(::Dissonance::ChannelType, int32_t, ::Dissonance::ChannelPriority, float_t, bool, bool)>(&::Dissonance::Networking::ChannelBitField::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805d9f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Dissonance::ChannelPriority>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ChannelBitField.PackPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::Dissonance::ChannelPriority)>(&::Dissonance::Networking::ChannelBitField::PackPriority)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d9ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"PackPriority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
inline uint16_t Dissonance::Networking::ChannelBitField::get_Bitfield()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_Bitfield", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline ::Dissonance::ChannelType Dissonance::Networking::ChannelBitField::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelType>(*this, ___internal_method);
}
inline bool Dissonance::Networking::ChannelBitField::get_IsClosing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_IsClosing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Dissonance::Networking::ChannelBitField::get_IsPositional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_IsPositional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Dissonance::ChannelPriority Dissonance::Networking::ChannelBitField::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(*this, ___internal_method);
}
inline float_t Dissonance::Networking::ChannelBitField::get_AmplitudeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline int32_t Dissonance::Networking::ChannelBitField::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Dissonance::Networking::ChannelBitField::_ctor(uint16_t  bitfield)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitfield);
}
inline void Dissonance::Networking::ChannelBitField::_ctor(::Dissonance::ChannelType  type, int32_t  sessionId, ::Dissonance::ChannelPriority  priority, float_t  amplitudeMult, bool  positional, bool  closing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Dissonance::ChannelPriority>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, sessionId, priority, amplitudeMult, positional, closing);
}
inline uint16_t Dissonance::Networking::ChannelBitField::PackPriority(::Dissonance::ChannelPriority  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ChannelBitField>(),
                        {"PackPriority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, priority);
}
// Ctor Parameters [CppParam { name: "_Bitfield_k__BackingField", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::ChannelBitField::ChannelBitField(uint16_t  _Bitfield_k__BackingField) noexcept  {
this->_Bitfield_k__BackingField = _Bitfield_k__BackingField;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::ChannelBitField::ChannelBitField()   {
}
