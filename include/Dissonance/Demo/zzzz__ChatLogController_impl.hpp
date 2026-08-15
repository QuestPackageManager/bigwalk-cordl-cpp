#pragma once
// IWYU pragma private; include "Dissonance/Demo/ChatLogController.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Demo/zzzz__ChatLogController_def.hpp"
#include "Dissonance/Demo/zzzz__ChatLogController_def.hpp"
#include "Dissonance/Networking/zzzz__TextMessage_def.hpp"
#include "Dissonance/zzzz__DissonanceComms_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)()>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::get_Transform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry.get_Object
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)()>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::get_Object)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c6550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"get_Object", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry.get_IsTransitioningOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)()>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::get_IsTransitioningOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"get_IsTransitioningOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry.set_IsTransitioningOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)(bool)>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::set_IsTransitioningOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"set_IsTransitioningOut", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry.get_IsTransitionComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)()>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::get_IsTransitionComplete)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"get_IsTransitionComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry.set_IsTransitionComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)(bool)>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::set_IsTransitionComplete)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"set_IsTransitionComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)(::UnityEngine::UI::Text*)>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UI::Text*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry.FadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)()>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::FadeOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180376410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"FadeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController_ChatLogEntry.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController_ChatLogEntry::*)()>(&::Dissonance::Demo::ChatLogController_ChatLogEntry::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805c63c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__txt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____txt;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__txt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____txt;
}
constexpr void Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_set__txt(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____txt = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_set__transform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transform = value;
}
constexpr float_t& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__transitionProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionProgress;
}
constexpr float_t const& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__transitionProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionProgress;
}
constexpr void Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_set__transitionProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionProgress = value;
}
constexpr bool& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__IsTransitioningOut_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsTransitioningOut_k__BackingField;
}
constexpr bool const& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__IsTransitioningOut_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsTransitioningOut_k__BackingField;
}
constexpr void Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_set__IsTransitioningOut_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsTransitioningOut_k__BackingField = value;
}
constexpr bool& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__IsTransitionComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsTransitionComplete_k__BackingField;
}
constexpr bool const& Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_get__IsTransitionComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsTransitionComplete_k__BackingField;
}
constexpr void Dissonance::Demo::ChatLogController_ChatLogEntry::__cordl_internal_set__IsTransitionComplete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsTransitionComplete_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::RectTransform> Dissonance::Demo::ChatLogController_ChatLogEntry::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Dissonance::Demo::ChatLogController_ChatLogEntry::get_Object()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"get_Object", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline bool Dissonance::Demo::ChatLogController_ChatLogEntry::get_IsTransitioningOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"get_IsTransitioningOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Demo::ChatLogController_ChatLogEntry::set_IsTransitioningOut(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"set_IsTransitioningOut", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Demo::ChatLogController_ChatLogEntry::get_IsTransitionComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"get_IsTransitionComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Demo::ChatLogController_ChatLogEntry::set_IsTransitionComplete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"set_IsTransitionComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Demo::ChatLogController_ChatLogEntry::_ctor(::UnityEngine::UI::Text*  txt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UI::Text*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, txt);
}
inline void Dissonance::Demo::ChatLogController_ChatLogEntry::FadeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"FadeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::ChatLogController_ChatLogEntry::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::ChatLogController_ChatLogEntry* Dissonance::Demo::ChatLogController_ChatLogEntry::New_ctor(::UnityEngine::UI::Text*  txt)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::ChatLogController_ChatLogEntry*>(txt));
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::ChatLogController_ChatLogEntry::ChatLogController_ChatLogEntry()   {
}
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController.get_ForceShow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Demo::ChatLogController::*)()>(&::Dissonance::Demo::ChatLogController::get_ForceShow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"get_ForceShow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController.set_ForceShow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController::*)(bool)>(&::Dissonance::Demo::ChatLogController::set_ForceShow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"set_ForceShow", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController::*)()>(&::Dissonance::Demo::ChatLogController::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805c5f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController.OnMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController::*)(::Dissonance::Networking::TextMessage)>(&::Dissonance::Demo::ChatLogController::OnMessageReceived)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805c5e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"OnMessageReceived", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController.AddMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController::*)(::StringW, ::UnityEngine::Color)>(&::Dissonance::Demo::ChatLogController::AddMessage)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1805c5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"AddMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController::*)()>(&::Dissonance::Demo::ChatLogController::Update)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1805c60d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController.ShowFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController::*)(::System::TimeSpan)>(&::Dissonance::Demo::ChatLogController::ShowFor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c5ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"ShowFor", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatLogController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatLogController::*)()>(&::Dissonance::Demo::ChatLogController::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c6370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Dissonance::DissonanceComms>& Dissonance::Demo::ChatLogController::__cordl_internal_get_Comms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Comms;
}
constexpr ::UnityW<::Dissonance::DissonanceComms> const& Dissonance::Demo::ChatLogController::__cordl_internal_get_Comms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Comms;
}
constexpr void Dissonance::Demo::ChatLogController::__cordl_internal_set_Comms(::UnityW<::Dissonance::DissonanceComms>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Comms = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Dissonance::Demo::ChatLogController::__cordl_internal_get__textPrototype()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textPrototype;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Dissonance::Demo::ChatLogController::__cordl_internal_get__textPrototype() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textPrototype;
}
constexpr void Dissonance::Demo::ChatLogController::__cordl_internal_set__textPrototype(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textPrototype = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& Dissonance::Demo::ChatLogController::__cordl_internal_get__canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& Dissonance::Demo::ChatLogController::__cordl_internal_get__canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr void Dissonance::Demo::ChatLogController::__cordl_internal_set__canvas(::UnityW<::UnityEngine::CanvasGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvas = value;
}
constexpr float_t& Dissonance::Demo::ChatLogController::__cordl_internal_get__heightLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightLimit;
}
constexpr float_t const& Dissonance::Demo::ChatLogController::__cordl_internal_get__heightLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightLimit;
}
constexpr void Dissonance::Demo::ChatLogController::__cordl_internal_set__heightLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heightLimit = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Demo::ChatLogController_ChatLogEntry*>*& Dissonance::Demo::ChatLogController::__cordl_internal_get__entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Demo::ChatLogController_ChatLogEntry*>* const& Dissonance::Demo::ChatLogController::__cordl_internal_get__entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
constexpr void Dissonance::Demo::ChatLogController::__cordl_internal_set__entries(::System::Collections::Generic::Queue_1<::Dissonance::Demo::ChatLogController_ChatLogEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entries = value;
}
constexpr bool& Dissonance::Demo::ChatLogController::__cordl_internal_get__ForceShow_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceShow_k__BackingField;
}
constexpr bool const& Dissonance::Demo::ChatLogController::__cordl_internal_get__ForceShow_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceShow_k__BackingField;
}
constexpr void Dissonance::Demo::ChatLogController::__cordl_internal_set__ForceShow_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceShow_k__BackingField = value;
}
constexpr ::System::DateTime& Dissonance::Demo::ChatLogController::__cordl_internal_get__fadeOutStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutStartTime;
}
constexpr ::System::DateTime const& Dissonance::Demo::ChatLogController::__cordl_internal_get__fadeOutStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutStartTime;
}
constexpr void Dissonance::Demo::ChatLogController::__cordl_internal_set__fadeOutStartTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOutStartTime = value;
}
inline bool Dissonance::Demo::ChatLogController::get_ForceShow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"get_ForceShow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Demo::ChatLogController::set_ForceShow(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"set_ForceShow", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Demo::ChatLogController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::ChatLogController::OnMessageReceived(::Dissonance::Networking::TextMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"OnMessageReceived", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Dissonance::Demo::ChatLogController::AddMessage(::StringW  message, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"AddMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, color);
}
inline void Dissonance::Demo::ChatLogController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::ChatLogController::ShowFor(::System::TimeSpan  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {"ShowFor", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void Dissonance::Demo::ChatLogController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatLogController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::ChatLogController* Dissonance::Demo::ChatLogController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::ChatLogController*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::ChatLogController::ChatLogController()   {
}
