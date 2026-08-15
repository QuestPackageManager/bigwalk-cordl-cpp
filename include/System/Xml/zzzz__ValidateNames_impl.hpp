#pragma once
// IWYU pragma private; include "System/Xml/ValidateNames.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__ValidateNames_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Xml::ValidateNames.ParseNmtoken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Xml::ValidateNames::ParseNmtoken)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181d2d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNmtoken", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.ParseNmtokenNoNamespaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Xml::ValidateNames::ParseNmtokenNoNamespaces)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181d2d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNmtokenNoNamespaces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.ParseNameNoNamespaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Xml::ValidateNames::ParseNameNoNamespaces)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181d2d400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNameNoNamespaces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.IsNameNoNamespaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Xml::ValidateNames::IsNameNoNamespaces)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181d2d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"IsNameNoNamespaces", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.ParseNCName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Xml::ValidateNames::ParseNCName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181d2d330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNCName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.ParseNCName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Xml::ValidateNames::ParseNCName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d2d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNCName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.ParseQName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, ::by_ref<int32_t>)>(&::System::Xml::ValidateNames::ParseQName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181d2d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseQName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.ParseQNameThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::Xml::ValidateNames::ParseQNameThrow)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181d2d610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseQNameThrow", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.ThrowInvalidName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, int32_t)>(&::System::Xml::ValidateNames::ThrowInvalidName)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181d2d890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ThrowInvalidName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.GetInvalidNameException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, int32_t, int32_t)>(&::System::Xml::ValidateNames::GetInvalidNameException)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181d2d130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"GetInvalidNameException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValidateNames.SplitQName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::Xml::ValidateNames::SplitQName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181d2d790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"SplitQName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Xml::ValidateNames::setStaticF_xmlCharType(::System::Xml::XmlCharType  value)  {
::cordl_internals::setStaticField<::System::Xml::XmlCharType, "xmlCharType", ::System::Xml::ValidateNames*>(std::forward<::System::Xml::XmlCharType>(value));
}
inline ::System::Xml::XmlCharType System::Xml::ValidateNames::getStaticF_xmlCharType()  {
return ::cordl_internals::getStaticField<::System::Xml::XmlCharType, "xmlCharType", ::System::Xml::ValidateNames*>();
}
inline int32_t System::Xml::ValidateNames::ParseNmtoken(::StringW  s, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNmtoken", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, offset);
}
inline int32_t System::Xml::ValidateNames::ParseNmtokenNoNamespaces(::StringW  s, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNmtokenNoNamespaces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, offset);
}
inline int32_t System::Xml::ValidateNames::ParseNameNoNamespaces(::StringW  s, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNameNoNamespaces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, offset);
}
inline bool System::Xml::ValidateNames::IsNameNoNamespaces(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"IsNameNoNamespaces", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline int32_t System::Xml::ValidateNames::ParseNCName(::StringW  s, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNCName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, offset);
}
inline int32_t System::Xml::ValidateNames::ParseNCName(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseNCName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline int32_t System::Xml::ValidateNames::ParseQName(::StringW  s, int32_t  offset, ::by_ref<int32_t>  colonOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseQName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, offset, colonOffset);
}
inline void System::Xml::ValidateNames::ParseQNameThrow(::StringW  s, ::by_ref<::StringW>  prefix, ::by_ref<::StringW>  localName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ParseQNameThrow", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, prefix, localName);
}
inline void System::Xml::ValidateNames::ThrowInvalidName(::StringW  s, int32_t  offsetStartChar, int32_t  offsetBadChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"ThrowInvalidName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, offsetStartChar, offsetBadChar);
}
inline ::System::Exception* System::Xml::ValidateNames::GetInvalidNameException(::StringW  s, int32_t  offsetStartChar, int32_t  offsetBadChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"GetInvalidNameException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, offsetStartChar, offsetBadChar);
}
inline void System::Xml::ValidateNames::SplitQName(::StringW  name, ::by_ref<::StringW>  prefix, ::by_ref<::StringW>  lname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ValidateNames*>(),
                        {"SplitQName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, prefix, lname);
}
// Ctor Parameters []
constexpr ::System::Xml::ValidateNames::ValidateNames()   {
}
