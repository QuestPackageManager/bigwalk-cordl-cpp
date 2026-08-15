#pragma once
// IWYU pragma private; include "GlobalNamespace/InputEvent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InputEvent_def.hpp"
#include "GlobalNamespace/zzzz__InputEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputEvent_InputEventStruct.CheckInputTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEvent_InputEventStruct::*)()>(&::GlobalNamespace::InputEvent_InputEventStruct::CheckInputTrigger)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18037df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEvent_InputEventStruct>(),
                        {"CheckInputTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputEvent_InputEventStruct::CheckInputTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEvent_InputEventStruct>(),
                        {"CheckInputTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "action", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onInputTrigger", ty: "::UnityEngine::Events::UnityEvent*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InputEvent_InputEventStruct::InputEvent_InputEventStruct(int32_t  action, ::UnityEngine::Events::UnityEvent*  onInputTrigger) noexcept  {
this->action = action;
this->onInputTrigger = onInputTrigger;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputEvent_InputEventStruct::InputEvent_InputEventStruct()   {
}
//  Writing Method size for method: ::GlobalNamespace::InputEvent.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEvent::*)()>(&::GlobalNamespace::InputEvent::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18037e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEvent*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEvent::*)()>(&::GlobalNamespace::InputEvent::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18037e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::InputEvent_InputEventStruct>*& GlobalNamespace::InputEvent::__cordl_internal_get_inputEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputEvents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::InputEvent_InputEventStruct>* const& GlobalNamespace::InputEvent::__cordl_internal_get_inputEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputEvents;
}
constexpr void GlobalNamespace::InputEvent::__cordl_internal_set_inputEvents(::System::Collections::Generic::List_1<::GlobalNamespace::InputEvent_InputEventStruct>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputEvents = value;
}
inline void GlobalNamespace::InputEvent::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEvent*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InputEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InputEvent* GlobalNamespace::InputEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InputEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputEvent::InputEvent()   {
}
