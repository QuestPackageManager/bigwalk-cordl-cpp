#pragma once
// IWYU pragma private; include "System/MulticastDelegate.hpp"
#include "System/zzzz__Delegate_impl.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::MulticastDelegate.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MulticastDelegate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::MulticastDelegate::GetObjectData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181748d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::MulticastDelegate*>(),
                    {::i2c::class_of<::System::MulticastDelegate*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::MulticastDelegate::*)(::System::Object*)>(&::System::MulticastDelegate::Equals)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18174e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"Equals", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::MulticastDelegate::*)()>(&::System::MulticastDelegate::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181748bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"GetHashCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.GetMethodImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::MulticastDelegate::*)()>(&::System::MulticastDelegate::GetMethodImpl)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18174e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::MulticastDelegate*>(),
                    {::i2c::class_of<::System::MulticastDelegate*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.GetInvocationList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Delegate*> (::System::MulticastDelegate::*)()>(&::System::MulticastDelegate::GetInvocationList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18174e240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"GetInvocationList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.CombineImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::MulticastDelegate::*)(::System::Delegate*)>(&::System::MulticastDelegate::CombineImpl)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18174ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"CombineImpl", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.LastIndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::MulticastDelegate::*)(::ArrayW<::System::Delegate*>, ::ArrayW<::System::Delegate*>)>(&::System::MulticastDelegate::LastIndexOf)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18174e400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"LastIndexOf", {}, {::i2c::type_of<::ArrayW<::System::Delegate*>>(), ::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.RemoveImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::MulticastDelegate::*)(::System::Delegate*)>(&::System::MulticastDelegate::RemoveImpl)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x18174e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"RemoveImpl", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Delegate*>& System::MulticastDelegate::__cordl_internal_get_delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
constexpr ::ArrayW<::System::Delegate*> const& System::MulticastDelegate::__cordl_internal_get_delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
constexpr void System::MulticastDelegate::__cordl_internal_set_delegates(::ArrayW<::System::Delegate*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delegates = value;
}
inline void System::MulticastDelegate::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::MulticastDelegate*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline bool System::MulticastDelegate::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"Equals", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::MulticastDelegate::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"GetHashCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::MulticastDelegate::GetMethodImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::MulticastDelegate*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::ArrayW<::System::Delegate*> System::MulticastDelegate::GetInvocationList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"GetInvocationList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Delegate*>>(this, ___internal_method);
}
inline ::System::Delegate* System::MulticastDelegate::CombineImpl(::System::Delegate*  follow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"CombineImpl", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, follow);
}
inline int32_t System::MulticastDelegate::LastIndexOf(::ArrayW<::System::Delegate*>  haystack, ::ArrayW<::System::Delegate*>  needle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"LastIndexOf", {}, {::i2c::type_of<::ArrayW<::System::Delegate*>>(), ::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, haystack, needle);
}
inline ::System::Delegate* System::MulticastDelegate::RemoveImpl(::System::Delegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MulticastDelegate*>(),
                        {"RemoveImpl", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::MulticastDelegate::MulticastDelegate()   {
}
