#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCXProvider.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCXProvider_RTPCXData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCXProvider_RTPCXData::*)()>(&::GlobalNamespace::AudioRTPCXProvider_RTPCXData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType& GlobalNamespace::AudioRTPCXProvider_RTPCXData::__cordl_internal_get_XType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XType;
}
constexpr ::GlobalNamespace::AudioRTPC_XAxisType const& GlobalNamespace::AudioRTPCXProvider_RTPCXData::__cordl_internal_get_XType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XType;
}
constexpr void GlobalNamespace::AudioRTPCXProvider_RTPCXData::__cordl_internal_set_XType(::GlobalNamespace::AudioRTPC_XAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XType = value;
}
constexpr float_t& GlobalNamespace::AudioRTPCXProvider_RTPCXData::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr float_t const& GlobalNamespace::AudioRTPCXProvider_RTPCXData::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void GlobalNamespace::AudioRTPCXProvider_RTPCXData::__cordl_internal_set_Value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void GlobalNamespace::AudioRTPCXProvider_RTPCXData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCXProvider_RTPCXData* GlobalNamespace::AudioRTPCXProvider_RTPCXData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCXProvider_RTPCXData::AudioRTPCXProvider_RTPCXData()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCXProvider.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AudioRTPCXProvider::*)()>(&::GlobalNamespace::AudioRTPCXProvider::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18048c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCXProvider.get_XValueLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>* (::GlobalNamespace::AudioRTPCXProvider::*)()>(&::GlobalNamespace::AudioRTPCXProvider::get_XValueLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"get_XValueLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCXProvider.set_XValueLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCXProvider::*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*)>(&::GlobalNamespace::AudioRTPCXProvider::set_XValueLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"set_XValueLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCXProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCXProvider::*)()>(&::GlobalNamespace::AudioRTPCXProvider::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18048c610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCXProvider.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioRTPCXProvider::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AudioRTPCXProvider::GetX)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18048c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCXProvider.SetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioRTPCXProvider::*)(::GlobalNamespace::AudioRTPC_XAxisType, float_t)>(&::GlobalNamespace::AudioRTPCXProvider::SetX)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18048c710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"SetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCXProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCXProvider::*)()>(&::GlobalNamespace::AudioRTPCXProvider::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18048c770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>& GlobalNamespace::AudioRTPCXProvider::__cordl_internal_get_XValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XValues;
}
constexpr ::ArrayW<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*> const& GlobalNamespace::AudioRTPCXProvider::__cordl_internal_get_XValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XValues;
}
constexpr void GlobalNamespace::AudioRTPCXProvider::__cordl_internal_set_XValues(::ArrayW<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XValues = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*& GlobalNamespace::AudioRTPCXProvider::__cordl_internal_get__XValueLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____XValueLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>* const& GlobalNamespace::AudioRTPCXProvider::__cordl_internal_get__XValueLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____XValueLookup_k__BackingField;
}
constexpr void GlobalNamespace::AudioRTPCXProvider::__cordl_internal_set__XValueLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____XValueLookup_k__BackingField = value;
}
inline ::StringW GlobalNamespace::AudioRTPCXProvider::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>* GlobalNamespace::AudioRTPCXProvider::get_XValueLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"get_XValueLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCXProvider::set_XValueLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"set_XValueLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioRTPCXProvider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioRTPCXProvider::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline bool GlobalNamespace::AudioRTPCXProvider::SetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {"SetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::AudioRTPCXProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCXProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCXProvider* GlobalNamespace::AudioRTPCXProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPCXProvider*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::AudioRTPCXProvider::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::AudioRTPCXProvider::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCXProvider::AudioRTPCXProvider()   {
}
