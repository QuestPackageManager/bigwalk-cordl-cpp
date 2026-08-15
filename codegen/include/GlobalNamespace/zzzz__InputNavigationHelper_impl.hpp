#pragma once
// IWYU pragma private; include "GlobalNamespace/InputNavigationHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InputNavigationHelper_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputNavigationHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputNavigationHelper::*)()>(&::GlobalNamespace::InputNavigationHelper::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180421000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputNavigationHelper.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputNavigationHelper::*)()>(&::GlobalNamespace::InputNavigationHelper::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804233f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputNavigationHelper.OnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputNavigationHelper::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::InputNavigationHelper::OnSelect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {"OnSelect", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputNavigationHelper.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputNavigationHelper::*)()>(&::GlobalNamespace::InputNavigationHelper::LateUpdate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804232b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputNavigationHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputNavigationHelper::*)()>(&::GlobalNamespace::InputNavigationHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::InputNavigationHelper::__cordl_internal_get_inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::InputNavigationHelper::__cordl_internal_get_inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr void GlobalNamespace::InputNavigationHelper::__cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputField = value;
}
constexpr bool& GlobalNamespace::InputNavigationHelper::__cordl_internal_get_shouldClear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldClear;
}
constexpr bool const& GlobalNamespace::InputNavigationHelper::__cordl_internal_get_shouldClear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldClear;
}
constexpr void GlobalNamespace::InputNavigationHelper::__cordl_internal_set_shouldClear(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldClear = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::InputNavigationHelper::__cordl_internal_get_unFocusedBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unFocusedBack;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::InputNavigationHelper::__cordl_internal_get_unFocusedBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unFocusedBack;
}
constexpr void GlobalNamespace::InputNavigationHelper::__cordl_internal_set_unFocusedBack(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unFocusedBack = value;
}
inline void GlobalNamespace::InputNavigationHelper::setStaticF_ShouldActivateField(::System::Reflection::FieldInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::FieldInfo*, "ShouldActivateField", ::GlobalNamespace::InputNavigationHelper*>(std::forward<::System::Reflection::FieldInfo*>(value));
}
inline ::System::Reflection::FieldInfo* GlobalNamespace::InputNavigationHelper::getStaticF_ShouldActivateField()  {
return ::cordl_internals::getStaticField<::System::Reflection::FieldInfo*, "ShouldActivateField", ::GlobalNamespace::InputNavigationHelper*>();
}
inline void GlobalNamespace::InputNavigationHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InputNavigationHelper::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InputNavigationHelper::OnSelect(::UnityEngine::EventSystems::BaseEventData*  baseEventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {"OnSelect", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseEventData);
}
inline void GlobalNamespace::InputNavigationHelper::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InputNavigationHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputNavigationHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InputNavigationHelper* GlobalNamespace::InputNavigationHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InputNavigationHelper*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr  GlobalNamespace::InputNavigationHelper::operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* GlobalNamespace::InputNavigationHelper::i___UnityEngine__EventSystems__ISelectHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  GlobalNamespace::InputNavigationHelper::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::InputNavigationHelper::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputNavigationHelper::InputNavigationHelper()   {
}
