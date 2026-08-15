#pragma once
// IWYU pragma private; include "System/IO/PathInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__PathInternal_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::PathInternal.IsValidDriveChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::IO::PathInternal::IsValidDriveChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816d8b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsValidDriveChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.EndsWithPeriodOrSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::PathInternal::EndsWithPeriodOrSpace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816d8370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"EndsWithPeriodOrSpace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.EnsureExtendedPrefixIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::PathInternal::EnsureExtendedPrefixIfNeeded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d83c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"EnsureExtendedPrefixIfNeeded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.EnsureExtendedPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::PathInternal::EnsureExtendedPrefix)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816d8420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"EnsureExtendedPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::IsDevice)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816d8a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsDevice", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsDeviceUNC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::IsDeviceUNC)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816d8970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsDeviceUNC", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsExtended
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::IsExtended)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816d8ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsExtended", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.GetRootLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::GetRootLength)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1816d8690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"GetRootLength", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsDirectorySeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::IO::PathInternal::IsDirectorySeparator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816d8ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsDirectorySeparator", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.EndsInDirectorySeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::EndsInDirectorySeparator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816d8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"EndsInDirectorySeparator", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.StartsWithDirectorySeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::StartsWithDirectorySeparator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816d8b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"StartsWithDirectorySeparator", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.TrimEndingDirectorySeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::PathInternal::TrimEndingDirectorySeparator)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816d8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"TrimEndingDirectorySeparator", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.TrimEndingDirectorySeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::TrimEndingDirectorySeparator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1816d8c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"TrimEndingDirectorySeparator", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::IsRoot)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816d8b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsRoot", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.get_IsCaseSensitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::IO::PathInternal::get_IsCaseSensitive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816d8d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"get_IsCaseSensitive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.GetIsCaseSensitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::IO::PathInternal::GetIsCaseSensitive)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1816d8530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"GetIsCaseSensitive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsPartiallyQualified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::PathInternal::IsPartiallyQualified)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsPartiallyQualified", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::PathInternal::setStaticF_s_isCaseSensitive(bool  value)  {
::cordl_internals::setStaticField<bool, "s_isCaseSensitive", ::System::IO::PathInternal*>(std::forward<bool>(value));
}
inline bool System::IO::PathInternal::getStaticF_s_isCaseSensitive()  {
return ::cordl_internals::getStaticField<bool, "s_isCaseSensitive", ::System::IO::PathInternal*>();
}
inline bool System::IO::PathInternal::IsValidDriveChar(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsValidDriveChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::IO::PathInternal::EndsWithPeriodOrSpace(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"EndsWithPeriodOrSpace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::PathInternal::EnsureExtendedPrefixIfNeeded(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"EnsureExtendedPrefixIfNeeded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::PathInternal::EnsureExtendedPrefix(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"EnsureExtendedPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::IsDevice(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsDevice", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::IsDeviceUNC(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsDeviceUNC", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::IsExtended(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsExtended", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline int32_t System::IO::PathInternal::GetRootLength(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"GetRootLength", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::IsDirectorySeparator(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsDirectorySeparator", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool System::IO::PathInternal::EndsInDirectorySeparator(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"EndsInDirectorySeparator", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::StartsWithDirectorySeparator(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"StartsWithDirectorySeparator", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::PathInternal::TrimEndingDirectorySeparator(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"TrimEndingDirectorySeparator", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::PathInternal::TrimEndingDirectorySeparator(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"TrimEndingDirectorySeparator", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::IsRoot(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsRoot", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::get_IsCaseSensitive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"get_IsCaseSensitive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::IO::PathInternal::GetIsCaseSensitive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"GetIsCaseSensitive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::IO::PathInternal::IsPartiallyQualified(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::PathInternal*>(),
                        {"IsPartiallyQualified", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::System::IO::PathInternal::PathInternal()   {
}
