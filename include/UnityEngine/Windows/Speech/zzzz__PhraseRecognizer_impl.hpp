#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/PhraseRecognizer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Windows/Speech/zzzz__PhraseRecognizer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__ConfidenceLevel_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__PhraseRecognizedEventArgs_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__PhraseRecognizer_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__SemanticMeaning_def.hpp"
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate::_ctor)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x181284e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate::*)(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs)>(&::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x180ccbce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate::Invoke(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate* UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate::PhraseRecognizer_PhraseRecognizedDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognizer.InvokePhraseRecognizedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::PhraseRecognizer::*)(::System::IntPtr, int32_t, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>, int64_t, int64_t)>(&::UnityEngine::Windows::Speech::PhraseRecognizer::InvokePhraseRecognizedEvent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822806f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer*>(),
                        {"InvokePhraseRecognizedEvent", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Windows::Speech::ConfidenceLevel>(), ::i2c::type_of<::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognizer.MarshalSemanticMeaning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning> (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::Windows::Speech::PhraseRecognizer::MarshalSemanticMeaning)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182280810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer*>(),
                        {"MarshalSemanticMeaning", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Windows::Speech::PhraseRecognizer::__cordl_internal_get_m_Recognizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recognizer;
}
constexpr ::System::IntPtr const& UnityEngine::Windows::Speech::PhraseRecognizer::__cordl_internal_get_m_Recognizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recognizer;
}
constexpr void UnityEngine::Windows::Speech::PhraseRecognizer::__cordl_internal_set_m_Recognizer(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Recognizer = value;
}
constexpr ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*& UnityEngine::Windows::Speech::PhraseRecognizer::__cordl_internal_get_OnPhraseRecognized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPhraseRecognized;
}
constexpr ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate* const& UnityEngine::Windows::Speech::PhraseRecognizer::__cordl_internal_get_OnPhraseRecognized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPhraseRecognized;
}
constexpr void UnityEngine::Windows::Speech::PhraseRecognizer::__cordl_internal_set_OnPhraseRecognized(::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPhraseRecognized = value;
}
inline void UnityEngine::Windows::Speech::PhraseRecognizer::InvokePhraseRecognizedEvent(::System::IntPtr  rawText, int32_t  rawTextLength, ::UnityEngine::Windows::Speech::ConfidenceLevel  confidence, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>  semanticMeanings, int64_t  phraseStartFileTime, int64_t  phraseDurationTicks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer*>(),
                        {"InvokePhraseRecognizedEvent", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Windows::Speech::ConfidenceLevel>(), ::i2c::type_of<::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawText, rawTextLength, confidence, semanticMeanings, phraseStartFileTime, phraseDurationTicks);
}
inline ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning> UnityEngine::Windows::Speech::PhraseRecognizer::MarshalSemanticMeaning(::System::IntPtr  keys, ::System::IntPtr  values, ::System::IntPtr  valueSizes, int32_t  valueCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizer*>(),
                        {"MarshalSemanticMeaning", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>>(nullptr, ___internal_method, keys, values, valueSizes, valueCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::PhraseRecognizer::PhraseRecognizer()   {
}
