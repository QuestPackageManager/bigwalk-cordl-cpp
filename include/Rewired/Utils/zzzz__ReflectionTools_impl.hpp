#pragma once
// IWYU pragma private; include "Rewired/Utils/ReflectionTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__ReflectionTools_def.hpp"
#include "Rewired/Utils/zzzz__ReflectionTools_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags::ReflectionTools_BindingFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags::ReflectionTools_BindingFlags()   {
}
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags  Rewired::Utils::ReflectionTools_BindingFlags::IgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags  Rewired::Utils::ReflectionTools_BindingFlags::DeclaredOnly{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags  Rewired::Utils::ReflectionTools_BindingFlags::Instance{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags  Rewired::Utils::ReflectionTools_BindingFlags::Static{static_cast<int32_t>(0x8)};
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags  Rewired::Utils::ReflectionTools_BindingFlags::Public{static_cast<int32_t>(0x10)};
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags  Rewired::Utils::ReflectionTools_BindingFlags::NonPublic{static_cast<int32_t>(0x20)};
constexpr ::Rewired::Utils::ReflectionTools_BindingFlags  Rewired::Utils::ReflectionTools_BindingFlags::FlattenHierarchy{static_cast<int32_t>(0x40)};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.IsValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::IsValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1817e64e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.IsEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::IsEnum)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181903740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsEnum", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetUnderlyingEnumType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::GetUnderlyingEnumType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819036d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetUnderlyingEnumType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.IsClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::IsClass)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1817e63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsClass", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.IsPrimitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::IsPrimitive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1817e64a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsPrimitive", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.IsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::IsArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18190cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsArray", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.DoesTypeImplement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::Rewired::Utils::ReflectionTools::DoesTypeImplement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18190c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"DoesTypeImplement", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.IsGenericType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::IsGenericType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18190cfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsGenericType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetGenericArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::GetGenericArguments)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18190cb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetGenericArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::GetFields)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18190cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*, ::Rewired::Utils::ReflectionTools_BindingFlags)>(&::Rewired::Utils::ReflectionTools::GetFields)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18190cad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetFields", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::ReflectionTools_BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::GetProperties)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18190cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* (*)(::System::Type*, ::Rewired::Utils::ReflectionTools_BindingFlags)>(&::Rewired::Utils::ReflectionTools::GetProperties)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18190ccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::ReflectionTools_BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* (*)(::System::Type*)>(&::Rewired::Utils::ReflectionTools::GetMethods)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18190cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetMethods", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* (*)(::System::Type*, ::Rewired::Utils::ReflectionTools_BindingFlags)>(&::Rewired::Utils::ReflectionTools::GetMethods)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18190cbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetMethods", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::ReflectionTools_BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.IsDefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*, bool)>(&::Rewired::Utils::ReflectionTools::IsDefined)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18190cf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsDefined", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.IsAssemblyLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, bool, bool)>(&::Rewired::Utils::ReflectionTools::IsAssemblyLoaded)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18190cda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsAssemblyLoaded", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetTypeInUnityEditorAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, bool)>(&::Rewired::Utils::ReflectionTools::GetTypeInUnityEditorAssembly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18190cd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetTypeInUnityEditorAssembly", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetTypeInUnityBuildAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, bool)>(&::Rewired::Utils::ReflectionTools::GetTypeInUnityBuildAssembly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18190cd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetTypeInUnityBuildAssembly", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.EUNSykChYQgZYmKQaMrDLKOgpDK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, bool, bool)>(&::Rewired::Utils::ReflectionTools::EUNSykChYQgZYmKQaMrDLKOgpDK)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18190ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"EUNSykChYQgZYmKQaMrDLKOgpDK", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetTypeInAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, ::StringW, bool)>(&::Rewired::Utils::ReflectionTools::GetTypeInAssembly)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18190cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetTypeInAssembly", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ReflectionTools.GetMethodInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Delegate*)>(&::Rewired::Utils::ReflectionTools::GetMethodInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18190cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetMethodInfo", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Rewired::Utils::ReflectionTools::IsValueType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Rewired::Utils::ReflectionTools::IsEnum(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsEnum", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Type* Rewired::Utils::ReflectionTools::GetUnderlyingEnumType(::System::Type*  enumType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetUnderlyingEnumType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, enumType);
}
inline bool Rewired::Utils::ReflectionTools::IsClass(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsClass", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Rewired::Utils::ReflectionTools::IsPrimitive(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsPrimitive", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Rewired::Utils::ReflectionTools::IsArray(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsArray", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Rewired::Utils::ReflectionTools::DoesTypeImplement(::System::Type*  type, ::System::Type*  baseOrInterfaceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"DoesTypeImplement", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, baseOrInterfaceType);
}
inline bool Rewired::Utils::ReflectionTools::IsGenericType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsGenericType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Type*> Rewired::Utils::ReflectionTools::GetGenericArguments(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetGenericArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* Rewired::Utils::ReflectionTools::GetFields(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* Rewired::Utils::ReflectionTools::GetFields(::System::Type*  type, ::Rewired::Utils::ReflectionTools_BindingFlags  bindingFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetFields", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::ReflectionTools_BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*>(nullptr, ___internal_method, type, bindingFlags);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* Rewired::Utils::ReflectionTools::GetProperties(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* Rewired::Utils::ReflectionTools::GetProperties(::System::Type*  type, ::Rewired::Utils::ReflectionTools_BindingFlags  bindingFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::ReflectionTools_BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*>(nullptr, ___internal_method, type, bindingFlags);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* Rewired::Utils::ReflectionTools::GetMethods(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetMethods", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* Rewired::Utils::ReflectionTools::GetMethods(::System::Type*  type, ::Rewired::Utils::ReflectionTools_BindingFlags  bindingFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetMethods", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::ReflectionTools_BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>(nullptr, ___internal_method, type, bindingFlags);
}
inline bool Rewired::Utils::ReflectionTools::IsDefined(::System::Type*  type, ::System::Type*  attributeType, bool  inherit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsDefined", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, attributeType, inherit);
}
template<typename T>
inline T Rewired::Utils::ReflectionTools::GetAttribute(::System::Type*  type, bool  inherit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                    {"GetAttribute", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, type, inherit);
}
inline bool Rewired::Utils::ReflectionTools::IsAssemblyLoaded(::StringW  assemblyName, bool  useShortName, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"IsAssemblyLoaded", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assemblyName, useShortName, ignoreCase);
}
inline ::System::Type* Rewired::Utils::ReflectionTools::GetTypeInUnityEditorAssembly(::StringW  classPath, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetTypeInUnityEditorAssembly", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, classPath, ignoreCase);
}
inline ::System::Type* Rewired::Utils::ReflectionTools::GetTypeInUnityBuildAssembly(::StringW  classPath, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetTypeInUnityBuildAssembly", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, classPath, ignoreCase);
}
inline ::System::Type* Rewired::Utils::ReflectionTools::EUNSykChYQgZYmKQaMrDLKOgpDK(::StringW  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"EUNSykChYQgZYmKQaMrDLKOgpDK", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::System::Type* Rewired::Utils::ReflectionTools::GetTypeInAssembly(::StringW  classPath, ::StringW  assemblyName, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetTypeInAssembly", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, classPath, assemblyName, ignoreCase);
}
template<typename T,typename TRet>
inline TRet Rewired::Utils::ReflectionTools::GetPrivateField(T  obj, ::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                    {"GetPrivateField", {::i2c::class_of<T>(), ::i2c::class_of<TRet>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TRet>()}
                )));
return ::cordl_internals::RunMethodRethrow<TRet>(nullptr, ___internal_method, obj, name);
}
template<typename T,typename TRet>
inline TRet Rewired::Utils::ReflectionTools::GetPrivateProperty(T  obj, ::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                    {"GetPrivateProperty", {::i2c::class_of<T>(), ::i2c::class_of<TRet>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TRet>()}
                )));
return ::cordl_internals::RunMethodRethrow<TRet>(nullptr, ___internal_method, obj, name);
}
template<typename T>
inline void Rewired::Utils::ReflectionTools::SetPrivateField(T  obj, ::StringW  name, ::System::Object*  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                    {"SetPrivateField", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, name, value);
}
template<typename T>
inline void Rewired::Utils::ReflectionTools::SetPrivateProperty(T  obj, ::StringW  name, ::System::Object*  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                    {"SetPrivateProperty", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, name, value);
}
template<typename T,typename TRet>
inline TRet Rewired::Utils::ReflectionTools::CallPrivateMethod(T  obj, ::StringW  name, ::ArrayW<::System::Object*>  param)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                    {"CallPrivateMethod", {::i2c::class_of<T>(), ::i2c::class_of<TRet>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TRet>()}
                )));
return ::cordl_internals::RunMethodRethrow<TRet>(nullptr, ___internal_method, obj, name, param);
}
inline ::System::Reflection::MethodInfo* Rewired::Utils::ReflectionTools::GetMethodInfo(::System::Delegate*  delegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ReflectionTools*>(),
                        {"GetMethodInfo", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, delegate);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::ReflectionTools::ReflectionTools()   {
}
