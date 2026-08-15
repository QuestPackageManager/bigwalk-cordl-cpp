#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNIHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJNIHelper_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnable_def.hpp"
#include "UnityEngine/zzzz__jvalue_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetConstructorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNIHelper::GetConstructorID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182225980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetConstructorID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetMethodID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::AndroidJNIHelper::GetMethodID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822259f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetMethodID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetFieldID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::AndroidJNIHelper::GetFieldID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182225990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetFieldID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.CreateJavaRunnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AndroidJavaRunnable*)>(&::UnityEngine::AndroidJNIHelper::CreateJavaRunnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182225790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"CreateJavaRunnable", {}, {::i2c::type_of<::UnityEngine::AndroidJavaRunnable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.CreateJavaProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AndroidJavaProxy*)>(&::UnityEngine::AndroidJNIHelper::CreateJavaProxy)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182225670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"CreateJavaProxy", {}, {::i2c::type_of<::UnityEngine::AndroidJavaProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.CreateJNIArgArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNIHelper::CreateJNIArgArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822255d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"CreateJNIArgArray", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.DeleteJNIArgArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNIHelper::DeleteJNIArgArray)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182225820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"DeleteJNIArgArray", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetConstructorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::ArrayW<::System::Object*>)>(&::UnityEngine::AndroidJNIHelper::GetConstructorID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182225950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetConstructorID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetMethodID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::ArrayW<::System::Object*>, bool)>(&::UnityEngine::AndroidJNIHelper::GetMethodID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822259a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetMethodID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::jvalue, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822254f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::jvalue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182225490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"Box", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822254c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"Box", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetConstructorID(::System::IntPtr  javaClass, ::StringW  signature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetConstructorID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, signature);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetMethodID(::System::IntPtr  javaClass, ::StringW  methodName, ::StringW  signature, bool  isStatic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetMethodID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, methodName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetFieldID(::System::IntPtr  javaClass, ::StringW  fieldName, ::StringW  signature, bool  isStatic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetFieldID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, fieldName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable*  jrunnable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"CreateJavaRunnable", {}, {::i2c::type_of<::UnityEngine::AndroidJavaRunnable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jrunnable);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::CreateJavaProxy(::UnityEngine::AndroidJavaProxy*  proxy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"CreateJavaProxy", {}, {::i2c::type_of<::UnityEngine::AndroidJavaProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, proxy);
}
inline void UnityEngine::AndroidJNIHelper::CreateJNIArgArray(::ArrayW<::System::Object*>  args, ::System::Span_1<::UnityEngine::jvalue>  jniArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"CreateJNIArgArray", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, jniArgs);
}
inline void UnityEngine::AndroidJNIHelper::DeleteJNIArgArray(::ArrayW<::System::Object*>  args, ::System::Span_1<::UnityEngine::jvalue>  jniArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"DeleteJNIArgArray", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, jniArgs);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetConstructorID(::System::IntPtr  jclass, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetConstructorID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::ArrayW<::System::Object*>  args, bool  isStatic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"GetMethodID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, args, isStatic);
}
template<typename ArrayType>
inline ArrayType UnityEngine::AndroidJNIHelper::ConvertFromJNIArray(::System::IntPtr  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                    {"ConvertFromJNIArray", {::i2c::class_of<ArrayType>()}, {::i2c::type_of<::System::IntPtr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<ArrayType>()}
                )));
return ::cordl_internals::RunMethodRethrow<ArrayType>(nullptr, ___internal_method, array);
}
template<typename ReturnType>
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::ArrayW<::System::Object*>  args, bool  isStatic)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                    {"GetMethodID", {::i2c::class_of<ReturnType>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<ReturnType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, args, isStatic);
}
template<typename FieldType>
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetFieldID(::System::IntPtr  jclass, ::StringW  fieldName, bool  isStatic)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                    {"GetFieldID", {::i2c::class_of<FieldType>()}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<FieldType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, fieldName, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(::UnityEngine::jvalue  val, ::StringW  boxedClass, ::StringW  signature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::jvalue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, val, boxedClass, signature);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"Box", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                        {"Box", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJNIHelper::AndroidJNIHelper()   {
}
