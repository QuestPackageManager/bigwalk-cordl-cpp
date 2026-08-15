#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCSubTerms.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCTerm_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCSubTerms_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCTerm_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCValue_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSubTerms.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm_TermType (::GlobalNamespace::AudioRTPCSubTerms::*)()>(&::GlobalNamespace::AudioRTPCSubTerms::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSubTerms.get_SubTerms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::AudioRTPCTerm*> (::GlobalNamespace::AudioRTPCSubTerms::*)()>(&::GlobalNamespace::AudioRTPCSubTerms::get_SubTerms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"get_SubTerms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSubTerms.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPC_YAxisType (::GlobalNamespace::AudioRTPCSubTerms::*)()>(&::GlobalNamespace::AudioRTPCSubTerms::get_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"get_YAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSubTerms.set_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCSubTerms::*)(::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCSubTerms::set_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSubTerms._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCSubTerms::*)(::GlobalNamespace::AudioRTPCTerm_TermType, ::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCSubTerms::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18048b970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm_TermType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSubTerms.ChangeSubTerms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCSubTerms::*)(::GlobalNamespace::AudioRTPCTerm_TermType, ::GlobalNamespace::AudioRTPC_YAxisType, ::ArrayW<::GlobalNamespace::AudioRTPCTerm*>)>(&::GlobalNamespace::AudioRTPCSubTerms::ChangeSubTerms)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048b610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"ChangeSubTerms", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm_TermType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::AudioRTPCTerm*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSubTerms.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCY (::GlobalNamespace::AudioRTPCSubTerms::*)(::GlobalNamespace::IAudioRTPCXProvider*)>(&::GlobalNamespace::AudioRTPCSubTerms::GetValue)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18048b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType& GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yAxis = value;
}
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType& GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType const& GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_set__type(::GlobalNamespace::AudioRTPCTerm_TermType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr ::ArrayW<::GlobalNamespace::AudioRTPCTerm*>& GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_get__subTerms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subTerms;
}
constexpr ::ArrayW<::GlobalNamespace::AudioRTPCTerm*> const& GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_get__subTerms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subTerms;
}
constexpr void GlobalNamespace::AudioRTPCSubTerms::__cordl_internal_set__subTerms(::ArrayW<::GlobalNamespace::AudioRTPCTerm*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subTerms = value;
}
inline ::GlobalNamespace::AudioRTPCTerm_TermType GlobalNamespace::AudioRTPCSubTerms::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm_TermType>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::AudioRTPCTerm*> GlobalNamespace::AudioRTPCSubTerms::get_SubTerms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"get_SubTerms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::AudioRTPCTerm*>>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPC_YAxisType GlobalNamespace::AudioRTPCSubTerms::get_YAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"get_YAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPC_YAxisType>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCSubTerms::set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioRTPCSubTerms::_ctor(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm_TermType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, termType, yType);
}
inline void GlobalNamespace::AudioRTPCSubTerms::ChangeSubTerms(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yType, ::ArrayW<::GlobalNamespace::AudioRTPCTerm*>  subTerms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"ChangeSubTerms", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm_TermType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::AudioRTPCTerm*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, termType, yType, subTerms);
}
inline ::GlobalNamespace::AudioRTPCY GlobalNamespace::AudioRTPCSubTerms::GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSubTerms*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCY>(this, ___internal_method, xProvider);
}
inline ::GlobalNamespace::AudioRTPCSubTerms* GlobalNamespace::AudioRTPCSubTerms::New_ctor(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPCSubTerms*>(termType, yType));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr  GlobalNamespace::AudioRTPCSubTerms::operator ::GlobalNamespace::IAudioRTPCValue*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* GlobalNamespace::AudioRTPCSubTerms::i___GlobalNamespace__IAudioRTPCValue() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCSubTerms::AudioRTPCSubTerms()   {
}
