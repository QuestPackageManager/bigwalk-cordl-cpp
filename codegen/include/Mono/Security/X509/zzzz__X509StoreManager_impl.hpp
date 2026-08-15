#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509StoreManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509StoreManager_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_CurrentUserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_CurrentUserPath)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815ae0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_CurrentUserPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_LocalMachinePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_LocalMachinePath)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815ae2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_LocalMachinePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_NewCurrentUserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_NewCurrentUserPath)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815ae550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewCurrentUserPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_NewLocalMachinePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_NewLocalMachinePath)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815ae640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewLocalMachinePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_CurrentUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Stores* (*)()>(&::Mono::Security::X509::X509StoreManager::get_CurrentUser)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1815ae190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_CurrentUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_LocalMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Stores* (*)()>(&::Mono::Security::X509::X509StoreManager::get_LocalMachine)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1815ae3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_LocalMachine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_TrustedRootCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (*)()>(&::Mono::Security::X509::X509StoreManager::get_TrustedRootCertificates)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1815ae730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_TrustedRootCertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X509StoreManager::setStaticF__userPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_userPath", ::Mono::Security::X509::X509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__userPath()  {
return ::cordl_internals::getStaticField<::StringW, "_userPath", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__localMachinePath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_localMachinePath", ::Mono::Security::X509::X509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__localMachinePath()  {
return ::cordl_internals::getStaticField<::StringW, "_localMachinePath", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__newUserPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_newUserPath", ::Mono::Security::X509::X509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__newUserPath()  {
return ::cordl_internals::getStaticField<::StringW, "_newUserPath", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__newLocalMachinePath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_newLocalMachinePath", ::Mono::Security::X509::X509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__newLocalMachinePath()  {
return ::cordl_internals::getStaticField<::StringW, "_newLocalMachinePath", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__userStore(::Mono::Security::X509::X509Stores*  value)  {
::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores*, "_userStore", ::Mono::Security::X509::X509StoreManager*>(std::forward<::Mono::Security::X509::X509Stores*>(value));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::getStaticF__userStore()  {
return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores*, "_userStore", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__machineStore(::Mono::Security::X509::X509Stores*  value)  {
::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores*, "_machineStore", ::Mono::Security::X509::X509StoreManager*>(std::forward<::Mono::Security::X509::X509Stores*>(value));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::getStaticF__machineStore()  {
return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores*, "_machineStore", ::Mono::Security::X509::X509StoreManager*>();
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_CurrentUserPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_CurrentUserPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_LocalMachinePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_LocalMachinePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_NewCurrentUserPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewCurrentUserPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_NewLocalMachinePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewLocalMachinePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::get_CurrentUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_CurrentUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::get_LocalMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_LocalMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509StoreManager::get_TrustedRootCertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_TrustedRootCertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509StoreManager::X509StoreManager()   {
}
