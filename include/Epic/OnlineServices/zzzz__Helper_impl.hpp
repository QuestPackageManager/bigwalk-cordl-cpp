#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Helper.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/zzzz__Helper_def.hpp"
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include "Epic/OnlineServices/zzzz__Helper_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Helper_Allocation.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Helper_Allocation::*)()>(&::Epic::OnlineServices::Helper_Allocation::get_Size)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_Allocation.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_Allocation::*)(int32_t)>(&::Epic::OnlineServices::Helper_Allocation::set_Size)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"set_Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_Allocation.get_Cache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::Helper_Allocation::*)()>(&::Epic::OnlineServices::Helper_Allocation::get_Cache)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"get_Cache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_Allocation.set_Cache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_Allocation::*)(::System::Object*)>(&::Epic::OnlineServices::Helper_Allocation::set_Cache)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"set_Cache", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_Allocation.get_IsArrayItemAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Epic::OnlineServices::Helper_Allocation::*)()>(&::Epic::OnlineServices::Helper_Allocation::get_IsArrayItemAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"get_IsArrayItemAllocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_Allocation.set_IsArrayItemAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_Allocation::*)(::System::Nullable_1<bool>)>(&::Epic::OnlineServices::Helper_Allocation::set_IsArrayItemAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"set_IsArrayItemAllocated", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_Allocation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_Allocation::*)(int32_t, ::System::Object*, ::System::Nullable_1<bool>)>(&::Epic::OnlineServices::Helper_Allocation::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804be160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Epic::OnlineServices::Helper_Allocation::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Helper_Allocation::set_Size(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"set_Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::Helper_Allocation::get_Cache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"get_Cache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Helper_Allocation::set_Cache(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"set_Cache", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Epic::OnlineServices::Helper_Allocation::get_IsArrayItemAllocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"get_IsArrayItemAllocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Helper_Allocation::set_IsArrayItemAllocated(::System::Nullable_1<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {"set_IsArrayItemAllocated", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::Helper_Allocation::_ctor(int32_t  size, ::System::Object*  cache, ::System::Nullable_1<bool>  isArrayItemAllocated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_Allocation>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, cache, isArrayItemAllocated);
}
// Ctor Parameters [CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Cache_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsArrayItemAllocated_k__BackingField", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Helper_Allocation::Helper_Allocation(int32_t  _Size_k__BackingField, ::System::Object*  _Cache_k__BackingField, ::System::Nullable_1<bool>  _IsArrayItemAllocated_k__BackingField) noexcept  {
this->_Size_k__BackingField = _Size_k__BackingField;
this->_Cache_k__BackingField = _Cache_k__BackingField;
this->_IsArrayItemAllocated_k__BackingField = _IsArrayItemAllocated_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Helper_Allocation::Helper_Allocation()   {
}
//  Writing Method size for method: ::Epic::OnlineServices::Helper_PinnedBuffer.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::GCHandle (::Epic::OnlineServices::Helper_PinnedBuffer::*)()>(&::Epic::OnlineServices::Helper_PinnedBuffer::get_Handle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_PinnedBuffer.set_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_PinnedBuffer::*)(::System::Runtime::InteropServices::GCHandle)>(&::Epic::OnlineServices::Helper_PinnedBuffer::set_Handle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {"set_Handle", {}, {::i2c::type_of<::System::Runtime::InteropServices::GCHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_PinnedBuffer.get_RefCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Helper_PinnedBuffer::*)()>(&::Epic::OnlineServices::Helper_PinnedBuffer::get_RefCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {"get_RefCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_PinnedBuffer.set_RefCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_PinnedBuffer::*)(int32_t)>(&::Epic::OnlineServices::Helper_PinnedBuffer::set_RefCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {"set_RefCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_PinnedBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_PinnedBuffer::*)(::System::Runtime::InteropServices::GCHandle)>(&::Epic::OnlineServices::Helper_PinnedBuffer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804df860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::InteropServices::GCHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Runtime::InteropServices::GCHandle Epic::OnlineServices::Helper_PinnedBuffer::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Helper_PinnedBuffer::set_Handle(::System::Runtime::InteropServices::GCHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {"set_Handle", {}, {::i2c::type_of<::System::Runtime::InteropServices::GCHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Epic::OnlineServices::Helper_PinnedBuffer::get_RefCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {"get_RefCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Helper_PinnedBuffer::set_RefCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {"set_RefCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::Helper_PinnedBuffer::_ctor(::System::Runtime::InteropServices::GCHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_PinnedBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::InteropServices::GCHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RefCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Helper_PinnedBuffer::Helper_PinnedBuffer(::System::Runtime::InteropServices::GCHandle  _Handle_k__BackingField, int32_t  _RefCount_k__BackingField) noexcept  {
this->_Handle_k__BackingField = _Handle_k__BackingField;
this->_RefCount_k__BackingField = _RefCount_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Helper_PinnedBuffer::Helper_PinnedBuffer()   {
}
//  Writing Method size for method: ::Epic::OnlineServices::DelegateHolder_Helper___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::DelegateHolder_Helper___c::*)()>(&::Epic::OnlineServices::DelegateHolder_Helper___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::DelegateHolder_Helper___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::DelegateHolder_Helper___c.__ctor_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::DelegateHolder_Helper___c::*)(::System::Delegate*)>(&::Epic::OnlineServices::DelegateHolder_Helper___c::__ctor_b__8_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::DelegateHolder_Helper___c*>(),
                        {"<.ctor>b__8_0", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::DelegateHolder_Helper___c::setStaticF___9(::Epic::OnlineServices::DelegateHolder_Helper___c*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::DelegateHolder_Helper___c*, "<>9", ::Epic::OnlineServices::DelegateHolder_Helper___c*>(std::forward<::Epic::OnlineServices::DelegateHolder_Helper___c*>(value));
}
inline ::Epic::OnlineServices::DelegateHolder_Helper___c* Epic::OnlineServices::DelegateHolder_Helper___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::DelegateHolder_Helper___c*, "<>9", ::Epic::OnlineServices::DelegateHolder_Helper___c*>();
}
inline void Epic::OnlineServices::DelegateHolder_Helper___c::setStaticF___9__8_0(::System::Func_2<::System::Delegate*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__8_0", ::Epic::OnlineServices::DelegateHolder_Helper___c*>(std::forward<::System::Func_2<::System::Delegate*,bool>*>(value));
}
inline ::System::Func_2<::System::Delegate*,bool>* Epic::OnlineServices::DelegateHolder_Helper___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__8_0", ::Epic::OnlineServices::DelegateHolder_Helper___c*>();
}
inline void Epic::OnlineServices::DelegateHolder_Helper___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::DelegateHolder_Helper___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Epic::OnlineServices::DelegateHolder_Helper___c::__ctor_b__8_0(::System::Delegate*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::DelegateHolder_Helper___c*>(),
                        {"<.ctor>b__8_0", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
inline ::Epic::OnlineServices::DelegateHolder_Helper___c* Epic::OnlineServices::DelegateHolder_Helper___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::DelegateHolder_Helper___c*>());
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::DelegateHolder_Helper___c::DelegateHolder_Helper___c()   {
}
//  Writing Method size for method: ::Epic::OnlineServices::Helper_DelegateHolder.get_Delegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Delegate*>* (::Epic::OnlineServices::Helper_DelegateHolder::*)()>(&::Epic::OnlineServices::Helper_DelegateHolder::get_Delegates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {"get_Delegates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_DelegateHolder.set_Delegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_DelegateHolder::*)(::System::Collections::Generic::List_1<::System::Delegate*>*)>(&::Epic::OnlineServices::Helper_DelegateHolder::set_Delegates)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {"set_Delegates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Delegate*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_DelegateHolder.get_NotificationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint64_t> (::Epic::OnlineServices::Helper_DelegateHolder::*)()>(&::Epic::OnlineServices::Helper_DelegateHolder::get_NotificationId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {"get_NotificationId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_DelegateHolder.set_NotificationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_DelegateHolder::*)(::System::Nullable_1<uint64_t>)>(&::Epic::OnlineServices::Helper_DelegateHolder::set_NotificationId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {"set_NotificationId", {}, {::i2c::type_of<::System::Nullable_1<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper_DelegateHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper_DelegateHolder::*)(::ArrayW<::System::Delegate*>)>(&::Epic::OnlineServices::Helper_DelegateHolder::_ctor)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x1804d7f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Delegate*>*& Epic::OnlineServices::Helper_DelegateHolder::__cordl_internal_get__Delegates_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Delegates_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::System::Delegate*>* const& Epic::OnlineServices::Helper_DelegateHolder::__cordl_internal_get__Delegates_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Delegates_k__BackingField;
}
constexpr void Epic::OnlineServices::Helper_DelegateHolder::__cordl_internal_set__Delegates_k__BackingField(::System::Collections::Generic::List_1<::System::Delegate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Delegates_k__BackingField = value;
}
constexpr ::System::Nullable_1<uint64_t>& Epic::OnlineServices::Helper_DelegateHolder::__cordl_internal_get__NotificationId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NotificationId_k__BackingField;
}
constexpr ::System::Nullable_1<uint64_t> const& Epic::OnlineServices::Helper_DelegateHolder::__cordl_internal_get__NotificationId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NotificationId_k__BackingField;
}
constexpr void Epic::OnlineServices::Helper_DelegateHolder::__cordl_internal_set__NotificationId_k__BackingField(::System::Nullable_1<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NotificationId_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::System::Delegate*>* Epic::OnlineServices::Helper_DelegateHolder::get_Delegates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {"get_Delegates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Delegate*>*>(this, ___internal_method);
}
inline void Epic::OnlineServices::Helper_DelegateHolder::set_Delegates(::System::Collections::Generic::List_1<::System::Delegate*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {"set_Delegates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Delegate*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<uint64_t> Epic::OnlineServices::Helper_DelegateHolder::get_NotificationId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {"get_NotificationId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint64_t>>(this, ___internal_method);
}
inline void Epic::OnlineServices::Helper_DelegateHolder::set_NotificationId(::System::Nullable_1<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {"set_NotificationId", {}, {::i2c::type_of<::System::Nullable_1<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Epic::OnlineServices::Helper_DelegateHolder::_ctor(::ArrayW<::System::Delegate*>  delegates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper_DelegateHolder*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delegates);
}
inline ::Epic::OnlineServices::Helper_DelegateHolder* Epic::OnlineServices::Helper_DelegateHolder::New_ctor(::ArrayW<::System::Delegate*>  delegates)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Helper_DelegateHolder*>(delegates));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Helper_DelegateHolder::Helper_DelegateHolder()   {
}
//  Writing Method size for method: ::Epic::OnlineServices::Helper___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper___c::*)()>(&::Epic::OnlineServices::Helper___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper___c._AddCallback_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Helper___c::*)(::System::Delegate*)>(&::Epic::OnlineServices::Helper___c::_AddCallback_b__1_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c*>(),
                        {"<AddCallback>b__1_0", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper___c._GetAllocationCount_b__62_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Helper___c::*)(int32_t, ::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>)>(&::Epic::OnlineServices::Helper___c::_GetAllocationCount_b__62_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e27d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c*>(),
                        {"<GetAllocationCount>b__62_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Helper___c::setStaticF___9(::Epic::OnlineServices::Helper___c*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Helper___c*, "<>9", ::Epic::OnlineServices::Helper___c*>(std::forward<::Epic::OnlineServices::Helper___c*>(value));
}
inline ::Epic::OnlineServices::Helper___c* Epic::OnlineServices::Helper___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Helper___c*, "<>9", ::Epic::OnlineServices::Helper___c*>();
}
inline void Epic::OnlineServices::Helper___c::setStaticF___9__1_0(::System::Func_2<::System::Delegate*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__1_0", ::Epic::OnlineServices::Helper___c*>(std::forward<::System::Func_2<::System::Delegate*,bool>*>(value));
}
inline ::System::Func_2<::System::Delegate*,bool>* Epic::OnlineServices::Helper___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__1_0", ::Epic::OnlineServices::Helper___c*>();
}
inline void Epic::OnlineServices::Helper___c::setStaticF___9__62_0(::System::Func_3<int32_t,::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<int32_t,::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>,int32_t>*, "<>9__62_0", ::Epic::OnlineServices::Helper___c*>(std::forward<::System::Func_3<int32_t,::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>,int32_t>*>(value));
}
inline ::System::Func_3<int32_t,::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>,int32_t>* Epic::OnlineServices::Helper___c::getStaticF___9__62_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<int32_t,::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>,int32_t>*, "<>9__62_0", ::Epic::OnlineServices::Helper___c*>();
}
inline void Epic::OnlineServices::Helper___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Epic::OnlineServices::Helper___c::_AddCallback_b__1_0(::System::Delegate*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c*>(),
                        {"<AddCallback>b__1_0", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
inline int32_t Epic::OnlineServices::Helper___c::_GetAllocationCount_b__62_0(int32_t  acc, ::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c*>(),
                        {"<GetAllocationCount>b__62_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, acc, x);
}
inline ::Epic::OnlineServices::Helper___c* Epic::OnlineServices::Helper___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Helper___c*>());
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Helper___c::Helper___c()   {
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::setStaticF___9(::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*, "<>9", ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(std::forward<::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(value));
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*, "<>9", ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>();
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::setStaticF___9__3_0(::System::Func_2<::System::Delegate*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__3_0", ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(std::forward<::System::Func_2<::System::Delegate*,bool>*>(value));
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::System::Func_2<::System::Delegate*,bool>* Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__3_0", ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>();
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline bool Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::_TryGetCallback_b__3_0(::System::Delegate*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(),
                        {"<TryGetCallback>b__3_0", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>());
}
// Ctor Parameters []
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
constexpr ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::Helper___c__3_3()   {
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::setStaticF___9(::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*, "<>9", ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(std::forward<::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(value));
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*, "<>9", ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>();
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::setStaticF___9__4_0(::System::Func_2<::System::Delegate*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__4_0", ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(std::forward<::System::Func_2<::System::Delegate*,bool>*>(value));
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::System::Func_2<::System::Delegate*,bool>* Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__4_0", ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>();
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline bool Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::_TryGetAndRemoveCallback_b__4_0(::System::Delegate*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(),
                        {"<TryGetAndRemoveCallback>b__4_0", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>());
}
// Ctor Parameters []
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
constexpr ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::Helper___c__4_3()   {
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::setStaticF___9(::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*, "<>9", ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(std::forward<::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(value));
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*, "<>9", ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>();
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::setStaticF___9__5_0(::System::Func_2<::System::Delegate*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__5_0", ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(std::forward<::System::Func_2<::System::Delegate*,bool>*>(value));
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::System::Func_2<::System::Delegate*,bool>* Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::getStaticF___9__5_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__5_0", ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>();
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline void Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline bool Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::_TryGetStructCallback_b__5_0(::System::Delegate*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>(),
                        {"<TryGetStructCallback>b__5_0", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*>());
}
// Ctor Parameters []
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
constexpr ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>::Helper___c__5_3()   {
}
template<typename TCallback>
inline void Epic::OnlineServices::Helper___c__8_1<TCallback>::setStaticF___9(::Epic::OnlineServices::Helper___c__8_1<TCallback>*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Helper___c__8_1<TCallback>*, "<>9", ::Epic::OnlineServices::Helper___c__8_1<TCallback>*>(std::forward<::Epic::OnlineServices::Helper___c__8_1<TCallback>*>(value));
}
template<typename TCallback>
inline ::Epic::OnlineServices::Helper___c__8_1<TCallback>* Epic::OnlineServices::Helper___c__8_1<TCallback>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Helper___c__8_1<TCallback>*, "<>9", ::Epic::OnlineServices::Helper___c__8_1<TCallback>*>();
}
template<typename TCallback>
inline void Epic::OnlineServices::Helper___c__8_1<TCallback>::setStaticF___9__8_0(::System::Func_2<::System::Delegate*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__8_0", ::Epic::OnlineServices::Helper___c__8_1<TCallback>*>(std::forward<::System::Func_2<::System::Delegate*,bool>*>(value));
}
template<typename TCallback>
inline ::System::Func_2<::System::Delegate*,bool>* Epic::OnlineServices::Helper___c__8_1<TCallback>::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Delegate*,bool>*, "<>9__8_0", ::Epic::OnlineServices::Helper___c__8_1<TCallback>*>();
}
template<typename TCallback>
inline void Epic::OnlineServices::Helper___c__8_1<TCallback>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__8_1<TCallback>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TCallback>
inline bool Epic::OnlineServices::Helper___c__8_1<TCallback>::_TryGetStaticCallback_b__8_0(::System::Delegate*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__8_1<TCallback>*>(),
                        {"<TryGetStaticCallback>b__8_0", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
template<typename TCallback>
inline ::Epic::OnlineServices::Helper___c__8_1<TCallback>* Epic::OnlineServices::Helper___c__8_1<TCallback>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Helper___c__8_1<TCallback>*>());
}
// Ctor Parameters []
template<typename TCallback>
constexpr ::Epic::OnlineServices::Helper___c__8_1<TCallback>::Helper___c__8_1()   {
}
//  Writing Method size for method: ::Epic::OnlineServices::Helper___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper___c__DisplayClass6_0::*)()>(&::Epic::OnlineServices::Helper___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper___c__DisplayClass6_0._RemoveCallbackByNotificationId_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Helper___c__DisplayClass6_0::*)(::System::Collections::Generic::KeyValuePair_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>)>(&::Epic::OnlineServices::Helper___c__DisplayClass6_0::_RemoveCallbackByNotificationId_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804e27e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__DisplayClass6_0*>(),
                        {"<RemoveCallbackByNotificationId>b__0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& Epic::OnlineServices::Helper___c__DisplayClass6_0::__cordl_internal_get_notificationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notificationId;
}
constexpr uint64_t const& Epic::OnlineServices::Helper___c__DisplayClass6_0::__cordl_internal_get_notificationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notificationId;
}
constexpr void Epic::OnlineServices::Helper___c__DisplayClass6_0::__cordl_internal_set_notificationId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notificationId = value;
}
inline void Epic::OnlineServices::Helper___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Epic::OnlineServices::Helper___c__DisplayClass6_0::_RemoveCallbackByNotificationId_b__0(::System::Collections::Generic::KeyValuePair_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>  pair)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper___c__DisplayClass6_0*>(),
                        {"<RemoveCallbackByNotificationId>b__0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pair);
}
inline ::Epic::OnlineServices::Helper___c__DisplayClass6_0* Epic::OnlineServices::Helper___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Helper___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Helper___c__DisplayClass6_0::Helper___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>, ::System::Object*, ::ArrayW<::System::Delegate*>)>(&::Epic::OnlineServices::Helper::AddCallback)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1804d9490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddCallback", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::System::Delegate*>)>(&::Epic::OnlineServices::Helper::AddCallback)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1804d95e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.RemoveCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Epic::OnlineServices::Helper::RemoveCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804daf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.RemoveCallbackByNotificationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::Epic::OnlineServices::Helper::RemoveCallbackByNotificationId)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1804dadc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemoveCallbackByNotificationId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddStaticCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Delegate*>)>(&::Epic::OnlineServices::Helper::AddStaticCallback)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804d9ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddStaticCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AssignNotificationIdToCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint64_t)>(&::Epic::OnlineServices::Helper::AssignNotificationIdToCallback)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804d9e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AssignNotificationIdToCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Object*)>(&::Epic::OnlineServices::Helper::AddClientData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1804d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.RemoveClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Epic::OnlineServices::Helper::RemoveClientData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804db050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemoveClientData", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr)>(&::Epic::OnlineServices::Helper::GetClientData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804da6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetClientData", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Epic::OnlineServices::Handle*, ::by_ref<::System::IntPtr>)>(&::Epic::OnlineServices::Helper::Convert)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804d9fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Helper::Convert)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804da280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::ArrayW<uint8_t>>, int32_t)>(&::Epic::OnlineServices::Helper::Convert)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804d9fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<bool>)>(&::Epic::OnlineServices::Helper::Convert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804da150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<int32_t>)>(&::Epic::OnlineServices::Helper::Convert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804da070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Nullable_1<::System::DateTimeOffset>, ::by_ref<int64_t>)>(&::Epic::OnlineServices::Helper::Convert)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804da080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<::System::Nullable_1<::System::DateTimeOffset>>)>(&::Epic::OnlineServices::Helper::Convert)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804da160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::System::DateTimeOffset>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804da820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<bool>)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804da150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::System::Nullable_1<bool>>)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804da7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Nullable_1<bool>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<int32_t>)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804da070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<::System::Nullable_1<::System::DateTimeOffset>>)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804da160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::System::DateTimeOffset>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::System::ArraySegment_1<uint8_t>>, uint32_t)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804da860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>, int32_t, bool)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804da840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>, uint32_t, bool)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804da840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::ArrayW<::System::IntPtr>>, uint32_t)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804da930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::System::IntPtr>>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804da280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::System::Object*>)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804da900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Helper::Get)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804da510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.GetAllocationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Epic::OnlineServices::Helper::GetAllocationCount)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804da3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetAllocationCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::IntPtr)>(&::Epic::OnlineServices::Helper::Copy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804da330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>, ::System::IntPtr)>(&::Epic::OnlineServices::Helper::Copy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804da360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Copy", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Epic::OnlineServices::Helper::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804be470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IDisposable*>)>(&::Epic::OnlineServices::Helper::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804da390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::System::IDisposable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.GetAnsiStringLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::Epic::OnlineServices::Helper::GetAnsiStringLength)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804da680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetAnsiStringLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.GetAnsiStringLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Epic::OnlineServices::Helper::GetAnsiStringLength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804da640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetAnsiStringLength", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.GetAllocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Helper::GetAllocation)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804da510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetAllocation", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddAllocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::Epic::OnlineServices::Helper::AddAllocation)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804d92e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddAllocation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddAllocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(uint32_t)>(&::Epic::OnlineServices::Helper::AddAllocation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804d92d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddAllocation", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.RemoveAllocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Epic::OnlineServices::Helper::RemoveAllocation)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1804da950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemoveAllocation", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.TryGetAllocationCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::System::Object*>)>(&::Epic::OnlineServices::Helper::TryGetAllocationCache)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1804db880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"TryGetAllocationCache", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddPinnedBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<uint8_t>, int32_t)>(&::Epic::OnlineServices::Helper::AddPinnedBuffer)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1804d99a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddPinnedBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddPinnedBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Helper::AddPinnedBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804d9c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddPinnedBuffer", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddPinnedBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::ArraySegment_1<uint8_t>)>(&::Epic::OnlineServices::Helper::AddPinnedBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804d9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddPinnedBuffer", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.AddPinnedBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<uint8_t>)>(&::Epic::OnlineServices::Helper::AddPinnedBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804d9c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddPinnedBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.RemovePinnedBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Epic::OnlineServices::Helper::RemovePinnedBuffer)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804db150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemovePinnedBuffer", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Nullable_1<bool>, ::by_ref<int32_t>)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804db850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<::System::IntPtr>)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804db730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Epic::OnlineServices::Utf8String*, ::by_ref<::System::IntPtr>)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804db7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Epic::OnlineServices::Handle*, ::by_ref<::System::IntPtr>)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804d9fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>, ::by_ref<::System::IntPtr>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804db670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Nullable_1<::System::DateTimeOffset>, ::by_ref<int64_t>)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<int32_t>)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804da070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Epic::OnlineServices::Utf8String*, ::by_ref<::ArrayW<uint8_t>>, int32_t)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804db580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Epic::OnlineServices::Utf8String*>, ::by_ref<::System::IntPtr>, ::by_ref<int32_t>, bool)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804db420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Epic::OnlineServices::Utf8String*>, ::by_ref<::System::IntPtr>, ::by_ref<uint32_t>, bool)>(&::Epic::OnlineServices::Helper::Set)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804db390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Helper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Helper::*)()>(&::Epic::OnlineServices::Helper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Helper::setStaticF_s_Allocations(::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_Allocation>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_Allocation>*, "s_Allocations", ::Epic::OnlineServices::Helper*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_Allocation>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_Allocation>* Epic::OnlineServices::Helper::getStaticF_s_Allocations()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_Allocation>*, "s_Allocations", ::Epic::OnlineServices::Helper*>();
}
inline void Epic::OnlineServices::Helper::setStaticF_s_PinnedBuffers(::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>*, "s_PinnedBuffers", ::Epic::OnlineServices::Helper*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>* Epic::OnlineServices::Helper::getStaticF_s_PinnedBuffers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>*, "s_PinnedBuffers", ::Epic::OnlineServices::Helper*>();
}
inline void Epic::OnlineServices::Helper::setStaticF_s_Callbacks(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>*, "s_Callbacks", ::Epic::OnlineServices::Helper*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>* Epic::OnlineServices::Helper::getStaticF_s_Callbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>*, "s_Callbacks", ::Epic::OnlineServices::Helper*>();
}
inline void Epic::OnlineServices::Helper::setStaticF_s_StaticCallbacks(::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Helper_DelegateHolder*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Helper_DelegateHolder*>*, "s_StaticCallbacks", ::Epic::OnlineServices::Helper*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Helper_DelegateHolder*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Helper_DelegateHolder*>* Epic::OnlineServices::Helper::getStaticF_s_StaticCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Helper_DelegateHolder*>*, "s_StaticCallbacks", ::Epic::OnlineServices::Helper*>();
}
inline void Epic::OnlineServices::Helper::setStaticF_s_LastClientDataId(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "s_LastClientDataId", ::Epic::OnlineServices::Helper*>(std::forward<int64_t>(value));
}
inline int64_t Epic::OnlineServices::Helper::getStaticF_s_LastClientDataId()  {
return ::cordl_internals::getStaticField<int64_t, "s_LastClientDataId", ::Epic::OnlineServices::Helper*>();
}
inline void Epic::OnlineServices::Helper::setStaticF_s_ClientDatas(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*, "s_ClientDatas", ::Epic::OnlineServices::Helper*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>* Epic::OnlineServices::Helper::getStaticF_s_ClientDatas()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*, "s_ClientDatas", ::Epic::OnlineServices::Helper*>();
}
inline void Epic::OnlineServices::Helper::AddCallback(::by_ref<::System::IntPtr>  clientDataPointer, ::System::Object*  clientData, ::ArrayW<::System::Delegate*>  delegates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddCallback", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clientDataPointer, clientData, delegates);
}
inline void Epic::OnlineServices::Helper::AddCallback(::System::IntPtr  clientDataPointer, ::ArrayW<::System::Delegate*>  delegates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clientDataPointer, delegates);
}
inline void Epic::OnlineServices::Helper::RemoveCallback(::System::IntPtr  clientDataPointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clientDataPointer);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline bool Epic::OnlineServices::Helper::TryGetCallback(::by_ref<TCallbackInfoInternal>  callbackInfoInternal, ::by_ref<TCallback>  callback, ::by_ref<TCallbackInfo>  callbackInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"TryGetCallback", {::i2c::class_of<TCallbackInfoInternal>(), ::i2c::class_of<TCallback>(), ::i2c::class_of<TCallbackInfo>()}, {::i2c::type_of<::by_ref<TCallbackInfoInternal>>(), ::i2c::type_of<::by_ref<TCallback>>(), ::i2c::type_of<::by_ref<TCallbackInfo>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TCallbackInfoInternal>(), ::i2c::class_of<TCallback>(), ::i2c::class_of<TCallbackInfo>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callbackInfoInternal, callback, callbackInfo);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline bool Epic::OnlineServices::Helper::TryGetAndRemoveCallback(::by_ref<TCallbackInfoInternal>  callbackInfoInternal, ::by_ref<TCallback>  callback, ::by_ref<TCallbackInfo>  callbackInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"TryGetAndRemoveCallback", {::i2c::class_of<TCallbackInfoInternal>(), ::i2c::class_of<TCallback>(), ::i2c::class_of<TCallbackInfo>()}, {::i2c::type_of<::by_ref<TCallbackInfoInternal>>(), ::i2c::type_of<::by_ref<TCallback>>(), ::i2c::type_of<::by_ref<TCallbackInfo>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TCallbackInfoInternal>(), ::i2c::class_of<TCallback>(), ::i2c::class_of<TCallbackInfo>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callbackInfoInternal, callback, callbackInfo);
}
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
inline bool Epic::OnlineServices::Helper::TryGetStructCallback(::by_ref<TCallbackInfoInternal>  callbackInfoInternal, ::by_ref<TCallback>  callback, ::by_ref<TCallbackInfo>  callbackInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"TryGetStructCallback", {::i2c::class_of<TCallbackInfoInternal>(), ::i2c::class_of<TCallback>(), ::i2c::class_of<TCallbackInfo>()}, {::i2c::type_of<::by_ref<TCallbackInfoInternal>>(), ::i2c::type_of<::by_ref<TCallback>>(), ::i2c::type_of<::by_ref<TCallbackInfo>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TCallbackInfoInternal>(), ::i2c::class_of<TCallback>(), ::i2c::class_of<TCallbackInfo>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callbackInfoInternal, callback, callbackInfo);
}
inline void Epic::OnlineServices::Helper::RemoveCallbackByNotificationId(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemoveCallbackByNotificationId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::Helper::AddStaticCallback(::StringW  key, ::ArrayW<::System::Delegate*>  delegates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddStaticCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, delegates);
}
template<typename TCallback>
inline bool Epic::OnlineServices::Helper::TryGetStaticCallback(::StringW  key, ::by_ref<TCallback>  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"TryGetStaticCallback", {::i2c::class_of<TCallback>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<TCallback>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TCallback>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, callback);
}
inline void Epic::OnlineServices::Helper::AssignNotificationIdToCallback(::System::IntPtr  clientDataPointer, uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AssignNotificationIdToCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clientDataPointer, notificationId);
}
inline ::System::IntPtr Epic::OnlineServices::Helper::AddClientData(::System::Object*  clientData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clientData);
}
inline void Epic::OnlineServices::Helper::RemoveClientData(::System::IntPtr  clientDataPointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemoveClientData", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clientDataPointer);
}
inline ::System::Object* Epic::OnlineServices::Helper::GetClientData(::System::IntPtr  clientDataPointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetClientData", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, clientDataPointer);
}
template<typename THandle>
inline void Epic::OnlineServices::Helper::Convert(::System::IntPtr  from, ::by_ref<THandle>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Convert", {::i2c::class_of<THandle>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<THandle>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<THandle>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Convert(::Epic::OnlineServices::Handle*  from, ::by_ref<::System::IntPtr>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Convert(::ArrayW<uint8_t>  from, ::by_ref<::Epic::OnlineServices::Utf8String*>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Convert(::StringW  from, ::by_ref<::ArrayW<uint8_t>>  to, int32_t  fromLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, fromLength);
}
template<typename TArray>
inline void Epic::OnlineServices::Helper::Convert(::ArrayW<TArray>  from, ::by_ref<int32_t>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Convert", {::i2c::class_of<TArray>()}, {::i2c::type_of<::ArrayW<TArray>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArray>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TArray>
inline void Epic::OnlineServices::Helper::Convert(::ArrayW<TArray>  from, ::by_ref<uint32_t>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Convert", {::i2c::class_of<TArray>()}, {::i2c::type_of<::ArrayW<TArray>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArray>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TArray>
inline void Epic::OnlineServices::Helper::Convert(::System::ArraySegment_1<TArray>  from, ::by_ref<int32_t>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Convert", {::i2c::class_of<TArray>()}, {::i2c::type_of<::System::ArraySegment_1<TArray>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArray>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Convert(::System::ArraySegment_1<T>  from, ::by_ref<uint32_t>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Convert", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ArraySegment_1<T>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Convert(int32_t  from, ::by_ref<bool>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Convert(bool  from, ::by_ref<int32_t>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Convert(::System::Nullable_1<::System::DateTimeOffset>  from, ::by_ref<int64_t>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Convert(int64_t  from, ::by_ref<::System::Nullable_1<::System::DateTimeOffset>>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Convert", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::System::DateTimeOffset>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TArray>
inline void Epic::OnlineServices::Helper::Get(::ArrayW<TArray>  from, ::by_ref<int32_t>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TArray>()}, {::i2c::type_of<::ArrayW<TArray>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArray>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TArray>
inline void Epic::OnlineServices::Helper::Get(::ArrayW<TArray>  from, ::by_ref<uint32_t>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TArray>()}, {::i2c::type_of<::ArrayW<TArray>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArray>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(::System::ArraySegment_1<uint8_t>  from, ::by_ref<uint32_t>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TInternal,typename TPublic>
inline void Epic::OnlineServices::Helper::Get(::by_ref<TInternal>  from, ::by_ref<TPublic>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}, {::i2c::type_of<::by_ref<TInternal>>(), ::i2c::type_of<::by_ref<TPublic>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TInternal,typename TPublic>
inline void Epic::OnlineServices::Helper::Get(::by_ref<TInternal>  from, ::by_ref<::System::Nullable_1<TPublic>>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}, {::i2c::type_of<::by_ref<TInternal>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<TPublic>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Get(T  from, ::by_ref<::System::Nullable_1<T>>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::System::Nullable_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(int32_t  from, ::by_ref<bool>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(int32_t  from, ::by_ref<::System::Nullable_1<bool>>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Nullable_1<bool>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(bool  from, ::by_ref<int32_t>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(int64_t  from, ::by_ref<::System::Nullable_1<::System::DateTimeOffset>>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::System::DateTimeOffset>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::System::ArraySegment_1<uint8_t>>  to, uint32_t  arrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength);
}
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>  to, int32_t  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>  to, uint32_t  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::ArrayW<T>>  to, uint32_t  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::ArrayW<T>>  to, int32_t  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
template<typename THandle>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<THandle>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<THandle>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<THandle>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<THandle>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename THandle>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::ArrayW<THandle>>  to, uint32_t  arrayLength)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<THandle>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<THandle>>>(), ::i2c::type_of<uint32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<THandle>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength);
}
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::ArrayW<::System::IntPtr>>  to, uint32_t  arrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::System::IntPtr>>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength);
}
template<typename TInternal,typename TPublic>
inline void Epic::OnlineServices::Helper::Get(::ArrayW<TInternal>  from, ::by_ref<::ArrayW<TPublic>>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}, {::i2c::type_of<::ArrayW<TInternal>>(), ::i2c::type_of<::by_ref<::ArrayW<TPublic>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TInternal,typename TPublic>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::ArrayW<TPublic>>  to, int32_t  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<TPublic>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
template<typename TInternal,typename TPublic>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::ArrayW<TPublic>>  to, uint32_t  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<TPublic>>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::System::Nullable_1<T>>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Nullable_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(::ArrayW<uint8_t>  from, ::by_ref<::Epic::OnlineServices::Utf8String*>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::System::Object*>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::Epic::OnlineServices::Utf8String*>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TInternal,typename TPublic>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<TPublic>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<TPublic>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TInternal,typename TPublic>
inline void Epic::OnlineServices::Helper::Get(::System::IntPtr  from, ::by_ref<::System::Nullable_1<TPublic>>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Nullable_1<TPublic>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TInternal,typename TPublic>
inline void Epic::OnlineServices::Helper::Get(::by_ref<TInternal>  from, ::by_ref<TPublic>  to, ::by_ref<::System::IntPtr>  clientDataPointer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Get", {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}, {::i2c::type_of<::by_ref<TInternal>>(), ::i2c::type_of<::by_ref<TPublic>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInternal>(), ::i2c::class_of<TPublic>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, clientDataPointer);
}
inline int32_t Epic::OnlineServices::Helper::GetAllocationCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetAllocationCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Helper::Copy(::ArrayW<uint8_t>  from, ::System::IntPtr  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Copy(::System::ArraySegment_1<uint8_t>  from, ::System::IntPtr  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Copy", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Dispose(::by_ref<::System::IntPtr>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Epic::OnlineServices::Helper::Dispose(::by_ref<::System::IDisposable*>  disposable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::System::IDisposable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, disposable);
}
template<typename TDisposable>
inline void Epic::OnlineServices::Helper::Dispose(::by_ref<TDisposable>  disposable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Dispose", {::i2c::class_of<TDisposable>()}, {::i2c::type_of<::by_ref<TDisposable>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TDisposable>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, disposable);
}
inline int32_t Epic::OnlineServices::Helper::GetAnsiStringLength(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetAnsiStringLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes);
}
inline int32_t Epic::OnlineServices::Helper::GetAnsiStringLength(::System::IntPtr  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetAnsiStringLength", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pointer);
}
template<typename T>
inline void Epic::OnlineServices::Helper::GetAllocation(::System::IntPtr  source, ::by_ref<T>  target)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"GetAllocation", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target);
}
template<typename T>
inline void Epic::OnlineServices::Helper::GetAllocation(::System::IntPtr  source, ::by_ref<::System::Nullable_1<T>>  target)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"GetAllocation", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Nullable_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target);
}
template<typename THandle>
inline void Epic::OnlineServices::Helper::GetAllocation(::System::IntPtr  source, ::by_ref<::ArrayW<THandle>>  target, int32_t  arrayLength)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"GetAllocation", {::i2c::class_of<THandle>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<THandle>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<THandle>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target, arrayLength);
}
template<typename T>
inline void Epic::OnlineServices::Helper::GetAllocation(::System::IntPtr  from, ::by_ref<::ArrayW<T>>  to, int32_t  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"GetAllocation", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
inline void Epic::OnlineServices::Helper::GetAllocation(::System::IntPtr  source, ::by_ref<::Epic::OnlineServices::Utf8String*>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"GetAllocation", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target);
}
inline ::System::IntPtr Epic::OnlineServices::Helper::AddAllocation(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddAllocation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr Epic::OnlineServices::Helper::AddAllocation(uint32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddAllocation", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
template<typename T>
inline ::System::IntPtr Epic::OnlineServices::Helper::AddAllocation(int32_t  size, T  cache)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"AddAllocation", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size, cache);
}
template<typename T>
inline ::System::IntPtr Epic::OnlineServices::Helper::AddAllocation(int32_t  size, ::ArrayW<T>  cache, ::System::Nullable_1<bool>  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"AddAllocation", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size, cache, isArrayItemAllocated);
}
template<typename T>
inline ::System::IntPtr Epic::OnlineServices::Helper::AddAllocation(::ArrayW<T>  array, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"AddAllocation", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, isArrayItemAllocated);
}
inline void Epic::OnlineServices::Helper::RemoveAllocation(::by_ref<::System::IntPtr>  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemoveAllocation", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer);
}
inline bool Epic::OnlineServices::Helper::TryGetAllocationCache(::System::IntPtr  pointer, ::by_ref<::System::Object*>  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"TryGetAllocationCache", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointer, cache);
}
inline ::System::IntPtr Epic::OnlineServices::Helper::AddPinnedBuffer(::ArrayW<uint8_t>  buffer, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddPinnedBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, buffer, offset);
}
inline ::System::IntPtr Epic::OnlineServices::Helper::AddPinnedBuffer(::Epic::OnlineServices::Utf8String*  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddPinnedBuffer", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, str);
}
inline ::System::IntPtr Epic::OnlineServices::Helper::AddPinnedBuffer(::System::ArraySegment_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddPinnedBuffer", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr Epic::OnlineServices::Helper::AddPinnedBuffer(::ArrayW<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"AddPinnedBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline void Epic::OnlineServices::Helper::RemovePinnedBuffer(::by_ref<::System::IntPtr>  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"RemovePinnedBuffer", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Set(T  from, ::by_ref<::System::Nullable_1<T>>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::System::Nullable_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Set(::System::Nullable_1<T>  from, ::by_ref<T>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Nullable_1<T>>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Set(::System::Nullable_1<T>  from, ::by_ref<::System::Nullable_1<T>>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Nullable_1<T>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Set(::System::Nullable_1<bool>  from, ::by_ref<int32_t>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Set(T  from, ::by_ref<::System::IntPtr>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Set(::System::Nullable_1<T>  from, ::by_ref<::System::IntPtr>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Nullable_1<T>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Set(::System::Object*  from, ::by_ref<::System::IntPtr>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Set(::Epic::OnlineServices::Utf8String*  from, ::by_ref<::System::IntPtr>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Set(::Epic::OnlineServices::Handle*  from, ::by_ref<::System::IntPtr>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Set(::ArrayW<T>  from, ::by_ref<::System::IntPtr>  to, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, isArrayItemAllocated);
}
inline void Epic::OnlineServices::Helper::Set(::System::ArraySegment_1<uint8_t>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<uint32_t>  arrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Set(::ArrayW<T>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<int32_t>  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
template<typename T>
inline void Epic::OnlineServices::Helper::Set(::ArrayW<T>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<uint32_t>  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
inline void Epic::OnlineServices::Helper::Set(::System::Nullable_1<::System::DateTimeOffset>  from, ::by_ref<int64_t>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Set(bool  from, ::by_ref<int32_t>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Set(::Epic::OnlineServices::Utf8String*  from, ::by_ref<::ArrayW<uint8_t>>  to, int32_t  stringLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, stringLength);
}
template<typename TPublic,typename TInternal>
inline void Epic::OnlineServices::Helper::Set(::by_ref<TPublic>  from, ::by_ref<TInternal>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}, {::i2c::type_of<::by_ref<TPublic>>(), ::i2c::type_of<::by_ref<TInternal>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TPublic,typename TInternal>
inline void Epic::OnlineServices::Helper::Set(::System::Nullable_1<TPublic>  from, ::by_ref<::System::IntPtr>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}, {::i2c::type_of<::System::Nullable_1<TPublic>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TPublic,typename TInternal>
inline void Epic::OnlineServices::Helper::Set(::System::Nullable_1<TPublic>  from, ::by_ref<TInternal>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}, {::i2c::type_of<::System::Nullable_1<TPublic>>(), ::i2c::type_of<::by_ref<TInternal>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Epic::OnlineServices::Helper::Set(::ArrayW<::Epic::OnlineServices::Utf8String*>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<int32_t>  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
inline void Epic::OnlineServices::Helper::Set(::ArrayW<::Epic::OnlineServices::Utf8String*>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<uint32_t>  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {"Set", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
template<typename TPublic,typename TInternal>
inline void Epic::OnlineServices::Helper::Set(TPublic  from, ::by_ref<::System::IntPtr>  to)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}, {::i2c::type_of<TPublic>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
template<typename TPublic,typename TInternal>
inline void Epic::OnlineServices::Helper::Set(::ArrayW<TPublic>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<int32_t>  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}, {::i2c::type_of<::ArrayW<TPublic>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
template<typename TPublic,typename TInternal>
inline void Epic::OnlineServices::Helper::Set(::ArrayW<TPublic>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<uint32_t>  arrayLength, bool  isArrayItemAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                    {"Set", {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}, {::i2c::type_of<::ArrayW<TPublic>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPublic>(), ::i2c::class_of<TInternal>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, arrayLength, isArrayItemAllocated);
}
inline void Epic::OnlineServices::Helper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Helper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Helper* Epic::OnlineServices::Helper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Helper*>());
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Helper::Helper()   {
}
