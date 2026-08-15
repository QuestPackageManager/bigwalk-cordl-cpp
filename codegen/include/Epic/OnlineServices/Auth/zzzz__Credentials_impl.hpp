#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/Credentials.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_impl.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Credentials_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Auth::Credentials::*)()>(&::Epic::OnlineServices::Auth::Credentials::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::Credentials::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Auth::Credentials::set_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_Id", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Auth::Credentials::*)()>(&::Epic::OnlineServices::Auth::Credentials::get_Token)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.set_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::Credentials::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Auth::Credentials::set_Token)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_Token", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::LoginCredentialType (::Epic::OnlineServices::Auth::Credentials::*)()>(&::Epic::OnlineServices::Auth::Credentials::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::Credentials::*)(::Epic::OnlineServices::Auth::LoginCredentialType)>(&::Epic::OnlineServices::Auth::Credentials::set_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCredentialType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.get_SystemAuthCredentialsOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Auth::Credentials::*)()>(&::Epic::OnlineServices::Auth::Credentials::get_SystemAuthCredentialsOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_SystemAuthCredentialsOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.set_SystemAuthCredentialsOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::Credentials::*)(::System::IntPtr)>(&::Epic::OnlineServices::Auth::Credentials::set_SystemAuthCredentialsOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_SystemAuthCredentialsOptions", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.get_ExternalType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ExternalCredentialType (::Epic::OnlineServices::Auth::Credentials::*)()>(&::Epic::OnlineServices::Auth::Credentials::get_ExternalType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_ExternalType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::Credentials.set_ExternalType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::Credentials::*)(::Epic::OnlineServices::ExternalCredentialType)>(&::Epic::OnlineServices::Auth::Credentials::set_ExternalType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_ExternalType", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Auth::Credentials::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::Credentials::set_Id(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_Id", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Auth::Credentials::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::Credentials::set_Token(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_Token", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Auth::LoginCredentialType Epic::OnlineServices::Auth::Credentials::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::LoginCredentialType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::Credentials::set_Type(::Epic::OnlineServices::Auth::LoginCredentialType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCredentialType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr Epic::OnlineServices::Auth::Credentials::get_SystemAuthCredentialsOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_SystemAuthCredentialsOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::Credentials::set_SystemAuthCredentialsOptions(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_SystemAuthCredentialsOptions", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ExternalCredentialType Epic::OnlineServices::Auth::Credentials::get_ExternalType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"get_ExternalType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ExternalCredentialType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::Credentials::set_ExternalType(::Epic::OnlineServices::ExternalCredentialType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::Credentials>(),
                        {"set_ExternalType", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Id_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Token_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::Auth::LoginCredentialType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SystemAuthCredentialsOptions_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ExternalType_k__BackingField", ty: "::Epic::OnlineServices::ExternalCredentialType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::Credentials::Credentials(::Epic::OnlineServices::Utf8String*  _Id_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Token_k__BackingField, ::Epic::OnlineServices::Auth::LoginCredentialType  _Type_k__BackingField, ::System::IntPtr  _SystemAuthCredentialsOptions_k__BackingField, ::Epic::OnlineServices::ExternalCredentialType  _ExternalType_k__BackingField) noexcept  {
this->_Id_k__BackingField = _Id_k__BackingField;
this->_Token_k__BackingField = _Token_k__BackingField;
this->_Type_k__BackingField = _Type_k__BackingField;
this->_SystemAuthCredentialsOptions_k__BackingField = _SystemAuthCredentialsOptions_k__BackingField;
this->_ExternalType_k__BackingField = _ExternalType_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::Credentials::Credentials()   {
}
