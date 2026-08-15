#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509LookupMonoCollection.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupMono_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509TrustKind_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupMonoCollection_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Name_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509TrustKind_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMonoCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMonoCollection::*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::Mono::Btls::MonoBtlsX509TrustKind)>(&::Mono::Btls::MonoBtlsX509LookupMonoCollection::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181db8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509TrustKind>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMonoCollection.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMonoCollection::*)()>(&::Mono::Btls::MonoBtlsX509LookupMonoCollection::Initialize)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181db7fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMonoCollection.OnGetBySubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (::Mono::Btls::MonoBtlsX509LookupMonoCollection::*)(::Mono::Btls::MonoBtlsX509Name*)>(&::Mono::Btls::MonoBtlsX509LookupMonoCollection::OnGetBySubject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181db8290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMonoCollection.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMonoCollection::*)()>(&::Mono::Btls::MonoBtlsX509LookupMonoCollection::Close)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db7ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int64_t>& Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_get_hashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hashes;
}
constexpr ::ArrayW<int64_t> const& Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_get_hashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hashes;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_set_hashes(::ArrayW<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hashes = value;
}
constexpr ::ArrayW<::Mono::Btls::MonoBtlsX509*>& Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_get_certificates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificates;
}
constexpr ::ArrayW<::Mono::Btls::MonoBtlsX509*> const& Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_get_certificates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificates;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_set_certificates(::ArrayW<::Mono::Btls::MonoBtlsX509*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___certificates = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_get_collection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collection;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_get_collection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collection;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_set_collection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collection = value;
}
constexpr ::Mono::Btls::MonoBtlsX509TrustKind& Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_get_trust()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trust;
}
constexpr ::Mono::Btls::MonoBtlsX509TrustKind const& Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_get_trust() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trust;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMonoCollection::__cordl_internal_set_trust(::Mono::Btls::MonoBtlsX509TrustKind  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trust = value;
}
inline void Mono::Btls::MonoBtlsX509LookupMonoCollection::_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  collection, ::Mono::Btls::MonoBtlsX509TrustKind  trust)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509TrustKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, trust);
}
inline void Mono::Btls::MonoBtlsX509LookupMonoCollection::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsX509LookupMonoCollection::OnGetBySubject(::Mono::Btls::MonoBtlsX509Name*  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(this, ___internal_method, name);
}
inline void Mono::Btls::MonoBtlsX509LookupMonoCollection::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509LookupMonoCollection* Mono::Btls::MonoBtlsX509LookupMonoCollection::New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  collection, ::Mono::Btls::MonoBtlsX509TrustKind  trust)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509LookupMonoCollection*>(collection, trust));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509LookupMonoCollection::MonoBtlsX509LookupMonoCollection()   {
}
