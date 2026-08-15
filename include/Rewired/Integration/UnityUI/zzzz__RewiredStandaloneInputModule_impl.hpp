#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/RewiredStandaloneInputModule.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredPointerInputModule_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredStandaloneInputModule_def.hpp"
#include "Rewired/Components/zzzz__PlayerMouse_def.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredPointerInputModule_def.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredStandaloneInputModule_def.hpp"
#include "Rewired/zzzz__InputManager_Base_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803abf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::*)(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803abf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::Clone)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803abd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::__cordl_internal_get_playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr int32_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::__cordl_internal_get_playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::__cordl_internal_set_playerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerId = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*& Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::__cordl_internal_get_playerMice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMice;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>* const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::__cordl_internal_get_playerMice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMice;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::__cordl_internal_set_playerMice(::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMice = value;
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::_ctor(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>());
}
inline ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::New_ctor(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*>(other));
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::RewiredStandaloneInputModule_PlayerSetting()   {
}
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_RewiredInputManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::InputManager_Base> (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_RewiredInputManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_RewiredInputManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_RewiredInputManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::Rewired::InputManager_Base*)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_RewiredInputManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803117a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_RewiredInputManager", {}, {::i2c::type_of<::Rewired::InputManager_Base*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_UseAllRewiredGamePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_UseAllRewiredGamePlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_UseAllRewiredGamePlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_UseAllRewiredGamePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_UseAllRewiredGamePlayers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b3330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_UseAllRewiredGamePlayers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_UseRewiredSystemPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_UseRewiredSystemPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_UseRewiredSystemPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_UseRewiredSystemPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_UseRewiredSystemPlayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b3360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_UseRewiredSystemPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_RewiredPlayerIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_RewiredPlayerIds)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803b2cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_RewiredPlayerIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_RewiredPlayerIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::ArrayW<int32_t>)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_RewiredPlayerIds)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803b3190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_RewiredPlayerIds", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_UsePlayingPlayersOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_UsePlayingPlayersOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_UsePlayingPlayersOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_UsePlayingPlayersOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_UsePlayingPlayersOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_UsePlayingPlayersOnly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_PlayerMice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>* (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_PlayerMice)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803b2c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_PlayerMice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_PlayerMice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_PlayerMice)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803b30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_PlayerMice", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_MoveOneElementPerAxisPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_MoveOneElementPerAxisPress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_MoveOneElementPerAxisPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_MoveOneElementPerAxisPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_MoveOneElementPerAxisPress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_MoveOneElementPerAxisPress", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_allowMouseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_allowMouseInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_allowMouseInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_allowMouseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_allowMouseInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_allowMouseInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_allowMouseInputIfTouchSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_allowMouseInputIfTouchSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_allowMouseInputIfTouchSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_allowMouseInputIfTouchSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_allowMouseInputIfTouchSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_allowMouseInputIfTouchSupported", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_allowTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_allowTouchInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_allowTouchInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_allowTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_allowTouchInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_allowTouchInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_deselectIfBackgroundClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_deselectIfBackgroundClicked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_deselectIfBackgroundClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_deselectIfBackgroundClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_deselectIfBackgroundClicked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_deselectIfBackgroundClicked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_deselectBeforeSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_deselectBeforeSelecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_deselectBeforeSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_deselectBeforeSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_deselectBeforeSelecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_deselectBeforeSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_SetActionsById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_SetActionsById)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_SetActionsById", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_SetActionsById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_SetActionsById)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b3230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_SetActionsById", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_HorizontalActionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_HorizontalActionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_HorizontalActionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_HorizontalActionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_HorizontalActionId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803b3000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_HorizontalActionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_VerticalActionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_VerticalActionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_VerticalActionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_VerticalActionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_VerticalActionId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803b3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_VerticalActionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_SubmitActionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_SubmitActionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_SubmitActionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_SubmitActionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_SubmitActionId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803b3250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_SubmitActionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_CancelActionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_CancelActionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_CancelActionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_CancelActionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_CancelActionId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803b2f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_CancelActionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_isMouseSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_isMouseSupported)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803b2df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_isTouchAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_isTouchAllowed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_isTouchAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_allowActivationOnMobileDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_allowActivationOnMobileDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_allowActivationOnMobileDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_allowActivationOnMobileDevice", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_forceModuleActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_forceModuleActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_forceModuleActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_forceModuleActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_forceModuleActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_forceModuleActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_inputActionsPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_inputActionsPerSecond", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_inputActionsPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(float_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_inputActionsPerSecond", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_repeatDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_repeatDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_repeatDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_repeatDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(float_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_repeatDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_repeatDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_horizontalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_horizontalAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_horizontalAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_horizontalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::StringW)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_horizontalAxis)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803b3570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_horizontalAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_verticalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_verticalAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803223b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_verticalAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_verticalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::StringW)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_verticalAxis)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803b36f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_verticalAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_submitButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_submitButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_submitButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_submitButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::StringW)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_submitButton)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803b3640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_submitButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.get_cancelButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_cancelButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_cancelButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.set_cancelButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::StringW)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_cancelButton)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803b34a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_cancelButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803b2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803ae9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::UpdateModule)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803b29a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.IsModuleSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::IsModuleSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ShouldActivateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ShouldActivateModule)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x1803b20f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ActivateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803ae950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.DeactivateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::DeactivateModule)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803ac560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::Process)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1803b0f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ProcessTouchEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessTouchEvents)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x1803b02d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessTouchEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ProcessTouchPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, bool, bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessTouchPress)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x1803b0a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessTouchPress", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.SendSubmitEventToSelectedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SendSubmitEventToSelectedObject)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803b15b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SendSubmitEventToSelectedObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.GetRawMoveVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetRawMoveVector)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1803af120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetRawMoveVector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.SendMoveEventToSelectedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SendMoveEventToSelectedObject)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1803b1250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SendMoveEventToSelectedObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.CheckButtonOrKeyMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::by_ref<bool>, ::by_ref<bool>)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::CheckButtonOrKeyMovement)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803aeab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"CheckButtonOrKeyMovement", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ProcessMouseEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessMouseEvents)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803afd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessMouseEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ProcessMouseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(int32_t, int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessMouseEvent)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803af9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessMouseEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.SendUpdateEventToSelectedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803b1780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SendUpdateEventToSelectedObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ProcessMousePress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1803afe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessMousePress", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.HandleMouseTouchDeselectionOnSelectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::HandleMouseTouchDeselectionOnSelectionChanged)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803af4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"HandleMouseTouchDeselectionOnSelectionChanged", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803af870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ShouldIgnoreEventsOnNoFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ShouldIgnoreEventsOnNoFocus)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803b2930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ShouldIgnoreEventsOnNoFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803af880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.IsDefaultPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::IsDefaultPlayer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803af700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.InitializeRewired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::InitializeRewired)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803af5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"InitializeRewired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.SetupRewiredVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SetupRewiredVars)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x1803b1c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SetupRewiredVars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.SetUpRewiredPlayerMice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SetUpRewiredPlayerMice)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803b1b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SetUpRewiredPlayerMice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.SetUpRewiredActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SetUpRewiredActions)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1803b1850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SetUpRewiredActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::Rewired::Player*, int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetButton)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803aef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetButton", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::Rewired::Player*, int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetButtonDown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803aeee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetButtonDown", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.GetNegativeButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::Rewired::Player*, int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetNegativeButton)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803af0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetNegativeButton", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.GetNegativeButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::Rewired::Player*, int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetNegativeButtonDown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803af0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetNegativeButtonDown", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(::Rewired::Player*, int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetAxis)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803aeea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetAxis", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.CheckEditorRecompile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::CheckEditorRecompile)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803aec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"CheckEditorRecompile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.OnEditorRecompile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnEditorRecompile)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803af940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"OnEditorRecompile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.ClearRewiredVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ClearRewiredVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803aecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ClearRewiredVars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.DidAnyMouseMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::DidAnyMouseMove)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803aed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"DidAnyMouseMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.GetMouseButtonDownOnAnyMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetMouseButtonDownOnAnyMouse)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803aef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetMouseButtonDownOnAnyMouse", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.OnRewiredInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnRewiredInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803af9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"OnRewiredInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule.OnRewiredShutDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnRewiredShutDown)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803aecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"OnRewiredShutDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Rewired::InputManager_Base>& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_rewiredInputManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredInputManager;
}
constexpr ::UnityW<::Rewired::InputManager_Base> const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_rewiredInputManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredInputManager;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_rewiredInputManager(::UnityW<::Rewired::InputManager_Base>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rewiredInputManager = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_useAllRewiredGamePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useAllRewiredGamePlayers;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_useAllRewiredGamePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useAllRewiredGamePlayers;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_useAllRewiredGamePlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useAllRewiredGamePlayers = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_useRewiredSystemPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRewiredSystemPlayer;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_useRewiredSystemPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRewiredSystemPlayer;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_useRewiredSystemPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRewiredSystemPlayer = value;
}
constexpr ::ArrayW<int32_t>& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_rewiredPlayerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredPlayerIds;
}
constexpr ::ArrayW<int32_t> const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_rewiredPlayerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredPlayerIds;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_rewiredPlayerIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rewiredPlayerIds = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_usePlayingPlayersOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePlayingPlayersOnly;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_usePlayingPlayersOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePlayingPlayersOnly;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_usePlayingPlayersOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usePlayingPlayersOnly = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_playerMice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMice;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>* const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_playerMice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMice;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_playerMice(::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMice = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_moveOneElementPerAxisPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveOneElementPerAxisPress;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_moveOneElementPerAxisPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveOneElementPerAxisPress;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_moveOneElementPerAxisPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveOneElementPerAxisPress = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_setActionsById()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setActionsById;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_setActionsById() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setActionsById;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_setActionsById(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setActionsById = value;
}
constexpr int32_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_horizontalActionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalActionId;
}
constexpr int32_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_horizontalActionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalActionId;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_horizontalActionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalActionId = value;
}
constexpr int32_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_verticalActionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalActionId;
}
constexpr int32_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_verticalActionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalActionId;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_verticalActionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalActionId = value;
}
constexpr int32_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_submitActionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitActionId;
}
constexpr int32_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_submitActionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitActionId;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_submitActionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submitActionId = value;
}
constexpr int32_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_cancelActionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelActionId;
}
constexpr int32_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_cancelActionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelActionId;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_cancelActionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelActionId = value;
}
constexpr ::StringW& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_HorizontalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalAxis;
}
constexpr ::StringW const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_HorizontalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalAxis;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_HorizontalAxis(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HorizontalAxis = value;
}
constexpr ::StringW& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_VerticalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalAxis;
}
constexpr ::StringW const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_VerticalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalAxis;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_VerticalAxis(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VerticalAxis = value;
}
constexpr ::StringW& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_SubmitButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubmitButton;
}
constexpr ::StringW const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_SubmitButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubmitButton;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_SubmitButton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SubmitButton = value;
}
constexpr ::StringW& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_CancelButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancelButton;
}
constexpr ::StringW const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_CancelButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancelButton;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_CancelButton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CancelButton = value;
}
constexpr float_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_InputActionsPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionsPerSecond;
}
constexpr float_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_InputActionsPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionsPerSecond;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_InputActionsPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputActionsPerSecond = value;
}
constexpr float_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_RepeatDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RepeatDelay;
}
constexpr float_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_RepeatDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RepeatDelay;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_RepeatDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RepeatDelay = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_allowMouseInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allowMouseInput;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_allowMouseInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allowMouseInput;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_allowMouseInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_allowMouseInput = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_allowMouseInputIfTouchSupported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allowMouseInputIfTouchSupported;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_allowMouseInputIfTouchSupported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allowMouseInputIfTouchSupported;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_allowMouseInputIfTouchSupported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_allowMouseInputIfTouchSupported = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_allowTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allowTouchInput;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_allowTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allowTouchInput;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_allowTouchInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_allowTouchInput = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_deselectIfBackgroundClicked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_deselectIfBackgroundClicked;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_deselectIfBackgroundClicked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_deselectIfBackgroundClicked;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_deselectIfBackgroundClicked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_deselectIfBackgroundClicked = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_deselectBeforeSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_deselectBeforeSelecting;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_deselectBeforeSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_deselectBeforeSelecting;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_deselectBeforeSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_deselectBeforeSelecting = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_ForceModuleActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForceModuleActive;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_ForceModuleActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForceModuleActive;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_ForceModuleActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ForceModuleActive = value;
}
constexpr ::ArrayW<int32_t>& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_playerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIds;
}
constexpr ::ArrayW<int32_t> const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_playerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIds;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_playerIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerIds = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_recompiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recompiling;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_recompiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recompiling;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_recompiling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recompiling = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_isTouchSupported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTouchSupported;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_isTouchSupported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTouchSupported;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_isTouchSupported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTouchSupported = value;
}
constexpr double_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_PrevActionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevActionTime;
}
constexpr double_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_PrevActionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevActionTime;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_PrevActionTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevActionTime = value;
}
constexpr ::UnityEngine::Vector2& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_LastMoveVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMoveVector;
}
constexpr ::UnityEngine::Vector2 const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_LastMoveVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMoveVector;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastMoveVector = value;
}
constexpr int32_t& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_ConsecutiveMoveCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConsecutiveMoveCount;
}
constexpr int32_t const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_ConsecutiveMoveCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConsecutiveMoveCount;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_ConsecutiveMoveCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConsecutiveMoveCount = value;
}
constexpr bool& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_HasFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasFocus;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_get_m_HasFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasFocus;
}
constexpr void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::__cordl_internal_set_m_HasFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasFocus = value;
}
inline ::UnityW<::Rewired::InputManager_Base> Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_RewiredInputManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_RewiredInputManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::InputManager_Base>>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_RewiredInputManager(::Rewired::InputManager_Base*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_RewiredInputManager", {}, {::i2c::type_of<::Rewired::InputManager_Base*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_UseAllRewiredGamePlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_UseAllRewiredGamePlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_UseAllRewiredGamePlayers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_UseAllRewiredGamePlayers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_UseRewiredSystemPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_UseRewiredSystemPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_UseRewiredSystemPlayer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_UseRewiredSystemPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_RewiredPlayerIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_RewiredPlayerIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_RewiredPlayerIds(::ArrayW<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_RewiredPlayerIds", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_UsePlayingPlayersOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_UsePlayingPlayersOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_UsePlayingPlayersOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_UsePlayingPlayersOnly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>* Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_PlayerMice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_PlayerMice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_PlayerMice(::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_PlayerMice", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_MoveOneElementPerAxisPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_MoveOneElementPerAxisPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_MoveOneElementPerAxisPress(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_MoveOneElementPerAxisPress", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_allowMouseInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_allowMouseInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_allowMouseInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_allowMouseInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_allowMouseInputIfTouchSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_allowMouseInputIfTouchSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_allowMouseInputIfTouchSupported(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_allowMouseInputIfTouchSupported", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_allowTouchInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_allowTouchInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_allowTouchInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_allowTouchInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_deselectIfBackgroundClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_deselectIfBackgroundClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_deselectIfBackgroundClicked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_deselectIfBackgroundClicked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_deselectBeforeSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_deselectBeforeSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_deselectBeforeSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_deselectBeforeSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_SetActionsById()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_SetActionsById", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_SetActionsById(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_SetActionsById", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_HorizontalActionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_HorizontalActionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_HorizontalActionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_HorizontalActionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_VerticalActionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_VerticalActionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_VerticalActionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_VerticalActionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_SubmitActionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_SubmitActionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_SubmitActionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_SubmitActionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_CancelActionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_CancelActionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_CancelActionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_CancelActionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_isMouseSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_isTouchAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_isTouchAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_allowActivationOnMobileDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_allowActivationOnMobileDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_allowActivationOnMobileDevice(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_allowActivationOnMobileDevice", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_forceModuleActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_forceModuleActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_forceModuleActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_forceModuleActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_inputActionsPerSecond()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_inputActionsPerSecond", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_inputActionsPerSecond(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_inputActionsPerSecond", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_repeatDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_repeatDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_repeatDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_repeatDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_horizontalAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_horizontalAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_horizontalAxis(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_horizontalAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_verticalAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_verticalAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_verticalAxis(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_verticalAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_submitButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_submitButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_submitButton(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_submitButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Integration::UnityUI::RewiredStandaloneInputModule::get_cancelButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"get_cancelButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::set_cancelButton(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"set_cancelButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::IsModuleSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ShouldActivateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ActivateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::DeactivateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::Process()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessTouchEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessTouchEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData*  pointerEvent, bool  pressed, bool  released)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessTouchPress", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent, pressed, released);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SendSubmitEventToSelectedObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SendSubmitEventToSelectedObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetRawMoveVector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetRawMoveVector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SendMoveEventToSelectedObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SendMoveEventToSelectedObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::CheckButtonOrKeyMovement(::by_ref<bool>  downHorizontal, ::by_ref<bool>  downVertical)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"CheckButtonOrKeyMovement", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, downHorizontal, downVertical);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessMouseEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessMouseEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessMouseEvent(int32_t  playerId, int32_t  pointerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessMouseEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, pointerIndex);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SendUpdateEventToSelectedObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SendUpdateEventToSelectedObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ProcessMousePress(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ProcessMousePress", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::HandleMouseTouchDeselectionOnSelectionChanged(::UnityEngine::GameObject*  currentOverGo, ::UnityEngine::EventSystems::BaseEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"HandleMouseTouchDeselectionOnSelectionChanged", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentOverGo, pointerEvent);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ShouldIgnoreEventsOnNoFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ShouldIgnoreEventsOnNoFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::IsDefaultPlayer(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::InitializeRewired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"InitializeRewired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SetupRewiredVars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SetupRewiredVars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SetUpRewiredPlayerMice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SetUpRewiredPlayerMice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::SetUpRewiredActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"SetUpRewiredActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetButton(::Rewired::Player*  player, int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetButton", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, actionId);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetButtonDown(::Rewired::Player*  player, int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetButtonDown", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, actionId);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetNegativeButton(::Rewired::Player*  player, int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetNegativeButton", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, actionId);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetNegativeButtonDown(::Rewired::Player*  player, int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetNegativeButtonDown", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, actionId);
}
inline float_t Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetAxis(::Rewired::Player*  player, int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetAxis", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, player, actionId);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::CheckEditorRecompile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"CheckEditorRecompile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnEditorRecompile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"OnEditorRecompile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::ClearRewiredVars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"ClearRewiredVars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::DidAnyMouseMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"DidAnyMouseMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetMouseButtonDownOnAnyMouse(int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"GetMouseButtonDownOnAnyMouse", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonIndex);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnRewiredInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"OnRewiredInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredStandaloneInputModule::OnRewiredShutDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>(),
                        {"OnRewiredShutDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule* Rewired::Integration::UnityUI::RewiredStandaloneInputModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*>());
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::RewiredStandaloneInputModule()   {
}
