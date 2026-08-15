#pragma once
// IWYU pragma private; include "System/Reflection/MethodBase.hpp"
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::MethodBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::GetParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodAttributes (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_Attributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetMethodImplementationFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodImplAttributes (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_CallingConvention
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::CallingConventions (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_CallingConvention)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsAbstract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsAbstract)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18167c520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsAbstract", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsConstructor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18167c550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsConstructor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsSpecialName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsSpecialName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18167c620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsSpecialName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18167c650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsStatic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsVirtual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsVirtual)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18167c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsVirtual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsPublic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsPublic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18167c5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsPublic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsGenericMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsGenericMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsGenericMethodDefinition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsGenericMethodDefinition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetGenericArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::GetGenericArguments)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18167c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_ContainsGenericParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::MethodBase::*)(::System::Object*, ::ArrayW<::System::Object*>)>(&::System::Reflection::MethodBase::Invoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18167c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"Invoke", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::MethodBase::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*)>(&::System::Reflection::MethodBase::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_MethodHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeMethodHandle (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_MethodHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.get_IsSecurityCritical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::get_IsSecurityCritical)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18167c600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodBase::*)(::System::Object*)>(&::System::Reflection::MethodBase::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816735a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815f4340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*)>(&::System::Reflection::MethodBase::op_Equality)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18167c6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*)>(&::System::Reflection::MethodBase::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18167c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetParametersInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::GetParametersInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18167c4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetParametersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::GetParametersCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18167c4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.FormatNameAndSig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::MethodBase::*)(bool)>(&::System::Reflection::MethodBase::FormatNameAndSig)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18167c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetParameterTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::GetParameterTypes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18167c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetParametersNoCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::MethodBase::*)()>(&::System::Reflection::MethodBase::GetParametersNoCopy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18167c4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::MethodBase*>(),
                    {::i2c::class_of<::System::Reflection::MethodBase*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.GetMethodFromHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::RuntimeMethodHandle)>(&::System::Reflection::MethodBase::GetMethodFromHandle)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18167c2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"GetMethodFromHandle", {}, {::i2c::type_of<::System::RuntimeMethodHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodBase.ConstructParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Type*>, ::System::Reflection::CallingConventions, bool)>(&::System::Reflection::MethodBase::ConstructParameters)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18167bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"ConstructParameters", {}, {::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Reflection::MethodBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::MethodBase::GetParameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::System::Reflection::MethodAttributes System::Reflection::MethodBase::get_Attributes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes>(this, ___internal_method);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::MethodBase::GetMethodImplementationFlags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes>(this, ___internal_method);
}
inline ::System::Reflection::CallingConventions System::Reflection::MethodBase::get_CallingConvention()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::CallingConventions>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsAbstract()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsAbstract", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsConstructor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsConstructor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsSpecialName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsSpecialName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsStatic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsStatic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsVirtual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsVirtual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsPublic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"get_IsPublic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsGenericMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsGenericMethodDefinition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::Reflection::MethodBase::GetGenericArguments()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_ContainsGenericParameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::MethodBase::Invoke(::System::Object*  obj, ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"Invoke", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, parameters);
}
inline ::System::Object* System::Reflection::MethodBase::Invoke(::System::Object*  obj, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*>  parameters, ::System::Globalization::CultureInfo*  culture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline ::System::RuntimeMethodHandle System::Reflection::MethodBase::get_MethodHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::RuntimeMethodHandle>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::get_IsSecurityCritical()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::MethodBase::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::MethodBase::op_Equality(::System::Reflection::MethodBase*  left, ::System::Reflection::MethodBase*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::MethodBase::op_Inequality(::System::Reflection::MethodBase*  left, ::System::Reflection::MethodBase*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::MethodBase::GetParametersInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline int32_t System::Reflection::MethodBase::GetParametersCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Reflection::MethodBase::FormatNameAndSig(bool  serialization)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, serialization);
}
inline ::ArrayW<::System::Type*> System::Reflection::MethodBase::GetParameterTypes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::MethodBase::GetParametersNoCopy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::MethodBase*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Reflection::MethodBase::GetMethodFromHandle(::System::RuntimeMethodHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"GetMethodFromHandle", {}, {::i2c::type_of<::System::RuntimeMethodHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Reflection::MethodBase::ConstructParameters(::ArrayW<::System::Type*>  parameterTypes, ::System::Reflection::CallingConventions  callingConvention, bool  serialization)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::MethodBase*>(),
                        {"ConstructParameters", {}, {::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, parameterTypes, callingConvention, serialization);
}
inline ::System::Reflection::MethodBase* System::Reflection::MethodBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::MethodBase*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::MethodBase::MethodBase()   {
}
