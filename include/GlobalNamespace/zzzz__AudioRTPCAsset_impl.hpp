#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCAsset.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCTerm_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCValue_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPC_YAxisType (::GlobalNamespace::AudioRTPCAsset::*)()>(&::GlobalNamespace::AudioRTPCAsset::get_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"get_YAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset.set_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAsset::*)(::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCAsset::set_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAsset::*)()>(&::GlobalNamespace::AudioRTPCAsset::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18048b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAsset::*)()>(&::GlobalNamespace::AudioRTPCAsset::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCY (::GlobalNamespace::AudioRTPCAsset::*)(::GlobalNamespace::IAudioRTPCXProvider*)>(&::GlobalNamespace::AudioRTPCAsset::GetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048b090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset.ValidateRTPCFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAsset::*)(::GlobalNamespace::AudioRTPCTerm*)>(&::GlobalNamespace::AudioRTPCAsset::ValidateRTPCFile)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18048b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"ValidateRTPCFile", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset.PasteTermToRTPCAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAsset::*)(::GlobalNamespace::AudioRTPCTerm*)>(&::GlobalNamespace::AudioRTPCAsset::PasteTermToRTPCAsset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18048b110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"PasteTermToRTPCAsset", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset.CheckNullRTPCAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioRTPCTerm*)>(&::GlobalNamespace::AudioRTPCAsset::CheckNullRTPCAsset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18048af90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"CheckNullRTPCAsset", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAsset::*)()>(&::GlobalNamespace::AudioRTPCAsset::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType& GlobalNamespace::AudioRTPCAsset::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& GlobalNamespace::AudioRTPCAsset::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void GlobalNamespace::AudioRTPCAsset::__cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yAxis = value;
}
constexpr ::GlobalNamespace::AudioRTPCTerm*& GlobalNamespace::AudioRTPCAsset::__cordl_internal_get_RTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPC;
}
constexpr ::GlobalNamespace::AudioRTPCTerm* const& GlobalNamespace::AudioRTPCAsset::__cordl_internal_get_RTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPC;
}
constexpr void GlobalNamespace::AudioRTPCAsset::__cordl_internal_set_RTPC(::GlobalNamespace::AudioRTPCTerm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RTPC = value;
}
inline ::GlobalNamespace::AudioRTPC_YAxisType GlobalNamespace::AudioRTPCAsset::get_YAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"get_YAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPC_YAxisType>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCAsset::set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioRTPCAsset::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCAsset::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCY GlobalNamespace::AudioRTPCAsset::GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCY>(this, ___internal_method, xProvider);
}
inline void GlobalNamespace::AudioRTPCAsset::ValidateRTPCFile(::GlobalNamespace::AudioRTPCTerm*  term)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"ValidateRTPCFile", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, term);
}
inline void GlobalNamespace::AudioRTPCAsset::PasteTermToRTPCAsset(::GlobalNamespace::AudioRTPCTerm*  term)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"PasteTermToRTPCAsset", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, term);
}
inline bool GlobalNamespace::AudioRTPCAsset::CheckNullRTPCAsset(::GlobalNamespace::AudioRTPCTerm*  term)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {"CheckNullRTPCAsset", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, term);
}
inline void GlobalNamespace::AudioRTPCAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCAsset* GlobalNamespace::AudioRTPCAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPCAsset*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr  GlobalNamespace::AudioRTPCAsset::operator ::GlobalNamespace::IAudioRTPCValue*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* GlobalNamespace::AudioRTPCAsset::i___GlobalNamespace__IAudioRTPCValue() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCAsset::AudioRTPCAsset()   {
}
