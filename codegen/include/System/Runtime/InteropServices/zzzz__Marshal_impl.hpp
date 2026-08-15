#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/Marshal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__Marshal_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__ICustomMarshaler_def.hpp"
#include "System/Runtime/InteropServices/zzzz__Marshal_def.hpp"
#include "System/Security/zzzz__SecureString_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal_SecureStringAllocator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::Marshal_SecureStringAllocator::*)(::System::Object*, ::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal_SecureStringAllocator::_ctor)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x1813c5640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal_SecureStringAllocator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal_SecureStringAllocator.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Runtime::InteropServices::Marshal_SecureStringAllocator::*)(int32_t)>(&::System::Runtime::InteropServices::Marshal_SecureStringAllocator::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::Marshal_SecureStringAllocator*>(),
                    {::i2c::class_of<::System::Runtime::InteropServices::Marshal_SecureStringAllocator*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void System::Runtime::InteropServices::Marshal_SecureStringAllocator::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal_SecureStringAllocator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal_SecureStringAllocator::Invoke(int32_t  len)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::InteropServices::Marshal_SecureStringAllocator*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, len);
}
inline ::System::Runtime::InteropServices::Marshal_SecureStringAllocator* System::Runtime::InteropServices::Marshal_SecureStringAllocator::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::Marshal_SecureStringAllocator*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::Marshal_SecureStringAllocator::Marshal_SecureStringAllocator()   {
}
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::*)(::System::ValueTuple_2<::System::Type*,::StringW>, ::System::ValueTuple_2<::System::Type*,::StringW>)>(&::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181665c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::System::ValueTuple_2<::System::Type*,::StringW>>(), ::i2c::type_of<::System::ValueTuple_2<::System::Type*,::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::*)(::System::ValueTuple_2<::System::Type*,::StringW>)>(&::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x51d0;
  constexpr static std::size_t addrs = 0x180c81340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::System::ValueTuple_2<::System::Type*,::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::*)()>(&::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::Equals(::System::ValueTuple_2<::System::Type*,::StringW>  lhs, ::System::ValueTuple_2<::System::Type*,::StringW>  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::System::ValueTuple_2<::System::Type*,::StringW>>(), ::i2c::type_of<::System::ValueTuple_2<::System::Type*,::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lhs, rhs);
}
inline int32_t System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::GetHashCode(::System::ValueTuple_2<::System::Type*,::StringW>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::System::ValueTuple_2<::System::Type*,::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline void System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer* System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>"
constexpr  System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>* System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::i___System__Collections__Generic__IEqualityComparer_1___System__ValueTuple_2___System__Type____StringW__() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer::Marshal_MarshalerInstanceKeyComparer()   {
}
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::Marshal___c::*)()>(&::System::Runtime::InteropServices::Marshal___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal___c._GetCustomMarshalerInstance_b__201_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>* (::System::Runtime::InteropServices::Marshal___c::*)()>(&::System::Runtime::InteropServices::Marshal___c::_GetCustomMarshalerInstance_b__201_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18166d770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal___c*>(),
                        {"<GetCustomMarshalerInstance>b__201_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::InteropServices::Marshal___c::setStaticF___9(::System::Runtime::InteropServices::Marshal___c*  value)  {
::cordl_internals::setStaticField<::System::Runtime::InteropServices::Marshal___c*, "<>9", ::System::Runtime::InteropServices::Marshal___c*>(std::forward<::System::Runtime::InteropServices::Marshal___c*>(value));
}
inline ::System::Runtime::InteropServices::Marshal___c* System::Runtime::InteropServices::Marshal___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Runtime::InteropServices::Marshal___c*, "<>9", ::System::Runtime::InteropServices::Marshal___c*>();
}
inline void System::Runtime::InteropServices::Marshal___c::setStaticF___9__201_0(::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>*, "<>9__201_0", ::System::Runtime::InteropServices::Marshal___c*>(std::forward<::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>*>(value));
}
inline ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>* System::Runtime::InteropServices::Marshal___c::getStaticF___9__201_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>*, "<>9__201_0", ::System::Runtime::InteropServices::Marshal___c*>();
}
inline void System::Runtime::InteropServices::Marshal___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>* System::Runtime::InteropServices::Marshal___c::_GetCustomMarshalerInstance_b__201_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal___c*>(),
                        {"<GetCustomMarshalerInstance>b__201_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::Marshal___c* System::Runtime::InteropServices::Marshal___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::Marshal___c*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::Marshal___c::Marshal___c()   {
}
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.AddRefInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::AddRefInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816647a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AddRefInternal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.AddRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::AddRef)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816647b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AddRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.AllocCoTaskMem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::System::Runtime::InteropServices::Marshal::AllocCoTaskMem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816647e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AllocCoTaskMem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.AllocHGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::AllocHGlobal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816647f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AllocHGlobal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.AllocHGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::System::Runtime::InteropServices::Marshal::AllocHGlobal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181664800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AllocHGlobal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.copy_to_unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, ::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::copy_to_unmanaged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_to_unmanaged", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.copy_to_unmanaged_fixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, ::System::IntPtr, int32_t, void*)>(&::System::Runtime::InteropServices::Marshal::copy_to_unmanaged_fixed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_to_unmanaged_fixed", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.skip_fixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Array*, int32_t)>(&::System::Runtime::InteropServices::Marshal::skip_fixed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181665bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"skip_fixed", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.copy_to_unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::copy_to_unmanaged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181665b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_to_unmanaged", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::Copy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181664860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int16_t>, int32_t, ::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816649c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, ::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816648e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::IntPtr>, int32_t, ::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181664950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.copy_from_unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::Array*, int32_t)>(&::System::Runtime::InteropServices::Marshal::copy_from_unmanaged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_from_unmanaged", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.copy_from_unmanaged_fixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::Array*, int32_t, void*)>(&::System::Runtime::InteropServices::Marshal::copy_from_unmanaged_fixed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_from_unmanaged_fixed", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Runtime::InteropServices::Marshal::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181664b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Runtime::InteropServices::Marshal::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181664a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<int32_t>, int32_t, int32_t)>(&::System::Runtime::InteropServices::Marshal::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181664aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::System::IntPtr>, int32_t, int32_t)>(&::System::Runtime::InteropServices::Marshal::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181664b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.FreeBSTR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::FreeBSTR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181664bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"FreeBSTR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.FreeHGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::FreeHGlobal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181664c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"FreeHGlobal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ClearUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::ClearUnicode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181664810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ClearUnicode", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ZeroFreeGlobalAllocUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::ZeroFreeGlobalAllocUnicode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181665a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ZeroFreeGlobalAllocUnicode", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetHRForException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Exception*)>(&::System::Runtime::InteropServices::Marshal::GetHRForException)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816653d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetHRForException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetIUnknownForObjectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Object*)>(&::System::Runtime::InteropServices::Marshal::GetIUnknownForObjectInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816653e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetIUnknownForObjectInternal", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetIUnknownForObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Object*)>(&::System::Runtime::InteropServices::Marshal::GetIUnknownForObject)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816653f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetIUnknownForObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.IsComObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::Runtime::InteropServices::Marshal::IsComObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"IsComObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetLastWin32Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Runtime::InteropServices::Marshal::GetLastWin32Error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetLastWin32Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.OffsetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Type*, ::StringW)>(&::System::Runtime::InteropServices::Marshal::OffsetOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"OffsetOf", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.PtrToStringAnsi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::PtrToStringAnsi)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStringAnsi", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.PtrToStringAnsi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::PtrToStringAnsi)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStringAnsi", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.PtrToStringUni
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::PtrToStringUni)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStringUni", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.PtrToStringUni
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::PtrToStringUni)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStringUni", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.PtrToStructure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr, ::System::Type*)>(&::System::Runtime::InteropServices::Marshal::PtrToStructure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816654a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStructure", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.QueryInterfaceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::Guid>, ::by_ref<::System::IntPtr>)>(&::System::Runtime::InteropServices::Marshal::QueryInterfaceInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816654b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"QueryInterfaceInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.QueryInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::Guid>, ::by_ref<::System::IntPtr>)>(&::System::Runtime::InteropServices::Marshal::QueryInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816654c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"QueryInterface", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::ReadByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180907b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadByte", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReadInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::ReadInt16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816654f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt16", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReadInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::ReadInt32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt32", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReadInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::ReadInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181665510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt32", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReadInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::ReadInt64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt64", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReadInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::ReadInt64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181665550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt64", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReadIntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::ReadIntPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816655c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadIntPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReadIntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::ReadIntPtr)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181665570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadIntPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.ReleaseInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::ReleaseInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReleaseInternal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::Release)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181665610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Release", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.SizeOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::System::Runtime::InteropServices::Marshal::SizeOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816658b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"SizeOf", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.StringToHGlobalAnsi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(char16_t*, int32_t)>(&::System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816658c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StringToHGlobalAnsi", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.StringToHGlobalAnsi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816658d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StringToHGlobalAnsi", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.StringToHGlobalUni
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(char16_t*, int32_t)>(&::System::Runtime::InteropServices::Marshal::StringToHGlobalUni)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StringToHGlobalUni", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.StringToHGlobalUni
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::System::Runtime::InteropServices::Marshal::StringToHGlobalUni)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181665910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StringToHGlobalUni", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.SecureStringGlobalAllocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::System::Runtime::InteropServices::Marshal::SecureStringGlobalAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181664800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"SecureStringGlobalAllocator", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.SecureStringToUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Security::SecureString*, ::System::Runtime::InteropServices::Marshal_SecureStringAllocator*)>(&::System::Runtime::InteropServices::Marshal::SecureStringToUnicode)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181665730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"SecureStringToUnicode", {}, {::i2c::type_of<::System::Security::SecureString*>(), ::i2c::type_of<::System::Runtime::InteropServices::Marshal_SecureStringAllocator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.SecureStringToGlobalAllocUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Security::SecureString*)>(&::System::Runtime::InteropServices::Marshal::SecureStringToGlobalAllocUnicode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181665640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"SecureStringToGlobalAllocUnicode", {}, {::i2c::type_of<::System::Security::SecureString*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.StructureToPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::IntPtr, bool)>(&::System::Runtime::InteropServices::Marshal::StructureToPtr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StructureToPtr", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.UnsafeAddrOfPinnedArrayElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Array*, int32_t)>(&::System::Runtime::InteropServices::Marshal::UnsafeAddrOfPinnedArrayElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"UnsafeAddrOfPinnedArrayElement", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint8_t)>(&::System::Runtime::InteropServices::Marshal::WriteByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteByte", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, uint8_t)>(&::System::Runtime::InteropServices::Marshal::WriteByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181665980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteByte", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.WriteInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int16_t)>(&::System::Runtime::InteropServices::Marshal::WriteInt16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816659a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt16", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.WriteInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::System::Runtime::InteropServices::Marshal::WriteInt32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816659c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt32", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.WriteInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::System::Runtime::InteropServices::Marshal::WriteInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816659d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt32", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.WriteInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int64_t)>(&::System::Runtime::InteropServices::Marshal::WriteInt64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816659f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt64", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.WriteInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int64_t)>(&::System::Runtime::InteropServices::Marshal::WriteInt64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181665a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt64", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.WriteIntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::System::Runtime::InteropServices::Marshal::WriteIntPtr)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181665a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteIntPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetDelegateForFunctionPointerInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::IntPtr, ::System::Type*)>(&::System::Runtime::InteropServices::Marshal::GetDelegateForFunctionPointerInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetDelegateForFunctionPointerInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetDelegateForFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::IntPtr, ::System::Type*)>(&::System::Runtime::InteropServices::Marshal::GetDelegateForFunctionPointer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181665290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetDelegateForFunctionPointer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetFunctionPointerForDelegateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Delegate*)>(&::System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegateInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181665390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetFunctionPointerForDelegateInternal", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetFunctionPointerForDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Delegate*)>(&::System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816653a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetFunctionPointerForDelegate", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::Marshal.GetCustomMarshalerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::ICustomMarshaler* (*)(::System::Type*, ::StringW)>(&::System::Runtime::InteropServices::Marshal::GetCustomMarshalerInstance)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x181664c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetCustomMarshalerInstance", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::InteropServices::Marshal::setStaticF_SystemMaxDBCSCharSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SystemMaxDBCSCharSize", ::System::Runtime::InteropServices::Marshal*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::InteropServices::Marshal::getStaticF_SystemMaxDBCSCharSize()  {
return ::cordl_internals::getStaticField<int32_t, "SystemMaxDBCSCharSize", ::System::Runtime::InteropServices::Marshal*>();
}
inline void System::Runtime::InteropServices::Marshal::setStaticF_SystemDefaultCharSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SystemDefaultCharSize", ::System::Runtime::InteropServices::Marshal*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::InteropServices::Marshal::getStaticF_SystemDefaultCharSize()  {
return ::cordl_internals::getStaticField<int32_t, "SystemDefaultCharSize", ::System::Runtime::InteropServices::Marshal*>();
}
inline void System::Runtime::InteropServices::Marshal::setStaticF_MarshalerInstanceCache(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*, "MarshalerInstanceCache", ::System::Runtime::InteropServices::Marshal*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>* System::Runtime::InteropServices::Marshal::getStaticF_MarshalerInstanceCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*, "MarshalerInstanceCache", ::System::Runtime::InteropServices::Marshal*>();
}
inline void System::Runtime::InteropServices::Marshal::setStaticF_MarshalerInstanceCacheLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "MarshalerInstanceCacheLock", ::System::Runtime::InteropServices::Marshal*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::InteropServices::Marshal::getStaticF_MarshalerInstanceCacheLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "MarshalerInstanceCacheLock", ::System::Runtime::InteropServices::Marshal*>();
}
inline int32_t System::Runtime::InteropServices::Marshal::AddRefInternal(::System::IntPtr  pUnk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AddRefInternal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pUnk);
}
inline int32_t System::Runtime::InteropServices::Marshal::AddRef(::System::IntPtr  pUnk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AddRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pUnk);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::AllocCoTaskMem(int32_t  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AllocCoTaskMem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, cb);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::AllocHGlobal(::System::IntPtr  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AllocHGlobal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, cb);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::AllocHGlobal(int32_t  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"AllocHGlobal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, cb);
}
inline void System::Runtime::InteropServices::Marshal::copy_to_unmanaged(::System::Array*  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_to_unmanaged", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length);
}
inline void System::Runtime::InteropServices::Marshal::copy_to_unmanaged_fixed(::System::Array*  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length, void*  fixed_source_element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_to_unmanaged_fixed", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length, fixed_source_element);
}
inline bool System::Runtime::InteropServices::Marshal::skip_fixed(::System::Array*  array, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"skip_fixed", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, startIndex);
}
inline void System::Runtime::InteropServices::Marshal::copy_to_unmanaged(::ArrayW<uint8_t>  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_to_unmanaged", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length);
}
inline void System::Runtime::InteropServices::Marshal::Copy(::ArrayW<uint8_t>  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length);
}
inline void System::Runtime::InteropServices::Marshal::Copy(::ArrayW<int16_t>  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length);
}
inline void System::Runtime::InteropServices::Marshal::Copy(::ArrayW<int32_t>  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length);
}
inline void System::Runtime::InteropServices::Marshal::Copy(::ArrayW<::System::IntPtr>  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length);
}
inline void System::Runtime::InteropServices::Marshal::copy_from_unmanaged(::System::IntPtr  source, int32_t  startIndex, ::System::Array*  destination, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_from_unmanaged", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length);
}
inline void System::Runtime::InteropServices::Marshal::copy_from_unmanaged_fixed(::System::IntPtr  source, int32_t  startIndex, ::System::Array*  destination, int32_t  length, void*  fixed_destination_element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"copy_from_unmanaged_fixed", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, startIndex, destination, length, fixed_destination_element);
}
inline void System::Runtime::InteropServices::Marshal::Copy(::System::IntPtr  source, ::ArrayW<uint8_t>  destination, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, startIndex, length);
}
inline void System::Runtime::InteropServices::Marshal::Copy(::System::IntPtr  source, ::ArrayW<char16_t>  destination, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, startIndex, length);
}
inline void System::Runtime::InteropServices::Marshal::Copy(::System::IntPtr  source, ::ArrayW<int32_t>  destination, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, startIndex, length);
}
inline void System::Runtime::InteropServices::Marshal::Copy(::System::IntPtr  source, ::ArrayW<::System::IntPtr>  destination, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, startIndex, length);
}
inline void System::Runtime::InteropServices::Marshal::FreeBSTR(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"FreeBSTR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void System::Runtime::InteropServices::Marshal::FreeHGlobal(::System::IntPtr  hglobal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"FreeHGlobal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hglobal);
}
inline void System::Runtime::InteropServices::Marshal::ClearUnicode(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ClearUnicode", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void System::Runtime::InteropServices::Marshal::ZeroFreeGlobalAllocUnicode(::System::IntPtr  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ZeroFreeGlobalAllocUnicode", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s);
}
inline int32_t System::Runtime::InteropServices::Marshal::GetHRForException(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetHRForException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, e);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::GetIUnknownForObjectInternal(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetIUnknownForObjectInternal", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, o);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::GetIUnknownForObject(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetIUnknownForObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, o);
}
inline bool System::Runtime::InteropServices::Marshal::IsComObject(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"IsComObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, o);
}
inline int32_t System::Runtime::InteropServices::Marshal::GetLastWin32Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetLastWin32Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::OffsetOf(::System::Type*  t, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"OffsetOf", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, t, fieldName);
}
inline ::StringW System::Runtime::InteropServices::Marshal::PtrToStringAnsi(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStringAnsi", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ptr);
}
inline ::StringW System::Runtime::InteropServices::Marshal::PtrToStringAnsi(::System::IntPtr  ptr, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStringAnsi", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ptr, len);
}
inline ::StringW System::Runtime::InteropServices::Marshal::PtrToStringUni(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStringUni", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ptr);
}
inline ::StringW System::Runtime::InteropServices::Marshal::PtrToStringUni(::System::IntPtr  ptr, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStringUni", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ptr, len);
}
inline ::System::Object* System::Runtime::InteropServices::Marshal::PtrToStructure(::System::IntPtr  ptr, ::System::Type*  structureType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"PtrToStructure", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, ptr, structureType);
}
template<typename T>
inline T System::Runtime::InteropServices::Marshal::PtrToStructure(::System::IntPtr  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                    {"PtrToStructure", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IntPtr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, ptr);
}
inline int32_t System::Runtime::InteropServices::Marshal::QueryInterfaceInternal(::System::IntPtr  pUnk, ::by_ref<::System::Guid>  iid, ::by_ref<::System::IntPtr>  ppv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"QueryInterfaceInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pUnk, iid, ppv);
}
inline int32_t System::Runtime::InteropServices::Marshal::QueryInterface(::System::IntPtr  pUnk, ::by_ref<::System::Guid>  iid, ::by_ref<::System::IntPtr>  ppv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"QueryInterface", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pUnk, iid, ppv);
}
inline uint8_t System::Runtime::InteropServices::Marshal::ReadByte(::System::IntPtr  ptr, int32_t  ofs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadByte", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, ptr, ofs);
}
inline int16_t System::Runtime::InteropServices::Marshal::ReadInt16(::System::IntPtr  ptr, int32_t  ofs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt16", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, ptr, ofs);
}
inline int32_t System::Runtime::InteropServices::Marshal::ReadInt32(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt32", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr);
}
inline int32_t System::Runtime::InteropServices::Marshal::ReadInt32(::System::IntPtr  ptr, int32_t  ofs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt32", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, ofs);
}
inline int64_t System::Runtime::InteropServices::Marshal::ReadInt64(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt64", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, ptr);
}
inline int64_t System::Runtime::InteropServices::Marshal::ReadInt64(::System::IntPtr  ptr, int32_t  ofs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadInt64", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, ptr, ofs);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::ReadIntPtr(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadIntPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::ReadIntPtr(::System::IntPtr  ptr, int32_t  ofs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReadIntPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ptr, ofs);
}
inline int32_t System::Runtime::InteropServices::Marshal::ReleaseInternal(::System::IntPtr  pUnk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"ReleaseInternal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pUnk);
}
inline int32_t System::Runtime::InteropServices::Marshal::Release(::System::IntPtr  pUnk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"Release", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pUnk);
}
inline int32_t System::Runtime::InteropServices::Marshal::SizeOf(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"SizeOf", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t);
}
template<typename T>
inline int32_t System::Runtime::InteropServices::Marshal::SizeOf()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                    {"SizeOf", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template<typename T>
inline int32_t System::Runtime::InteropServices::Marshal::SizeOf(T  structure)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                    {"SizeOf", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, structure);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(char16_t*  s, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StringToHGlobalAnsi", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, s, length);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StringToHGlobalAnsi", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, s);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::StringToHGlobalUni(char16_t*  s, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StringToHGlobalUni", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, s, length);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::StringToHGlobalUni(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StringToHGlobalUni", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, s);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::SecureStringGlobalAllocator(int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"SecureStringGlobalAllocator", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, len);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::SecureStringToUnicode(::System::Security::SecureString*  s, ::System::Runtime::InteropServices::Marshal_SecureStringAllocator*  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"SecureStringToUnicode", {}, {::i2c::type_of<::System::Security::SecureString*>(), ::i2c::type_of<::System::Runtime::InteropServices::Marshal_SecureStringAllocator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, s, allocator);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::SecureStringToGlobalAllocUnicode(::System::Security::SecureString*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"SecureStringToGlobalAllocUnicode", {}, {::i2c::type_of<::System::Security::SecureString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, s);
}
inline void System::Runtime::InteropServices::Marshal::StructureToPtr(::System::Object*  structure, ::System::IntPtr  ptr, bool  fDeleteOld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"StructureToPtr", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, structure, ptr, fDeleteOld);
}
template<typename T>
inline void System::Runtime::InteropServices::Marshal::StructureToPtr(T  structure, ::System::IntPtr  ptr, bool  fDeleteOld)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                    {"StructureToPtr", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, structure, ptr, fDeleteOld);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::UnsafeAddrOfPinnedArrayElement(::System::Array*  arr, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"UnsafeAddrOfPinnedArrayElement", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, arr, index);
}
template<typename T>
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::UnsafeAddrOfPinnedArrayElement(::ArrayW<T>  arr, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                    {"UnsafeAddrOfPinnedArrayElement", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, arr, index);
}
inline void System::Runtime::InteropServices::Marshal::WriteByte(::System::IntPtr  ptr, uint8_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteByte", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, val);
}
inline void System::Runtime::InteropServices::Marshal::WriteByte(::System::IntPtr  ptr, int32_t  ofs, uint8_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteByte", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, ofs, val);
}
inline void System::Runtime::InteropServices::Marshal::WriteInt16(::System::IntPtr  ptr, int32_t  ofs, int16_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt16", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, ofs, val);
}
inline void System::Runtime::InteropServices::Marshal::WriteInt32(::System::IntPtr  ptr, int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt32", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, val);
}
inline void System::Runtime::InteropServices::Marshal::WriteInt32(::System::IntPtr  ptr, int32_t  ofs, int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt32", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, ofs, val);
}
inline void System::Runtime::InteropServices::Marshal::WriteInt64(::System::IntPtr  ptr, int64_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt64", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, val);
}
inline void System::Runtime::InteropServices::Marshal::WriteInt64(::System::IntPtr  ptr, int32_t  ofs, int64_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteInt64", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, ofs, val);
}
inline void System::Runtime::InteropServices::Marshal::WriteIntPtr(::System::IntPtr  ptr, ::System::IntPtr  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"WriteIntPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, val);
}
inline ::System::Delegate* System::Runtime::InteropServices::Marshal::GetDelegateForFunctionPointerInternal(::System::IntPtr  ptr, ::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetDelegateForFunctionPointerInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, ptr, t);
}
inline ::System::Delegate* System::Runtime::InteropServices::Marshal::GetDelegateForFunctionPointer(::System::IntPtr  ptr, ::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetDelegateForFunctionPointer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, ptr, t);
}
template<typename TDelegate>
inline TDelegate System::Runtime::InteropServices::Marshal::GetDelegateForFunctionPointer(::System::IntPtr  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                    {"GetDelegateForFunctionPointer", {::i2c::class_of<TDelegate>()}, {::i2c::type_of<::System::IntPtr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TDelegate>()}
                )));
return ::cordl_internals::RunMethodRethrow<TDelegate>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegateInternal(::System::Delegate*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetFunctionPointerForDelegateInternal", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, d);
}
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegate(::System::Delegate*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetFunctionPointerForDelegate", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, d);
}
template<typename TDelegate>
inline ::System::IntPtr System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegate(TDelegate  d)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                    {"GetFunctionPointerForDelegate", {::i2c::class_of<TDelegate>()}, {::i2c::type_of<TDelegate>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TDelegate>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, d);
}
inline ::System::Runtime::InteropServices::ICustomMarshaler* System::Runtime::InteropServices::Marshal::GetCustomMarshalerInstance(::System::Type*  type, ::StringW  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::Marshal*>(),
                        {"GetCustomMarshalerInstance", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::ICustomMarshaler*>(nullptr, ___internal_method, type, cookie);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::Marshal::Marshal()   {
}
