#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TextSelectionEventConverter.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TextSelectionEventConverter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextSelectionEventConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TextSelectionEventConverter::*)(::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*)>(&::Cysharp::Threading::Tasks::TextSelectionEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e804c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextSelectionEventConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextSelectionEventConverter.InvokeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TextSelectionEventConverter::*)(::StringW, int32_t, int32_t)>(&::Cysharp::Threading::Tasks::TextSelectionEventConverter::InvokeCore)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e80470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextSelectionEventConverter*>(),
                        {"InvokeCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextSelectionEventConverter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TextSelectionEventConverter::*)()>(&::Cysharp::Threading::Tasks::TextSelectionEventConverter::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e80440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextSelectionEventConverter*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*& Cysharp::Threading::Tasks::TextSelectionEventConverter::__cordl_internal_get_innerEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>* const& Cysharp::Threading::Tasks::TextSelectionEventConverter::__cordl_internal_get_innerEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerEvent;
}
constexpr void Cysharp::Threading::Tasks::TextSelectionEventConverter::__cordl_internal_set_innerEvent(::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerEvent = value;
}
constexpr ::UnityEngine::Events::UnityAction_3<::StringW,int32_t,int32_t>*& Cysharp::Threading::Tasks::TextSelectionEventConverter::__cordl_internal_get_invokeDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invokeDelegate;
}
constexpr ::UnityEngine::Events::UnityAction_3<::StringW,int32_t,int32_t>* const& Cysharp::Threading::Tasks::TextSelectionEventConverter::__cordl_internal_get_invokeDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invokeDelegate;
}
constexpr void Cysharp::Threading::Tasks::TextSelectionEventConverter::__cordl_internal_set_invokeDelegate(::UnityEngine::Events::UnityAction_3<::StringW,int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invokeDelegate = value;
}
inline void Cysharp::Threading::Tasks::TextSelectionEventConverter::_ctor(::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*  unityEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextSelectionEventConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unityEvent);
}
inline void Cysharp::Threading::Tasks::TextSelectionEventConverter::InvokeCore(::StringW  item1, int32_t  item2, int32_t  item3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextSelectionEventConverter*>(),
                        {"InvokeCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item1, item2, item3);
}
inline void Cysharp::Threading::Tasks::TextSelectionEventConverter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextSelectionEventConverter*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::TextSelectionEventConverter* Cysharp::Threading::Tasks::TextSelectionEventConverter::New_ctor(::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*  unityEvent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::TextSelectionEventConverter*>(unityEvent));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::TextSelectionEventConverter::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::TextSelectionEventConverter::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::TextSelectionEventConverter::TextSelectionEventConverter()   {
}
