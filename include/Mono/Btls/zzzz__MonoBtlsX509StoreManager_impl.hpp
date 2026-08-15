#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509StoreManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreManager_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreType_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::Btls::MonoBtlsX509StoreManager::Initialize)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181dbbb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreManager.DoInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::Btls::MonoBtlsX509StoreManager::DoInitialize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181dbb8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreManager*>(),
                        {"DoInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreManager.GetStorePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Btls::MonoBtlsX509StoreType)>(&::Mono::Btls::MonoBtlsX509StoreManager::GetStorePath)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181dbba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreManager*>(),
                        {"GetStorePath", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreType>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsX509StoreManager::setStaticF_initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "initialized", ::Mono::Btls::MonoBtlsX509StoreManager*>(std::forward<bool>(value));
}
inline bool Mono::Btls::MonoBtlsX509StoreManager::getStaticF_initialized()  {
return ::cordl_internals::getStaticField<bool, "initialized", ::Mono::Btls::MonoBtlsX509StoreManager*>();
}
inline void Mono::Btls::MonoBtlsX509StoreManager::setStaticF_machineTrustedRootPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "machineTrustedRootPath", ::Mono::Btls::MonoBtlsX509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Btls::MonoBtlsX509StoreManager::getStaticF_machineTrustedRootPath()  {
return ::cordl_internals::getStaticField<::StringW, "machineTrustedRootPath", ::Mono::Btls::MonoBtlsX509StoreManager*>();
}
inline void Mono::Btls::MonoBtlsX509StoreManager::setStaticF_machineIntermediateCAPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "machineIntermediateCAPath", ::Mono::Btls::MonoBtlsX509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Btls::MonoBtlsX509StoreManager::getStaticF_machineIntermediateCAPath()  {
return ::cordl_internals::getStaticField<::StringW, "machineIntermediateCAPath", ::Mono::Btls::MonoBtlsX509StoreManager*>();
}
inline void Mono::Btls::MonoBtlsX509StoreManager::setStaticF_machineUntrustedPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "machineUntrustedPath", ::Mono::Btls::MonoBtlsX509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Btls::MonoBtlsX509StoreManager::getStaticF_machineUntrustedPath()  {
return ::cordl_internals::getStaticField<::StringW, "machineUntrustedPath", ::Mono::Btls::MonoBtlsX509StoreManager*>();
}
inline void Mono::Btls::MonoBtlsX509StoreManager::setStaticF_userTrustedRootPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "userTrustedRootPath", ::Mono::Btls::MonoBtlsX509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Btls::MonoBtlsX509StoreManager::getStaticF_userTrustedRootPath()  {
return ::cordl_internals::getStaticField<::StringW, "userTrustedRootPath", ::Mono::Btls::MonoBtlsX509StoreManager*>();
}
inline void Mono::Btls::MonoBtlsX509StoreManager::setStaticF_userIntermediateCAPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "userIntermediateCAPath", ::Mono::Btls::MonoBtlsX509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Btls::MonoBtlsX509StoreManager::getStaticF_userIntermediateCAPath()  {
return ::cordl_internals::getStaticField<::StringW, "userIntermediateCAPath", ::Mono::Btls::MonoBtlsX509StoreManager*>();
}
inline void Mono::Btls::MonoBtlsX509StoreManager::setStaticF_userUntrustedPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "userUntrustedPath", ::Mono::Btls::MonoBtlsX509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Btls::MonoBtlsX509StoreManager::getStaticF_userUntrustedPath()  {
return ::cordl_internals::getStaticField<::StringW, "userUntrustedPath", ::Mono::Btls::MonoBtlsX509StoreManager*>();
}
inline void Mono::Btls::MonoBtlsX509StoreManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509StoreManager::DoInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreManager*>(),
                        {"DoInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Mono::Btls::MonoBtlsX509StoreManager::GetStorePath(::Mono::Btls::MonoBtlsX509StoreType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreManager*>(),
                        {"GetStorePath", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509StoreManager::MonoBtlsX509StoreManager()   {
}
