#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoConfig_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.CreateFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfig::CreateFromName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181613250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.CreateFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::Security::Cryptography::CryptoConfig::CreateFromName)> {
  constexpr static std::size_t size = 0x1640;
  constexpr static std::size_t addrs = 0x181611c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.MapNameToOID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfig::MapNameToOID)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x181613600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"MapNameToOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.EncodeOID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfig::EncodeOID)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181613380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"EncodeOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.EncodeLongNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&::System::Security::Cryptography::CryptoConfig::EncodeLongNumber)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181613260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"EncodeLongNumber", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.get_AllowOnlyFipsAlgorithms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::Cryptography::CryptoConfig::get_AllowOnlyFipsAlgorithms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"get_AllowOnlyFipsAlgorithms", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::CryptoConfig::setStaticF_lockObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "lockObject", ::System::Security::Cryptography::CryptoConfig*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Security::Cryptography::CryptoConfig::getStaticF_lockObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "lockObject", ::System::Security::Cryptography::CryptoConfig*>();
}
inline void System::Security::Cryptography::CryptoConfig::setStaticF_algorithms(::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*, "algorithms", ::System::Security::Cryptography::CryptoConfig*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* System::Security::Cryptography::CryptoConfig::getStaticF_algorithms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*, "algorithms", ::System::Security::Cryptography::CryptoConfig*>();
}
inline ::System::Object* System::Security::Cryptography::CryptoConfig::CreateFromName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, name);
}
inline ::System::Object* System::Security::Cryptography::CryptoConfig::CreateFromName(::StringW  name, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, name, args);
}
inline ::StringW System::Security::Cryptography::CryptoConfig::MapNameToOID(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"MapNameToOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::CryptoConfig::EncodeOID(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"EncodeOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, str);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::CryptoConfig::EncodeLongNumber(int64_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"EncodeLongNumber", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, x);
}
inline bool System::Security::Cryptography::CryptoConfig::get_AllowOnlyFipsAlgorithms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"get_AllowOnlyFipsAlgorithms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptoConfig::CryptoConfig()   {
}
