#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandler.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandler*)>(&::UnityEngine::Networking::DownloadHandler_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandler_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::DownloadHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandler_BindingsMarshaller::DownloadHandler_BindingsMarshaller()   {
}
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.ReleaseFromScripting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::ReleaseFromScripting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182549a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"ReleaseFromScripting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182549680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182549650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.get_text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::get_text)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181163b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"get_text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.GetNativeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::GetNativeData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.GetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::GetText)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825498b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.GetTextEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::GetTextEncoder)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182549760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"GetTextEncoder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.GetContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::GetContentType)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1825496b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"GetContentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::DownloadHandler::*)(::ArrayW<uint8_t>, int32_t)>(&::UnityEngine::Networking::DownloadHandler::ReceiveData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.ReceiveContentLengthHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandler::*)(uint64_t)>(&::UnityEngine::Networking::DownloadHandler::ReceiveContentLengthHeader)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815d8cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.ReceiveContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandler::*)(int32_t)>(&::UnityEngine::Networking::DownloadHandler::ReceiveContentLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.CompleteContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::CompleteContent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.GetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Networking::DownloadHandler::*)()>(&::UnityEngine::Networking::DownloadHandler::GetProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.InternalGetByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::UnityEngine::Networking::DownloadHandler*, ::by_ref<int32_t>)>(&::UnityEngine::Networking::DownloadHandler::InternalGetByteArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182549960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"InternalGetByteArray", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.InternalGetNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::UnityEngine::Networking::DownloadHandler*, ::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>)>(&::UnityEngine::Networking::DownloadHandler::InternalGetNativeArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182549980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"InternalGetNativeArray", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.DisposeNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>)>(&::UnityEngine::Networking::DownloadHandler::DisposeNativeArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182549640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"DisposeNativeArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.CreateNativeArrayForNativeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>, uint8_t*, int32_t)>(&::UnityEngine::Networking::DownloadHandler::CreateNativeArrayForNativeData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182549610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"CreateNativeArrayForNativeData", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.ReleaseFromScripting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Networking::DownloadHandler::ReleaseFromScripting_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182549a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"ReleaseFromScripting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.GetContentType_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::DownloadHandler::GetContentType_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825496a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"GetContentType_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandler.InternalGetByteArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::UnityEngine::Networking::DownloadHandler::InternalGetByteArray_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182549950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"InternalGetByteArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Networking::DownloadHandler::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Networking::DownloadHandler::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::Networking::DownloadHandler::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
inline void UnityEngine::Networking::DownloadHandler::ReleaseFromScripting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"ReleaseFromScripting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandler::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandler::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::DownloadHandler::get_text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"get_text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Networking::DownloadHandler::GetNativeData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::DownloadHandler::GetText()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Text::Encoding* UnityEngine::Networking::DownloadHandler::GetTextEncoder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"GetTextEncoder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::DownloadHandler::GetContentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"GetContentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Networking::DownloadHandler::ReceiveData(::ArrayW<uint8_t>  data, int32_t  dataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, dataLength);
}
inline void UnityEngine::Networking::DownloadHandler::ReceiveContentLengthHeader(uint64_t  contentLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentLength);
}
inline void UnityEngine::Networking::DownloadHandler::ReceiveContentLength(int32_t  contentLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentLength);
}
inline void UnityEngine::Networking::DownloadHandler::CompleteContent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Networking::DownloadHandler::GetProgress()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Networking::DownloadHandler::GetCheckedDownloader(::UnityEngine::Networking::UnityWebRequest*  www)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                    {"GetCheckedDownloader", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, www);
}
inline uint8_t* UnityEngine::Networking::DownloadHandler::InternalGetByteArray(::UnityEngine::Networking::DownloadHandler*  dh, ::by_ref<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"InternalGetByteArray", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, dh, length);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Networking::DownloadHandler::InternalGetNativeArray(::UnityEngine::Networking::DownloadHandler*  dh, ::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>  nativeArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"InternalGetNativeArray", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, dh, nativeArray);
}
inline void UnityEngine::Networking::DownloadHandler::DisposeNativeArray(::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"DisposeNativeArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void UnityEngine::Networking::DownloadHandler::CreateNativeArrayForNativeData(::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>  data, uint8_t*  bytes, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"CreateNativeArrayForNativeData", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, bytes, length);
}
inline void UnityEngine::Networking::DownloadHandler::ReleaseFromScripting_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"ReleaseFromScripting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::DownloadHandler::GetContentType_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"GetContentType_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline uint8_t* UnityEngine::Networking::DownloadHandler::InternalGetByteArray_Injected(::System::IntPtr  dh, ::by_ref<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandler*>(),
                        {"InternalGetByteArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, dh, length);
}
inline ::UnityEngine::Networking::DownloadHandler* UnityEngine::Networking::DownloadHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::DownloadHandler*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Networking::DownloadHandler::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Networking::DownloadHandler::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandler::DownloadHandler()   {
}
