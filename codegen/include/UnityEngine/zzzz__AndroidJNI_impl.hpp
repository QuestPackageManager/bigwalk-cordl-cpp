#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJNI_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AndroidJNI_def.hpp"
#include "UnityEngine/zzzz__jvalue_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJNI_JStringBinding.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AndroidJNI_JStringBinding::*)()>(&::UnityEngine::AndroidJNI_JStringBinding::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18222ba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(),
                    {::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI_JStringBinding.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJNI_JStringBinding::*)()>(&::UnityEngine::AndroidJNI_JStringBinding::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18222ba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::AndroidJNI_JStringBinding::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::AndroidJNI_JStringBinding::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::AndroidJNI_JStringBinding::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::AndroidJNI_JStringBinding::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "javaString", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "chars", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ownsRef", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AndroidJNI_JStringBinding::AndroidJNI_JStringBinding(::System::IntPtr  javaString, ::System::IntPtr  chars, int32_t  length, bool  ownsRef) noexcept  {
this->javaString = javaString;
this->chars = chars;
this->length = length;
this->ownsRef = ownsRef;
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJNI_JStringBinding::AndroidJNI_JStringBinding()   {
}
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ReleaseStringChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AndroidJNI_JStringBinding)>(&::UnityEngine::AndroidJNI::ReleaseStringChars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822293d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ReleaseStringChars", {}, {::i2c::type_of<::UnityEngine::AndroidJNI_JStringBinding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.InvokeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::AndroidJNI::InvokeAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"InvokeAction", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FindClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::FindClass)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182228380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FindClass", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromReflectedMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromReflectedMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromReflectedMethod", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ExceptionOccurred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::AndroidJNI::ExceptionOccurred)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ExceptionOccurred", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ExceptionClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AndroidJNI::ExceptionClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ExceptionClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.PushLocalFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::AndroidJNI::PushLocalFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822293a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"PushLocalFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.PopLocalFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::PopLocalFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"PopLocalFrame", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewGlobalRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewGlobalRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822291d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewGlobalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.QueueDeleteGlobalRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::QueueDeleteGlobalRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822293b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"QueueDeleteGlobalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewWeakGlobalRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewWeakGlobalRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewWeakGlobalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DeleteWeakGlobalRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::DeleteWeakGlobalRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"DeleteWeakGlobalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewLocalRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewLocalRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822291e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewLocalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DeleteLocalRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::DeleteLocalRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"DeleteLocalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.IsSameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::IsSameObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822291c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"IsSameObject", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::NewObject)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182229210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewObject", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObjectA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::NewObjectA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822291f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewObjectA", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetObjectClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetObjectClass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetObjectClass", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetMethodID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetMethodID)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x182228850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetMethodID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFieldID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetFieldID)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x182228650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetFieldID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticMethodID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetStaticMethodID)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x182228cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticMethodID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticFieldID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetStaticFieldID)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x182228aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticFieldID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::NewString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewStringFromStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::NewStringFromStr)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182229260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewStringFromStr", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringChars)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822290a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStringChars", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringCharsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringCharsInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182229070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStringCharsInternal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStringMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182228240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStringMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182228200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStringMethodUnsafe)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822280e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethodUnsafeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStringMethodUnsafeInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822280a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethodUnsafeInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallObjectMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallObjectMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallObjectMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallObjectMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallObjectMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallObjectMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallIntMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallIntMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822279d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallIntMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallIntMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallIntMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822279c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallIntMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallBooleanMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallBooleanMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallBooleanMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallBooleanMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallBooleanMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallBooleanMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallShortMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallShortMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallShortMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallShortMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallShortMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallShortMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallSByteMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallSByteMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallSByteMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallSByteMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallSByteMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallSByteMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallCharMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallCharMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822278e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallCharMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallCharMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallCharMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822278d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallCharMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallFloatMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallFloatMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallFloatMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallFloatMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallFloatMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallFloatMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallDoubleMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallDoubleMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallDoubleMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallDoubleMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallDoubleMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallDoubleMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallLongMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallLongMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallLongMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallLongMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallLongMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallLongMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticStringMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182227fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticStringMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticStringMethodUnsafe)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182227e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethodUnsafeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticStringMethodUnsafeInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethodUnsafeInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticObjectMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticObjectMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticObjectMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticObjectMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticObjectMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticObjectMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticIntMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticIntMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticIntMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticIntMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticIntMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticIntMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticBooleanMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticBooleanMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticBooleanMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticBooleanMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticBooleanMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticBooleanMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticShortMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticShortMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticShortMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticShortMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticShortMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticShortMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticSByteMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticSByteMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticSByteMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticSByteMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticSByteMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticSByteMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticCharMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticCharMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticCharMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticCharMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticCharMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticCharMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticFloatMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticFloatMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticFloatMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticFloatMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticFloatMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticFloatMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticDoubleMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticDoubleMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticDoubleMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticDoubleMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticDoubleMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticDoubleMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticLongMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticLongMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182227cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticLongMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticLongMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticLongMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticLongMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticVoidMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticVoidMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182228050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticVoidMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticVoidMethodUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticVoidMethodUnsafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticVoidMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticStringField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticStringField)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182228f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticStringField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticStringFieldInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticStringFieldInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182228f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticStringFieldInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticObjectField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticObjectField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticObjectField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticBooleanField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticBooleanField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticBooleanField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticSByteField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticSByteField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticSByteField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticCharField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticCharField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticCharField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticShortField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticShortField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticShortField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticIntField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticIntField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticIntField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticLongField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticLongField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticLongField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticFloatField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticFloatField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticFloatField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticDoubleField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticDoubleField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticDoubleField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ConvertToBooleanArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<bool>)>(&::UnityEngine::AndroidJNI::ConvertToBooleanArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822282c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ConvertToBooleanArray", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToBooleanArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<bool>)>(&::UnityEngine::AndroidJNI::ToBooleanArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822293f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToBooleanArray", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<uint8_t>)>(&::UnityEngine::AndroidJNI::ToByteArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182229470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToSByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<int8_t>)>(&::UnityEngine::AndroidJNI::ToSByteArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182229660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToSByteArray", {}, {::i2c::type_of<::ArrayW<int8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToSByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int8_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToSByteArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToSByteArray", {}, {::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToCharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<char16_t>)>(&::UnityEngine::AndroidJNI::ToCharArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822294f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToCharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToCharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(char16_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToCharArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822294e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToCharArray", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToShortArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<int16_t>)>(&::UnityEngine::AndroidJNI::ToShortArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822296b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToShortArray", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToShortArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int16_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToShortArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822296a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToShortArray", {}, {::i2c::type_of<int16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<int32_t>)>(&::UnityEngine::AndroidJNI::ToIntArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822295b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToIntArray", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToIntArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822295a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToIntArray", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToLongArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<int64_t>)>(&::UnityEngine::AndroidJNI::ToLongArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822295e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToLongArray", {}, {::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToLongArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int64_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToLongArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToLongArray", {}, {::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<float_t>)>(&::UnityEngine::AndroidJNI::ToFloatArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182229560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToFloatArray", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(float_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToFloatArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToFloatArray", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToDoubleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<double_t>)>(&::UnityEngine::AndroidJNI::ToDoubleArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182229520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToDoubleArray", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToDoubleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(double_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToDoubleArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToDoubleArray", {}, {::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr*, int32_t, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::ToObjectArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToObjectArray", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<::System::IntPtr>, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::ToObjectArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182229620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToObjectArray", {}, {::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromBooleanArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromBooleanArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822284a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromBooleanArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromByteArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182228530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromByteArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromSByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromSByteArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromSByteArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromCharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromCharArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822285b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromCharArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromShortArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int16_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromShortArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromShortArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromIntArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822285e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromIntArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromLongArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int64_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromLongArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822285f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromLongArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromFloatArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822285d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromFloatArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromDoubleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<double_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromDoubleArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822285c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromDoubleArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetArrayLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetArrayLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetArrayLength", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewObjectArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewObjectArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetObjectArrayElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetObjectArrayElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetObjectArrayElement", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetObjectArrayElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::SetObjectArrayElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822293e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"SetObjectArrayElement", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ReleaseStringChars_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(&::UnityEngine::AndroidJNI::ReleaseStringChars_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822293c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ReleaseStringChars_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FindClass_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::FindClass_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FindClass_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetMethodID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetMethodID_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetMethodID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFieldID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetFieldID_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetFieldID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticMethodID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetStaticMethodID_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticMethodID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticFieldID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetStaticFieldID_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticFieldID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewStringFromStr_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::NewStringFromStr_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewStringFromStr_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringCharsInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(&::UnityEngine::AndroidJNI::GetStringCharsInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStringCharsInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethodUnsafeInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(&::UnityEngine::AndroidJNI::CallStringMethodUnsafeInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethodUnsafeInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethodUnsafeInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(&::UnityEngine::AndroidJNI::CallStaticStringMethodUnsafeInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182227e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethodUnsafeInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticStringFieldInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(&::UnityEngine::AndroidJNI::GetStaticStringFieldInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticStringFieldInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ConvertToBooleanArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::ConvertToBooleanArray_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822282b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ConvertToBooleanArray_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToByteArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::ToByteArray_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182229460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToByteArray_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromBooleanArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AndroidJNI::FromBooleanArray_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromBooleanArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromByteArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AndroidJNI::FromByteArray_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182228520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromByteArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AndroidJNI::ReleaseStringChars(::UnityEngine::AndroidJNI_JStringBinding  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ReleaseStringChars", {}, {::i2c::type_of<::UnityEngine::AndroidJNI_JStringBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str);
}
inline void UnityEngine::AndroidJNI::InvokeAction(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"InvokeAction", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FindClass(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FindClass", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FromReflectedMethod(::System::IntPtr  refMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromReflectedMethod", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, refMethod);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ExceptionOccurred()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ExceptionOccurred", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::ExceptionClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ExceptionClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AndroidJNI::PushLocalFrame(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"PushLocalFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::PopLocalFrame(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"PopLocalFrame", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewGlobalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::QueueDeleteGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"QueueDeleteGlobalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewWeakGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewWeakGlobalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::DeleteWeakGlobalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"DeleteWeakGlobalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewLocalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewLocalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::DeleteLocalRef(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"DeleteLocalRef", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::AndroidJNI::IsSameObject(::System::IntPtr  obj1, ::System::IntPtr  obj2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"IsSameObject", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewObject", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObjectA(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewObjectA", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetObjectClass(::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetObjectClass", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetMethodID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetFieldID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticMethodID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticFieldID", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewString(::StringW  chars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewStringFromStr(::StringW  chars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewStringFromStr", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, chars);
}
inline ::StringW UnityEngine::AndroidJNI::GetStringChars(::System::IntPtr  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStringChars", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::GetStringCharsInternal(::System::IntPtr  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStringCharsInternal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, str);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::CallStringMethodUnsafeInternal(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethodUnsafeInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallObjectMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallObjectMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallObjectMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallIntMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallIntMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallIntMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallBooleanMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallBooleanMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallBooleanMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallShortMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallShortMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallShortMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallSByteMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallSByteMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallSByteMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallCharMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallCharMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallCharMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallFloatMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallFloatMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallFloatMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallDoubleMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallDoubleMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallDoubleMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallLongMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallLongMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallLongMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::CallStaticStringMethodUnsafeInternal(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethodUnsafeInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticObjectMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallStaticObjectMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticObjectMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticIntMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallStaticIntMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticIntMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticBooleanMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clazz, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallStaticBooleanMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticBooleanMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticShortMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallStaticShortMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticShortMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticSByteMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallStaticSByteMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticSByteMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticCharMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallStaticCharMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticCharMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticFloatMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallStaticFloatMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticFloatMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticDoubleMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallStaticDoubleMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticDoubleMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticLongMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallStaticLongMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticLongMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticVoidMethod", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallStaticVoidMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticVoidMethodUnsafe", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::GetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticStringField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clazz, fieldID);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::GetStaticStringFieldInternal(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticStringFieldInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, clazz, fieldID);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticObjectField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, fieldID);
}
inline bool UnityEngine::AndroidJNI::GetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticBooleanField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clazz, fieldID);
}
inline int8_t UnityEngine::AndroidJNI::GetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticSByteField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline char16_t UnityEngine::AndroidJNI::GetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticCharField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline int16_t UnityEngine::AndroidJNI::GetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticShortField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline int32_t UnityEngine::AndroidJNI::GetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticIntField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline int64_t UnityEngine::AndroidJNI::GetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticLongField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline float_t UnityEngine::AndroidJNI::GetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticFloatField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline double_t UnityEngine::AndroidJNI::GetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticDoubleField", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ConvertToBooleanArray(::ArrayW<bool>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ConvertToBooleanArray", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToBooleanArray(::ArrayW<bool>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToBooleanArray", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToByteArray(::ArrayW<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToSByteArray(::ArrayW<int8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToSByteArray", {}, {::i2c::type_of<::ArrayW<int8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToSByteArray(int8_t*  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToSByteArray", {}, {::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToCharArray(::ArrayW<char16_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToCharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToCharArray(char16_t*  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToCharArray", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToShortArray(::ArrayW<int16_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToShortArray", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToShortArray(int16_t*  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToShortArray", {}, {::i2c::type_of<int16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToIntArray(::ArrayW<int32_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToIntArray", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToIntArray(int32_t*  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToIntArray", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToLongArray(::ArrayW<int64_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToLongArray", {}, {::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToLongArray(int64_t*  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToLongArray", {}, {::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToFloatArray(::ArrayW<float_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToFloatArray", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToFloatArray(float_t*  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToFloatArray", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToDoubleArray(::ArrayW<double_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToDoubleArray", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToDoubleArray(double_t*  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToDoubleArray", {}, {::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToObjectArray(::System::IntPtr*  array, int32_t  length, ::System::IntPtr  arrayClass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToObjectArray", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length, arrayClass);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToObjectArray(::ArrayW<::System::IntPtr>  array, ::System::IntPtr  arrayClass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToObjectArray", {}, {::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, arrayClass);
}
inline ::ArrayW<bool> UnityEngine::AndroidJNI::FromBooleanArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromBooleanArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<uint8_t> UnityEngine::AndroidJNI::FromByteArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromByteArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int8_t> UnityEngine::AndroidJNI::FromSByteArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromSByteArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<char16_t> UnityEngine::AndroidJNI::FromCharArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromCharArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int16_t> UnityEngine::AndroidJNI::FromShortArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromShortArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int32_t> UnityEngine::AndroidJNI::FromIntArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromIntArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int64_t> UnityEngine::AndroidJNI::FromLongArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromLongArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<float_t> UnityEngine::AndroidJNI::FromFloatArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromFloatArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<double_t> UnityEngine::AndroidJNI::FromDoubleArray(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromDoubleArray", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t>>(nullptr, ___internal_method, array);
}
inline int32_t UnityEngine::AndroidJNI::GetArrayLength(::System::IntPtr  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetArrayLength", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObjectArray(int32_t  size, ::System::IntPtr  clazz, ::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewObjectArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size, clazz, obj);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetObjectArrayElement(::System::IntPtr  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetObjectArrayElement", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, index);
}
inline void UnityEngine::AndroidJNI::SetObjectArrayElement(::System::IntPtr  array, int32_t  index, ::System::IntPtr  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"SetObjectArrayElement", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, obj);
}
inline void UnityEngine::AndroidJNI::ReleaseStringChars_Injected(::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ReleaseStringChars_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FindClass_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FindClass_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetMethodID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetMethodID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetFieldID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetFieldID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticMethodID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticMethodID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticFieldID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticFieldID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewStringFromStr_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  chars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"NewStringFromStr_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, chars);
}
inline void UnityEngine::AndroidJNI::GetStringCharsInternal_Injected(::System::IntPtr  str, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStringCharsInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str, ret);
}
inline void UnityEngine::AndroidJNI::CallStringMethodUnsafeInternal_Injected(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStringMethodUnsafeInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, methodID, args, ret);
}
inline void UnityEngine::AndroidJNI::CallStaticStringMethodUnsafeInternal_Injected(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"CallStaticStringMethodUnsafeInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, methodID, args, ret);
}
inline void UnityEngine::AndroidJNI::GetStaticStringFieldInternal_Injected(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"GetStaticStringFieldInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, ret);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ConvertToBooleanArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ConvertToBooleanArray_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToByteArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"ToByteArray_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline void UnityEngine::AndroidJNI::FromBooleanArray_Injected(::System::IntPtr  array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromBooleanArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, ret);
}
inline void UnityEngine::AndroidJNI::FromByteArray_Injected(::System::IntPtr  array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                        {"FromByteArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJNI::AndroidJNI()   {
}
