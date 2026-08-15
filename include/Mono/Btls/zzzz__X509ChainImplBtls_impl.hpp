#pragma once
// IWYU pragma private; include "Mono/Btls/X509ChainImplBtls.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_impl.hpp"
#include "Mono/Btls/zzzz__X509ChainImplBtls_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Chain_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreCtx_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElementCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509ChainImplBtls::*)(::Mono::Btls::MonoBtlsX509Chain*)>(&::Mono::Btls::X509ChainImplBtls::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181dc54e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509ChainImplBtls::*)(::Mono::Btls::MonoBtlsX509StoreCtx*)>(&::Mono::Btls::X509ChainImplBtls::_ctor)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x181dc4f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::X509ChainImplBtls::*)()>(&::Mono::Btls::X509ChainImplBtls::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181dc5880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls.get_StoreCtx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509StoreCtx* (::Mono::Btls::X509ChainImplBtls::*)()>(&::Mono::Btls::X509ChainImplBtls::get_StoreCtx)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181dc58a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                        {"get_StoreCtx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls.get_ChainElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* (::Mono::Btls::X509ChainImplBtls::*)()>(&::Mono::Btls::X509ChainImplBtls::get_ChainElements)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181dc5670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls.get_ChainPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainPolicy* (::Mono::Btls::X509ChainImplBtls::*)()>(&::Mono::Btls::X509ChainImplBtls::get_ChainPolicy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls.AddStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509ChainImplBtls::*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::Mono::Btls::X509ChainImplBtls::AddStatus)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181dc4ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::X509ChainImplBtls::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::Mono::Btls::X509ChainImplBtls::Build)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509ChainImplBtls::*)()>(&::Mono::Btls::X509ChainImplBtls::Reset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181dc4ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509ChainImplBtls.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509ChainImplBtls::*)(bool)>(&::Mono::Btls::X509ChainImplBtls::Dispose)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181dc4da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::Mono::Btls::MonoBtlsX509StoreCtx*& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_storeCtx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeCtx;
}
constexpr ::Mono::Btls::MonoBtlsX509StoreCtx* const& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_storeCtx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeCtx;
}
constexpr void Mono::Btls::X509ChainImplBtls::__cordl_internal_set_storeCtx(::Mono::Btls::MonoBtlsX509StoreCtx*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeCtx = value;
}
constexpr ::Mono::Btls::MonoBtlsX509Chain*& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
constexpr ::Mono::Btls::MonoBtlsX509Chain* const& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
constexpr void Mono::Btls::X509ChainImplBtls::__cordl_internal_set_chain(::Mono::Btls::MonoBtlsX509Chain*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chain = value;
}
constexpr ::Mono::Btls::MonoBtlsX509Chain*& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_untrustedChain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___untrustedChain;
}
constexpr ::Mono::Btls::MonoBtlsX509Chain* const& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_untrustedChain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___untrustedChain;
}
constexpr void Mono::Btls::X509ChainImplBtls::__cordl_internal_set_untrustedChain(::Mono::Btls::MonoBtlsX509Chain*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___untrustedChain = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* const& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void Mono::Btls::X509ChainImplBtls::__cordl_internal_set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_untrusted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___untrusted;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_untrusted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___untrusted;
}
constexpr void Mono::Btls::X509ChainImplBtls::__cordl_internal_set_untrusted(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___untrusted = value;
}
constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_certificates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificates;
}
constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> const& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_certificates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificates;
}
constexpr void Mono::Btls::X509ChainImplBtls::__cordl_internal_set_certificates(::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___certificates = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_policy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___policy;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* const& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_policy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___policy;
}
constexpr void Mono::Btls::X509ChainImplBtls::__cordl_internal_set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___policy = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_chainStatusList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chainStatusList;
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* const& Mono::Btls::X509ChainImplBtls::__cordl_internal_get_chainStatusList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chainStatusList;
}
constexpr void Mono::Btls::X509ChainImplBtls::__cordl_internal_set_chainStatusList(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chainStatusList = value;
}
inline void Mono::Btls::X509ChainImplBtls::_ctor(::Mono::Btls::MonoBtlsX509Chain*  chain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chain);
}
inline void Mono::Btls::X509ChainImplBtls::_ctor(::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storeCtx);
}
inline bool Mono::Btls::X509ChainImplBtls::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509StoreCtx* Mono::Btls::X509ChainImplBtls::get_StoreCtx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(),
                        {"get_StoreCtx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509StoreCtx*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* Mono::Btls::X509ChainImplBtls::get_ChainElements()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* Mono::Btls::X509ChainImplBtls::get_ChainPolicy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(this, ___internal_method);
}
inline void Mono::Btls::X509ChainImplBtls::AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  errorCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode);
}
inline bool Mono::Btls::X509ChainImplBtls::Build(::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, certificate);
}
inline void Mono::Btls::X509ChainImplBtls::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::X509ChainImplBtls::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509ChainImplBtls*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Mono::Btls::X509ChainImplBtls* Mono::Btls::X509ChainImplBtls::New_ctor(::Mono::Btls::MonoBtlsX509Chain*  chain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::X509ChainImplBtls*>(chain));
}
inline ::Mono::Btls::X509ChainImplBtls* Mono::Btls::X509ChainImplBtls::New_ctor(::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::X509ChainImplBtls*>(storeCtx));
}
// Ctor Parameters []
constexpr ::Mono::Btls::X509ChainImplBtls::X509ChainImplBtls()   {
}
