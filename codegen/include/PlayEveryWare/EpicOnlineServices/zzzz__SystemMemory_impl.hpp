#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SystemMemory.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SystemMemory_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SystemMemory_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "currentMemoryAllocatedInBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::SystemMemory_MemCounters::SystemMemory_MemCounters(int64_t  currentMemoryAllocatedInBytes) noexcept  {
this->currentMemoryAllocatedInBytes = currentMemoryAllocatedInBytes;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SystemMemory_MemCounters::SystemMemory_MemCounters()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804f6ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::*)(::System::UIntPtr, ::System::UIntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::*)(::System::UIntPtr, ::System::UIntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f6a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::Invoke(::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, sizeInBytes, alignmentInBytes);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::BeginInvoke(::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sizeInBytes, alignmentInBytes, callback, object);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc* PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc::SystemMemory_EOS_GenericAlignAlloc()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805022c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::*)(::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::*)(::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805021a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::Invoke(::System::IntPtr  ptr, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, ptr, sizeInBytes, alignmentInBytes);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::BeginInvoke(::System::IntPtr  ptr, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ptr, sizeInBytes, alignmentInBytes, callback, object);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc* PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc::SystemMemory_EOS_GenericAlignRealloc()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::*)(::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::Invoke(::System::IntPtr  ptr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::BeginInvoke(::System::IntPtr  ptr, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ptr, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree* PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree::SystemMemory_EOS_GenericFree()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory.GenericAlignAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::UIntPtr, ::System::UIntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory::GenericAlignAlloc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180547280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"GenericAlignAlloc", {}, {::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory.GenericAlignRealloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory::GenericAlignRealloc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180547310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"GenericAlignRealloc", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory.GenericFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory::GenericFree)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805473b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"GenericFree", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory.GetAllocatorFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>, ::by_ref<::System::IntPtr>, ::by_ref<::System::IntPtr>)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory::GetAllocatorFunctions)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180547430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"GetAllocatorFunctions", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory.Mem_generic_align_alloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::UIntPtr, ::System::UIntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory::Mem_generic_align_alloc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180547280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"Mem_generic_align_alloc", {}, {::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory.Mem_generic_align_realloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory::Mem_generic_align_realloc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180547310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"Mem_generic_align_realloc", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory.Mem_generic_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemMemory::Mem_generic_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805473b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"Mem_generic_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemMemory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SystemMemory::*)()>(&::PlayEveryWare::EpicOnlineServices::SystemMemory::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemMemory::GenericAlignAlloc(::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"GenericAlignAlloc", {}, {::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, sizeInBytes, alignmentInBytes);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemMemory::GenericAlignRealloc(::System::IntPtr  ptr, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"GenericAlignRealloc", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ptr, sizeInBytes, alignmentInBytes);
}
inline void PlayEveryWare::EpicOnlineServices::SystemMemory::GenericFree(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"GenericFree", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void PlayEveryWare::EpicOnlineServices::SystemMemory::GetAllocatorFunctions(::by_ref<::System::IntPtr>  alloc, ::by_ref<::System::IntPtr>  realloc, ::by_ref<::System::IntPtr>  free)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"GetAllocatorFunctions", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, alloc, realloc, free);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemMemory::Mem_generic_align_alloc(::System::UIntPtr  size_in_bytes, ::System::UIntPtr  alignment_in_bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"Mem_generic_align_alloc", {}, {::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size_in_bytes, alignment_in_bytes);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemMemory::Mem_generic_align_realloc(::System::IntPtr  ptr, ::System::UIntPtr  size_in_bytes, ::System::UIntPtr  alignment_in_bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"Mem_generic_align_realloc", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ptr, size_in_bytes, alignment_in_bytes);
}
inline void PlayEveryWare::EpicOnlineServices::SystemMemory::Mem_generic_free(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {"Mem_generic_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void PlayEveryWare::EpicOnlineServices::SystemMemory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemMemory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::SystemMemory* PlayEveryWare::EpicOnlineServices::SystemMemory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::SystemMemory*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SystemMemory::SystemMemory()   {
}
