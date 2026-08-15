#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSClientCredentials.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSClientCredentials_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.get_EncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::get_EncryptionKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"get_EncryptionKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.set_EncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::set_EncryptionKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"set_EncryptionKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180537ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.GenerateEncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::GenerateEncryptionKey)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180537850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"GenerateEncryptionKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)(::StringW, ::StringW, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180537b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.IsEncryptionKeyValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::IsEncryptionKeyValid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805379d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"IsEncryptionKeyValid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::get_IsComplete)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180537be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"get_IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.IsEncryptionKeyValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::IsEncryptionKeyValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180537a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"IsEncryptionKeyValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*)>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180537800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"Equals", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)(::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180537780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180537960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_get_ClientId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientId;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_get_ClientId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientId;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_set_ClientId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientId = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_get_ClientSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientSecret;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_get_ClientSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientSecret;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_set_ClientSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientSecret = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_get__EncryptionKey_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EncryptionKey_k__BackingField;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_get__EncryptionKey_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EncryptionKey_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSClientCredentials::__cordl_internal_set__EncryptionKey_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EncryptionKey_k__BackingField = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSClientCredentials::setStaticF_s_invalidEncryptionKeyRegex(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "s_invalidEncryptionKeyRegex", ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* PlayEveryWare::EpicOnlineServices::EOSClientCredentials::getStaticF_s_invalidEncryptionKeyRegex()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "s_invalidEncryptionKeyRegex", ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>();
}
inline ::StringW PlayEveryWare::EpicOnlineServices::EOSClientCredentials::get_EncryptionKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"get_EncryptionKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSClientCredentials::set_EncryptionKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"set_EncryptionKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::EOSClientCredentials::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::EOSClientCredentials::GenerateEncryptionKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"GenerateEncryptionKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSClientCredentials::_ctor(::StringW  clientId, ::StringW  clientSecret, ::StringW  encryptionKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientId, clientSecret, encryptionKey);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSClientCredentials::IsEncryptionKeyValid(::StringW  encryptionKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"IsEncryptionKeyValid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, encryptionKey);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSClientCredentials::get_IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"get_IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSClientCredentials::IsEncryptionKeyValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"IsEncryptionKeyValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSClientCredentials::Equals(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(),
                        {"Equals", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSClientCredentials::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t PlayEveryWare::EpicOnlineServices::EOSClientCredentials::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials* PlayEveryWare::EpicOnlineServices::EOSClientCredentials::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>());
}
inline ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials* PlayEveryWare::EpicOnlineServices::EOSClientCredentials::New_ctor(::StringW  clientId, ::StringW  clientSecret, ::StringW  encryptionKey)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>(clientId, clientSecret, encryptionKey));
}
/// @brief Convert operator to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>"
constexpr  PlayEveryWare::EpicOnlineServices::EOSClientCredentials::operator ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*() noexcept {
return static_cast<::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>"
constexpr ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>* PlayEveryWare::EpicOnlineServices::EOSClientCredentials::i___System__IEquatable_1___PlayEveryWare__EpicOnlineServices__EOSClientCredentials__() noexcept {
return static_cast<::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials::EOSClientCredentials()   {
}
