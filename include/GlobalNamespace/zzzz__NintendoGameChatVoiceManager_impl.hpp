#pragma once
// IWYU pragma private; include "GlobalNamespace/NintendoGameChatVoiceManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NintendoGameChatVoiceManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NintendoGameChatVoiceManager.add_OnGameChatStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::GlobalNamespace::NintendoGameChatVoiceManager::add_OnGameChatStatusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181acbc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NintendoGameChatVoiceManager*>(),
                        {"add_OnGameChatStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NintendoGameChatVoiceManager.remove_OnGameChatStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::GlobalNamespace::NintendoGameChatVoiceManager::remove_OnGameChatStatusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181acbd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NintendoGameChatVoiceManager*>(),
                        {"remove_OnGameChatStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NintendoGameChatVoiceManager.get_GameChatStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::NintendoGameChatVoiceManager::get_GameChatStatus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181acbd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NintendoGameChatVoiceManager*>(),
                        {"get_GameChatStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NintendoGameChatVoiceManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NintendoGameChatVoiceManager::*)()>(&::GlobalNamespace::NintendoGameChatVoiceManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NintendoGameChatVoiceManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::NintendoGameChatVoiceManager::__cordl_internal_get__lastChatStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastChatStatus;
}
constexpr bool const& GlobalNamespace::NintendoGameChatVoiceManager::__cordl_internal_get__lastChatStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastChatStatus;
}
constexpr void GlobalNamespace::NintendoGameChatVoiceManager::__cordl_internal_set__lastChatStatus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastChatStatus = value;
}
inline void GlobalNamespace::NintendoGameChatVoiceManager::setStaticF_OnGameChatStatusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "OnGameChatStatusChanged", ::GlobalNamespace::NintendoGameChatVoiceManager*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GlobalNamespace::NintendoGameChatVoiceManager::getStaticF_OnGameChatStatusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "OnGameChatStatusChanged", ::GlobalNamespace::NintendoGameChatVoiceManager*>();
}
inline void GlobalNamespace::NintendoGameChatVoiceManager::setStaticF__instance(::UnityW<::GlobalNamespace::NintendoGameChatVoiceManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::NintendoGameChatVoiceManager>, "_instance", ::GlobalNamespace::NintendoGameChatVoiceManager*>(std::forward<::UnityW<::GlobalNamespace::NintendoGameChatVoiceManager>>(value));
}
inline ::UnityW<::GlobalNamespace::NintendoGameChatVoiceManager> GlobalNamespace::NintendoGameChatVoiceManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::NintendoGameChatVoiceManager>, "_instance", ::GlobalNamespace::NintendoGameChatVoiceManager*>();
}
inline void GlobalNamespace::NintendoGameChatVoiceManager::add_OnGameChatStatusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NintendoGameChatVoiceManager*>(),
                        {"add_OnGameChatStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::NintendoGameChatVoiceManager::remove_OnGameChatStatusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NintendoGameChatVoiceManager*>(),
                        {"remove_OnGameChatStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::NintendoGameChatVoiceManager::get_GameChatStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NintendoGameChatVoiceManager*>(),
                        {"get_GameChatStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NintendoGameChatVoiceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NintendoGameChatVoiceManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NintendoGameChatVoiceManager* GlobalNamespace::NintendoGameChatVoiceManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NintendoGameChatVoiceManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NintendoGameChatVoiceManager::NintendoGameChatVoiceManager()   {
}
