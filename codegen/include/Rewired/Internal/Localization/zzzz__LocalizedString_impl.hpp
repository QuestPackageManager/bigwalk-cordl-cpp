#pragma once
// IWYU pragma private; include "Rewired/Internal/Localization/LocalizedString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Internal/Localization/zzzz__LocalizedString_def.hpp"
#include "Rewired/Interfaces/zzzz__ILocalizedStringProvider_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::Localization::LocalizedString.get_hasCachedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::Localization::LocalizedString::*)()>(&::Rewired::Internal::Localization::LocalizedString::get_hasCachedValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"get_hasCachedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::LocalizedString.get_cachedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Internal::Localization::LocalizedString::*)()>(&::Rewired::Internal::Localization::LocalizedString::get_cachedValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"get_cachedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::LocalizedString.set_cachedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::LocalizedString::*)(::StringW)>(&::Rewired::Internal::Localization::LocalizedString::set_cachedValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f3820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"set_cachedValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::LocalizedString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::LocalizedString::*)()>(&::Rewired::Internal::Localization::LocalizedString::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f37c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::LocalizedString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::LocalizedString::*)(::Rewired::Internal::Localization::LocalizedString*)>(&::Rewired::Internal::Localization::LocalizedString::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f37d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::Localization::LocalizedString*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::LocalizedString.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::LocalizedString::*)()>(&::Rewired::Internal::Localization::LocalizedString::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f3560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::LocalizedString.TryGetLocalizedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::Localization::LocalizedString::*)(::StringW, ::Rewired::Interfaces::ILocalizedStringProvider*, uint32_t, uint32_t, ::by_ref<bool>, ::by_ref<::StringW>)>(&::Rewired::Internal::Localization::LocalizedString::TryGetLocalizedValue)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1818f3590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"TryGetLocalizedValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Interfaces::ILocalizedStringProvider*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Rewired::Internal::Localization::LocalizedString::__cordl_internal_get_MyOvGlpbihlbCckpnwRYLGmdYJEn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MyOvGlpbihlbCckpnwRYLGmdYJEn;
}
constexpr uint32_t const& Rewired::Internal::Localization::LocalizedString::__cordl_internal_get_MyOvGlpbihlbCckpnwRYLGmdYJEn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MyOvGlpbihlbCckpnwRYLGmdYJEn;
}
constexpr void Rewired::Internal::Localization::LocalizedString::__cordl_internal_set_MyOvGlpbihlbCckpnwRYLGmdYJEn(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MyOvGlpbihlbCckpnwRYLGmdYJEn = value;
}
constexpr uint32_t& Rewired::Internal::Localization::LocalizedString::__cordl_internal_get_HZBZgaXePvlFxKiAtayOSCUPbwZp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HZBZgaXePvlFxKiAtayOSCUPbwZp;
}
constexpr uint32_t const& Rewired::Internal::Localization::LocalizedString::__cordl_internal_get_HZBZgaXePvlFxKiAtayOSCUPbwZp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HZBZgaXePvlFxKiAtayOSCUPbwZp;
}
constexpr void Rewired::Internal::Localization::LocalizedString::__cordl_internal_set_HZBZgaXePvlFxKiAtayOSCUPbwZp(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HZBZgaXePvlFxKiAtayOSCUPbwZp = value;
}
constexpr ::StringW& Rewired::Internal::Localization::LocalizedString::__cordl_internal_get_gSUbjJzCjqUFSLCBIfRrDuRrZsEGA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gSUbjJzCjqUFSLCBIfRrDuRrZsEGA;
}
constexpr ::StringW const& Rewired::Internal::Localization::LocalizedString::__cordl_internal_get_gSUbjJzCjqUFSLCBIfRrDuRrZsEGA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gSUbjJzCjqUFSLCBIfRrDuRrZsEGA;
}
constexpr void Rewired::Internal::Localization::LocalizedString::__cordl_internal_set_gSUbjJzCjqUFSLCBIfRrDuRrZsEGA(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gSUbjJzCjqUFSLCBIfRrDuRrZsEGA = value;
}
constexpr bool& Rewired::Internal::Localization::LocalizedString::__cordl_internal_get_RvNHDUonOYzrebBzdPlvWCKkmrSs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RvNHDUonOYzrebBzdPlvWCKkmrSs;
}
constexpr bool const& Rewired::Internal::Localization::LocalizedString::__cordl_internal_get_RvNHDUonOYzrebBzdPlvWCKkmrSs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RvNHDUonOYzrebBzdPlvWCKkmrSs;
}
constexpr void Rewired::Internal::Localization::LocalizedString::__cordl_internal_set_RvNHDUonOYzrebBzdPlvWCKkmrSs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RvNHDUonOYzrebBzdPlvWCKkmrSs = value;
}
inline bool Rewired::Internal::Localization::LocalizedString::get_hasCachedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"get_hasCachedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Rewired::Internal::Localization::LocalizedString::get_cachedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"get_cachedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Internal::Localization::LocalizedString::set_cachedValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"set_cachedValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::Localization::LocalizedString::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::Localization::LocalizedString::_ctor(::Rewired::Internal::Localization::LocalizedString*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::Localization::LocalizedString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::Localization::LocalizedString::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Internal::Localization::LocalizedString::TryGetLocalizedValue(::StringW  key, ::Rewired::Interfaces::ILocalizedStringProvider*  localizer, uint32_t  localizerVersion, uint32_t  userVersion, ::by_ref<bool>  versionChanged, ::by_ref<::StringW>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::LocalizedString*>(),
                        {"TryGetLocalizedValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Interfaces::ILocalizedStringProvider*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, localizer, localizerVersion, userVersion, versionChanged, result);
}
inline ::Rewired::Internal::Localization::LocalizedString* Rewired::Internal::Localization::LocalizedString::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::Localization::LocalizedString*>());
}
inline ::Rewired::Internal::Localization::LocalizedString* Rewired::Internal::Localization::LocalizedString::New_ctor(::Rewired::Internal::Localization::LocalizedString*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::Localization::LocalizedString*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Internal::Localization::LocalizedString::LocalizedString()   {
}
