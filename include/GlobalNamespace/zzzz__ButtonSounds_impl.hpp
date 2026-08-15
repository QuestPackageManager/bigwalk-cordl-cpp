#pragma once
// IWYU pragma private; include "GlobalNamespace/ButtonSounds.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ButtonSounds_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ButtonSounds.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ButtonSounds::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::ButtonSounds::OnPointerEnter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18032ae30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ButtonSounds*>(),
                    {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ButtonSounds.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ButtonSounds::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::ButtonSounds::OnPointerExit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ButtonSounds*>(),
                    {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ButtonSounds.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ButtonSounds::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::ButtonSounds::OnPointerDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18032ad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ButtonSounds*>(),
                    {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ButtonSounds.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ButtonSounds::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::ButtonSounds::OnPointerUp)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18032aec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ButtonSounds*>(),
                    {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ButtonSounds.OnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ButtonSounds::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::ButtonSounds::OnSelect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18032afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ButtonSounds*>(),
                    {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ButtonSounds.OnSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ButtonSounds::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::ButtonSounds::OnSubmit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18032b050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ButtonSounds*>(),
                    {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ButtonSounds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ButtonSounds::*)()>(&::GlobalNamespace::ButtonSounds::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ButtonSounds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ButtonSounds::__cordl_internal_get_Hover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hover;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ButtonSounds::__cordl_internal_get_Hover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hover;
}
constexpr void GlobalNamespace::ButtonSounds::__cordl_internal_set_Hover(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hover = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ButtonSounds::__cordl_internal_get_Up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Up;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ButtonSounds::__cordl_internal_get_Up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Up;
}
constexpr void GlobalNamespace::ButtonSounds::__cordl_internal_set_Up(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Up = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ButtonSounds::__cordl_internal_get_Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Down;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ButtonSounds::__cordl_internal_get_Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Down;
}
constexpr void GlobalNamespace::ButtonSounds::__cordl_internal_set_Down(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Down = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ButtonSounds::__cordl_internal_get_Sumbit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sumbit;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ButtonSounds::__cordl_internal_get_Sumbit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sumbit;
}
constexpr void GlobalNamespace::ButtonSounds::__cordl_internal_set_Sumbit(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sumbit = value;
}
inline void GlobalNamespace::ButtonSounds::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::ButtonSounds::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::ButtonSounds::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::ButtonSounds::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::ButtonSounds::OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::ButtonSounds::OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ButtonSounds*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::ButtonSounds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ButtonSounds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ButtonSounds* GlobalNamespace::ButtonSounds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ButtonSounds*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  GlobalNamespace::ButtonSounds::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* GlobalNamespace::ButtonSounds::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  GlobalNamespace::ButtonSounds::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::ButtonSounds::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  GlobalNamespace::ButtonSounds::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* GlobalNamespace::ButtonSounds::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  GlobalNamespace::ButtonSounds::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* GlobalNamespace::ButtonSounds::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  GlobalNamespace::ButtonSounds::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* GlobalNamespace::ButtonSounds::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr  GlobalNamespace::ButtonSounds::operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* GlobalNamespace::ButtonSounds::i___UnityEngine__EventSystems__ISelectHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr  GlobalNamespace::ButtonSounds::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* GlobalNamespace::ButtonSounds::i___UnityEngine__EventSystems__ISubmitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ButtonSounds::ButtonSounds()   {
}
