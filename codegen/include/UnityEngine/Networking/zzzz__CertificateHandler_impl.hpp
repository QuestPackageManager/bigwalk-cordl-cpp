#pragma once
// IWYU pragma private; include "UnityEngine/Networking/CertificateHandler.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::CertificateHandler_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::CertificateHandler*)>(&::UnityEngine::Networking::CertificateHandler_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::CertificateHandler_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::CertificateHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::CertificateHandler_BindingsMarshaller::CertificateHandler_BindingsMarshaller()   {
}
//  Writing Method size for method: ::UnityEngine::Networking::CertificateHandler.ReleaseFromScripting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::CertificateHandler::*)()>(&::UnityEngine::Networking::CertificateHandler::ReleaseFromScripting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825494d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                        {"ReleaseFromScripting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::CertificateHandler.ValidateCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::CertificateHandler::*)(::ArrayW<uint8_t>)>(&::UnityEngine::Networking::CertificateHandler::ValidateCertificate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::CertificateHandler.ValidateCertificateNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::CertificateHandler::*)(::ArrayW<uint8_t>)>(&::UnityEngine::Networking::CertificateHandler::ValidateCertificateNative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181617660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                        {"ValidateCertificateNative", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::CertificateHandler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::CertificateHandler::*)()>(&::UnityEngine::Networking::CertificateHandler::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182549490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::CertificateHandler.ReleaseFromScripting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Networking::CertificateHandler::ReleaseFromScripting_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825494c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                        {"ReleaseFromScripting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Networking::CertificateHandler::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Networking::CertificateHandler::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::Networking::CertificateHandler::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
inline void UnityEngine::Networking::CertificateHandler::ReleaseFromScripting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                        {"ReleaseFromScripting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Networking::CertificateHandler::ValidateCertificate(::ArrayW<uint8_t>  certificateData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, certificateData);
}
inline bool UnityEngine::Networking::CertificateHandler::ValidateCertificateNative(::ArrayW<uint8_t>  certificateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                        {"ValidateCertificateNative", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, certificateData);
}
inline void UnityEngine::Networking::CertificateHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::CertificateHandler::ReleaseFromScripting_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::CertificateHandler*>(),
                        {"ReleaseFromScripting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::CertificateHandler::CertificateHandler()   {
}
