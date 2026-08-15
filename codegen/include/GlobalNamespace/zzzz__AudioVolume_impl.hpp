#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioVolume.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.get_InitialVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioVolume::*)()>(&::GlobalNamespace::AudioVolume::get_InitialVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"get_InitialVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioVolume::*)()>(&::GlobalNamespace::AudioVolume::get_Value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioVolume::*)(float_t)>(&::GlobalNamespace::AudioVolume::set_Value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"set_Value", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioVolume::*)(float_t, ::StringW)>(&::GlobalNamespace::AudioVolume::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180482610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioVolume::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioVolume::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804825f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolume*, ::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioVolume::op_GreaterThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180482680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolume*, ::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioVolume::op_LessThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180482720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolume*, ::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioVolume::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180482640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolume*, ::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioVolume::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804826e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolume.op_Implicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioVolume::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804826c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AudioVolume::__cordl_internal_get__initialVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialVolume;
}
constexpr float_t const& GlobalNamespace::AudioVolume::__cordl_internal_get__initialVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialVolume;
}
constexpr void GlobalNamespace::AudioVolume::__cordl_internal_set__initialVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialVolume = value;
}
constexpr float_t& GlobalNamespace::AudioVolume::__cordl_internal_get__realtimeVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____realtimeVolume;
}
constexpr float_t const& GlobalNamespace::AudioVolume::__cordl_internal_get__realtimeVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____realtimeVolume;
}
constexpr void GlobalNamespace::AudioVolume::__cordl_internal_set__realtimeVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____realtimeVolume = value;
}
inline float_t GlobalNamespace::AudioVolume::get_InitialVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"get_InitialVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioVolume::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioVolume::set_Value(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"set_Value", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioVolume::_ctor(float_t  initVol, ::StringW  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initVol, identifier);
}
inline int32_t GlobalNamespace::AudioVolume::CompareTo(::GlobalNamespace::AudioVolume*  audioVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, audioVolume);
}
inline bool GlobalNamespace::AudioVolume::op_GreaterThan(::GlobalNamespace::AudioVolume*  operand1, ::GlobalNamespace::AudioVolume*  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolume::op_LessThan(::GlobalNamespace::AudioVolume*  operand1, ::GlobalNamespace::AudioVolume*  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolume::op_GreaterThanOrEqual(::GlobalNamespace::AudioVolume*  operand1, ::GlobalNamespace::AudioVolume*  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolume::op_LessThanOrEqual(::GlobalNamespace::AudioVolume*  operand1, ::GlobalNamespace::AudioVolume*  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline float_t GlobalNamespace::AudioVolume::op_Implicit_float_t(::GlobalNamespace::AudioVolume*  av)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolume*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, av);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioVolume::New_ctor(float_t  initVol, ::StringW  identifier)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioVolume*>(initVol, identifier));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AudioVolume*>"
constexpr  GlobalNamespace::AudioVolume::operator ::System::IComparable_1<::GlobalNamespace::AudioVolume*>*() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::AudioVolume*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AudioVolume*>"
constexpr ::System::IComparable_1<::GlobalNamespace::AudioVolume*>* GlobalNamespace::AudioVolume::i___System__IComparable_1___GlobalNamespace__AudioVolume__() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::AudioVolume*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioVolume"
constexpr  GlobalNamespace::AudioVolume::operator ::GlobalNamespace::IAudioVolume*() noexcept {
return static_cast<::GlobalNamespace::IAudioVolume*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioVolume"
constexpr ::GlobalNamespace::IAudioVolume* GlobalNamespace::AudioVolume::i___GlobalNamespace__IAudioVolume() noexcept {
return static_cast<::GlobalNamespace::IAudioVolume*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioVolume::AudioVolume()   {
}
