#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SteamManager_def.hpp"
#include "Steamworks/zzzz__SteamAPIWarningMessageHook_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SteamManager> (*)()>(&::GlobalNamespace::SteamManager::get_Instance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18039e730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamManager.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SteamManager::get_Initialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18039e6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamManager.SteamAPIDebugTextHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Text::StringBuilder*)>(&::GlobalNamespace::SteamManager::SteamAPIDebugTextHook)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {"SteamAPIDebugTextHook", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamManager.InitOnPlayMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SteamManager::InitOnPlayMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18039e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {"InitOnPlayMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamManager::*)()>(&::GlobalNamespace::SteamManager::Awake)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18039e330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                    {::i2c::class_of<::GlobalNamespace::SteamManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamManager::*)()>(&::GlobalNamespace::SteamManager::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18039e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                    {::i2c::class_of<::GlobalNamespace::SteamManager*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamManager::*)()>(&::GlobalNamespace::SteamManager::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18039e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                    {::i2c::class_of<::GlobalNamespace::SteamManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamManager::*)()>(&::GlobalNamespace::SteamManager::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                    {::i2c::class_of<::GlobalNamespace::SteamManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamManager::*)()>(&::GlobalNamespace::SteamManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SteamManager::__cordl_internal_get_m_bInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bInitialized;
}
constexpr bool const& GlobalNamespace::SteamManager::__cordl_internal_get_m_bInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bInitialized;
}
constexpr void GlobalNamespace::SteamManager::__cordl_internal_set_m_bInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bInitialized = value;
}
constexpr ::Steamworks::SteamAPIWarningMessageHook_t*& GlobalNamespace::SteamManager::__cordl_internal_get_m_SteamAPIWarningMessageHook()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SteamAPIWarningMessageHook;
}
constexpr ::Steamworks::SteamAPIWarningMessageHook_t* const& GlobalNamespace::SteamManager::__cordl_internal_get_m_SteamAPIWarningMessageHook() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SteamAPIWarningMessageHook;
}
constexpr void GlobalNamespace::SteamManager::__cordl_internal_set_m_SteamAPIWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SteamAPIWarningMessageHook = value;
}
inline void GlobalNamespace::SteamManager::setStaticF_s_EverInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "s_EverInitialized", ::GlobalNamespace::SteamManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SteamManager::getStaticF_s_EverInitialized()  {
return ::cordl_internals::getStaticField<bool, "s_EverInitialized", ::GlobalNamespace::SteamManager*>();
}
inline void GlobalNamespace::SteamManager::setStaticF_s_instance(::UnityW<::GlobalNamespace::SteamManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SteamManager>, "s_instance", ::GlobalNamespace::SteamManager*>(std::forward<::UnityW<::GlobalNamespace::SteamManager>>(value));
}
inline ::UnityW<::GlobalNamespace::SteamManager> GlobalNamespace::SteamManager::getStaticF_s_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SteamManager>, "s_instance", ::GlobalNamespace::SteamManager*>();
}
inline ::UnityW<::GlobalNamespace::SteamManager> GlobalNamespace::SteamManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SteamManager>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SteamManager::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SteamManager::SteamAPIDebugTextHook(int32_t  nSeverity, ::System::Text::StringBuilder*  pchDebugText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {"SteamAPIDebugTextHook", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nSeverity, pchDebugText);
}
inline void GlobalNamespace::SteamManager::InitOnPlayMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {"InitOnPlayMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SteamManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SteamManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SteamManager*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamManager::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SteamManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamManager::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SteamManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamManager* GlobalNamespace::SteamManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamManager::SteamManager()   {
}
