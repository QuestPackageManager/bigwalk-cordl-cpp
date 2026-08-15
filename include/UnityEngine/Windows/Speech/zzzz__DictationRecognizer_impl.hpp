#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/DictationRecognizer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Windows/Speech/zzzz__DictationRecognizer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__ConfidenceLevel_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__DictationCompletionCause_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__DictationRecognizer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate::*)(::StringW)>(&::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate::Invoke(::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate* UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate::DictationRecognizer_DictationHypothesisDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1810e6060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate::*)(::StringW, ::UnityEngine::Windows::Speech::ConfidenceLevel)>(&::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate::Invoke(::StringW  text, ::UnityEngine::Windows::Speech::ConfidenceLevel  confidence)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, confidence);
}
inline ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate* UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate::DictationRecognizer_DictationResultDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate::*)(::UnityEngine::Windows::Speech::DictationCompletionCause)>(&::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate::Invoke(::UnityEngine::Windows::Speech::DictationCompletionCause  cause)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate* UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate::DictationRecognizer_DictationCompletedDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1810e6060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler::*)(::StringW, int32_t)>(&::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*>(),
                    {::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler::Invoke(::StringW  error, int32_t  hresult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, hresult);
}
inline ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler* UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler::DictationRecognizer_DictationErrorHandler()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer.DictationRecognizer_InvokeHypothesisGeneratedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer::*)(::System::IntPtr, int32_t)>(&::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeHypothesisGeneratedEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18227ed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer*>(),
                        {"DictationRecognizer_InvokeHypothesisGeneratedEvent", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer.DictationRecognizer_InvokeResultGeneratedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer::*)(::System::IntPtr, int32_t, ::UnityEngine::Windows::Speech::ConfidenceLevel)>(&::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeResultGeneratedEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18227ed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer*>(),
                        {"DictationRecognizer_InvokeResultGeneratedEvent", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Windows::Speech::ConfidenceLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer.DictationRecognizer_InvokeCompletedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer::*)(::UnityEngine::Windows::Speech::DictationCompletionCause)>(&::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeCompletedEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acb8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer*>(),
                        {"DictationRecognizer_InvokeCompletedEvent", {}, {::i2c::type_of<::UnityEngine::Windows::Speech::DictationCompletionCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::DictationRecognizer.DictationRecognizer_InvokeErrorEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::DictationRecognizer::*)(::StringW, int32_t)>(&::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeErrorEvent)> {
  constexpr static std::size_t size = 0x1d80;
  constexpr static std::size_t addrs = 0x180da0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer*>(),
                        {"DictationRecognizer_InvokeErrorEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_m_Recognizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recognizer;
}
constexpr ::System::IntPtr const& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_m_Recognizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recognizer;
}
constexpr void UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_set_m_Recognizer(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Recognizer = value;
}
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_DictationHypothesis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DictationHypothesis;
}
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate* const& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_DictationHypothesis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DictationHypothesis;
}
constexpr void UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_set_DictationHypothesis(::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DictationHypothesis = value;
}
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_DictationResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DictationResult;
}
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate* const& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_DictationResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DictationResult;
}
constexpr void UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_set_DictationResult(::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DictationResult = value;
}
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_DictationComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DictationComplete;
}
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate* const& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_DictationComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DictationComplete;
}
constexpr void UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_set_DictationComplete(::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DictationComplete = value;
}
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_DictationError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DictationError;
}
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler* const& UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_get_DictationError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DictationError;
}
constexpr void UnityEngine::Windows::Speech::DictationRecognizer::__cordl_internal_set_DictationError(::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DictationError = value;
}
inline void UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeHypothesisGeneratedEvent(::System::IntPtr  keyword, int32_t  keywordLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer*>(),
                        {"DictationRecognizer_InvokeHypothesisGeneratedEvent", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword, keywordLength);
}
inline void UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeResultGeneratedEvent(::System::IntPtr  keyword, int32_t  keywordLength, ::UnityEngine::Windows::Speech::ConfidenceLevel  minimumConfidence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer*>(),
                        {"DictationRecognizer_InvokeResultGeneratedEvent", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Windows::Speech::ConfidenceLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword, keywordLength, minimumConfidence);
}
inline void UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeCompletedEvent(::UnityEngine::Windows::Speech::DictationCompletionCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer*>(),
                        {"DictationRecognizer_InvokeCompletedEvent", {}, {::i2c::type_of<::UnityEngine::Windows::Speech::DictationCompletionCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeErrorEvent(::StringW  error, int32_t  hresult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::DictationRecognizer*>(),
                        {"DictationRecognizer_InvokeErrorEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, hresult);
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer()   {
}
