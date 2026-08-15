#pragma once
// IWYU pragma private; include "System/Reflection/Assembly.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Reflection/zzzz__ManifestResourceInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Runtime/InteropServices/zzzz___Assembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Assembly_ResolveEventHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Assembly_ResolveEventHolder::*)()>(&::System::Reflection::Assembly_ResolveEventHolder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly_ResolveEventHolder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Reflection::Assembly_ResolveEventHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly_ResolveEventHolder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::Assembly_ResolveEventHolder* System::Reflection::Assembly_ResolveEventHolder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::Assembly_ResolveEventHolder*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::Assembly_ResolveEventHolder::Assembly_ResolveEventHolder()   {
}
//  Writing Method size for method: ::System::Reflection::Assembly.get_CodeBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_CodeBase)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_FullName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_MonoAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_MonoAssembly)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.set_FromByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::set_FromByteArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_Location
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_Location)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Assembly::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::Assembly::GetObjectData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.IsDefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Assembly::*)(::System::Type*, bool)>(&::System::Reflection::Assembly::IsDefined)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCustomAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCustomAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Assembly::*)(::System::Type*, bool)>(&::System::Reflection::Assembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetManifestResourceStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Reflection::Assembly::*)(::StringW)>(&::System::Reflection::Assembly::GetManifestResourceStream)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetTypes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181673690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetTypes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816632e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::StringW)>(&::System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181673660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.InternalGetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::System::Reflection::Module*, ::StringW, bool, bool)>(&::System::Reflection::Assembly::InternalGetType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816736a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"InternalGetType", {}, {::i2c::type_of<::System::Reflection::Module*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::AssemblyName* (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::AssemblyName* (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181673640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::System::Type*)>(&::System::Reflection::Assembly::GetAssembly)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816735b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"GetAssembly", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::Load)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816737b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::ArrayW<uint8_t>)>(&::System::Reflection::Assembly::Load)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816737e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"Load", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.ReflectionOnlyLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::ReflectionOnlyLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181673810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"ReflectionOnlyLoad", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816736b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"LoadWithPartialName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.load_with_partial_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*)>(&::System::Reflection::Assembly::load_with_partial_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181673860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"load_with_partial_name", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*)>(&::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181673760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"LoadWithPartialName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*, bool)>(&::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181673700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"LoadWithPartialName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModulesInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Module*> (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetModulesInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetExecutingAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)()>(&::System::Reflection::Assembly::GetExecutingAssembly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181673610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"GetExecutingAssembly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCallingAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)()>(&::System::Reflection::Assembly::GetCallingAssembly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181673600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"GetCallingAssembly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetManifestResourceInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ManifestResourceInfo* (::System::Reflection::Assembly::*)(::StringW)>(&::System::Reflection::Assembly::GetManifestResourceInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815f4340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Assembly::*)(::System::Object*)>(&::System::Reflection::Assembly::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816735a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.CreateNIE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Reflection::Assembly::CreateNIE)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181673570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"CreateNIE", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_IsFullyTrusted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_IsFullyTrusted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"get_IsFullyTrusted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::StringW, bool, bool)>(&::System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181673620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::Assembly::*)(::StringW)>(&::System::Reflection::Assembly::GetModule)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181673620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Module*> (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetModules)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181673620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Assembly*>(),
                    {::i2c::class_of<::System::Reflection::Assembly*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*)>(&::System::Reflection::Assembly::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181673870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*)>(&::System::Reflection::Assembly::op_Inequality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816738b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::Reflection::Assembly::get_CodeBase()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::Assembly::get_FullName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IntPtr System::Reflection::Assembly::get_MonoAssembly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void System::Reflection::Assembly::set_FromByteArray(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Reflection::Assembly::get_Location()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Reflection::Assembly::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline bool System::Reflection::Assembly::IsDefined(::System::Type*  attributeType, bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Assembly::GetCustomAttributes(bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Assembly::GetCustomAttributes(::System::Type*  attributeType, bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::IO::Stream* System::Reflection::Assembly::GetManifestResourceStream(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Type*> System::Reflection::Assembly::GetTypes(bool  exportedOnly)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, exportedOnly);
}
inline ::ArrayW<::System::Type*> System::Reflection::Assembly::GetTypes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Assembly::GetType(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name);
}
inline ::System::Type* System::Reflection::Assembly::InternalGetType(::System::Reflection::Module*  _cordl_module, ::StringW  name, bool  throwOnError, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"InternalGetType", {}, {::i2c::type_of<::System::Reflection::Module*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, _cordl_module, name, throwOnError, ignoreCase);
}
inline ::System::Reflection::AssemblyName* System::Reflection::Assembly::GetName(bool  copiedName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*>(this, ___internal_method, copiedName);
}
inline ::System::Reflection::AssemblyName* System::Reflection::Assembly::GetName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Assembly::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetAssembly(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"GetAssembly", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::Load(::StringW  assemblyString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::Load(::ArrayW<uint8_t>  rawAssembly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"Load", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, rawAssembly);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::ReflectionOnlyLoad(::StringW  assemblyString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"ReflectionOnlyLoad", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW  partialName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"LoadWithPartialName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, partialName);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::load_with_partial_name(::StringW  name, ::System::Security::Policy::Evidence*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"load_with_partial_name", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, name, e);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW  partialName, ::System::Security::Policy::Evidence*  securityEvidence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"LoadWithPartialName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, partialName, securityEvidence);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW  partialName, ::System::Security::Policy::Evidence*  securityEvidence, bool  oldBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"LoadWithPartialName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, partialName, securityEvidence, oldBehavior);
}
inline ::ArrayW<::System::Reflection::Module*> System::Reflection::Assembly::GetModulesInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*>>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetExecutingAssembly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"GetExecutingAssembly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetCallingAssembly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"GetCallingAssembly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method);
}
inline ::System::Reflection::ManifestResourceInfo* System::Reflection::Assembly::GetManifestResourceInfo(::StringW  resourceName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ManifestResourceInfo*>(this, ___internal_method, resourceName);
}
inline int32_t System::Reflection::Assembly::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::Assembly::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::System::Exception* System::Reflection::Assembly::CreateNIE()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"CreateNIE", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline bool System::Reflection::Assembly::get_IsFullyTrusted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"get_IsFullyTrusted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Assembly::GetType(::StringW  name, bool  throwOnError, bool  ignoreCase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, throwOnError, ignoreCase);
}
inline ::System::Reflection::Module* System::Reflection::Assembly::GetModule(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Reflection::Module*> System::Reflection::Assembly::GetModules(bool  getResourceModules)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Assembly*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*>>(this, ___internal_method, getResourceModules);
}
inline bool System::Reflection::Assembly::op_Equality(::System::Reflection::Assembly*  left, ::System::Reflection::Assembly*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::Assembly::op_Inequality(::System::Reflection::Assembly*  left, ::System::Reflection::Assembly*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline void System::Reflection::Assembly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::Assembly*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::Assembly*>());
}
/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr  System::Reflection::Assembly::operator ::System::Reflection::ICustomAttributeProvider*() noexcept {
return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
constexpr ::System::Reflection::ICustomAttributeProvider* System::Reflection::Assembly::i___System__Reflection__ICustomAttributeProvider() noexcept {
return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Reflection::Assembly::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::Assembly::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::InteropServices::_Assembly"
constexpr  System::Reflection::Assembly::operator ::System::Runtime::InteropServices::_Assembly*() noexcept {
return static_cast<::System::Runtime::InteropServices::_Assembly*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::InteropServices::_Assembly"
constexpr ::System::Runtime::InteropServices::_Assembly* System::Reflection::Assembly::i___System__Runtime__InteropServices___Assembly() noexcept {
return static_cast<::System::Runtime::InteropServices::_Assembly*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::Assembly::Assembly()   {
}
