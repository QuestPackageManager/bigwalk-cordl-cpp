#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicManager_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__IAudioGUI_def.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicManager.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::get_Initialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d83f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.get_MusicPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::get_MusicPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_MusicPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.set_MusicPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*)>(&::GlobalNamespace::MusicManager::set_MusicPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"set_MusicPlayers", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MusicManager> (*)()>(&::GlobalNamespace::MusicManager::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d8410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MusicManager*)>(&::GlobalNamespace::MusicManager::set_Instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d8430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::MusicManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::get_Identifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d83e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.get_TimeDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::get_TimeDebug)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18032d450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_TimeDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.set_TimeDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(bool)>(&::GlobalNamespace::MusicManager::set_TimeDebug)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18032d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"set_TimeDebug", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::OnEnable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803d7f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803d7e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(float_t)>(&::GlobalNamespace::MusicManager::AudioUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803d7860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(float_t)>(&::GlobalNamespace::MusicManager::AudioLateUpdate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803d7710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(float_t)>(&::GlobalNamespace::MusicManager::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803d77c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(float_t)>(&::GlobalNamespace::MusicManager::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.MusicUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::MusicUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803d77c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"MusicUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MusicManager::Initialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803d7dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(::GlobalNamespace::MusicPlayer*)>(&::GlobalNamespace::MusicManager::Register)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d81b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::MusicPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.Deregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(::GlobalNamespace::MusicPlayer*)>(&::GlobalNamespace::MusicManager::Deregister)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d78e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"Deregister", {}, {::i2c::type_of<::GlobalNamespace::MusicPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.SyncAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::SyncAll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803d8110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"SyncAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.OnMovingTooFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::MusicManager::OnMovingTooFast)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803d8110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"OnMovingTooFast", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.DrawGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::DrawGUI)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x1803d7910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"DrawGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.AddDebugLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(::StringW, float_t)>(&::GlobalNamespace::MusicManager::AddDebugLog)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803d7600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AddDebugLog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803d8360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager._OnEnable_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::_OnEnable_b__17_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803d8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"<OnEnable>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager._OnEnable_b__17_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::_OnEnable_b__17_1)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803d8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"<OnEnable>b__17_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager._AddDebugLog_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(double_t)>(&::GlobalNamespace::MusicManager::_AddDebugLog_b__30_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d81e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"<AddDebugLog>b__30_0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*& GlobalNamespace::MusicManager::__cordl_internal_get__MusicPlayers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MusicPlayers_k__BackingField;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* const& GlobalNamespace::MusicManager::__cordl_internal_get__MusicPlayers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MusicPlayers_k__BackingField;
}
constexpr void GlobalNamespace::MusicManager::__cordl_internal_set__MusicPlayers_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MusicPlayers_k__BackingField = value;
}
constexpr ::UnityEngine::GUIStyle*& GlobalNamespace::MusicManager::__cordl_internal_get__guiDebugTextStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr ::UnityEngine::GUIStyle* const& GlobalNamespace::MusicManager::__cordl_internal_get__guiDebugTextStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr void GlobalNamespace::MusicManager::__cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugTextStyle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& GlobalNamespace::MusicManager::__cordl_internal_get__guiDebugLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugLog;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& GlobalNamespace::MusicManager::__cordl_internal_get__guiDebugLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugLog;
}
constexpr void GlobalNamespace::MusicManager::__cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugLog = value;
}
inline void GlobalNamespace::MusicManager::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::MusicManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MusicManager>, "<Instance>k__BackingField", ::GlobalNamespace::MusicManager*>(std::forward<::UnityW<::GlobalNamespace::MusicManager>>(value));
}
inline ::UnityW<::GlobalNamespace::MusicManager> GlobalNamespace::MusicManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MusicManager>, "<Instance>k__BackingField", ::GlobalNamespace::MusicManager*>();
}
inline bool GlobalNamespace::MusicManager::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* GlobalNamespace::MusicManager::get_MusicPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_MusicPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::set_MusicPlayers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"set_MusicPlayers", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::MusicManager> GlobalNamespace::MusicManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MusicManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MusicManager::set_Instance(::GlobalNamespace::MusicManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::MusicManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MusicManager::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::MusicManager::get_TimeDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"get_TimeDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::set_TimeDebug(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"set_TimeDebug", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MusicManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::MusicManager::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::MusicManager::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::MusicManager::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::MusicManager::MusicUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"MusicUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MusicManager::Register(::GlobalNamespace::MusicPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::MusicPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MusicManager::Deregister(::GlobalNamespace::MusicPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"Deregister", {}, {::i2c::type_of<::GlobalNamespace::MusicPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MusicManager::SyncAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"SyncAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::OnMovingTooFast(::UnityEngine::Vector3  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"OnMovingTooFast", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::MusicManager::DrawGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"DrawGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::AddDebugLog(::StringW  content, float_t  lingerTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"AddDebugLog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, lingerTime);
}
inline void GlobalNamespace::MusicManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::_OnEnable_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"<OnEnable>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::_OnEnable_b__17_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"<OnEnable>b__17_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::_AddDebugLog_b__30_0(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"<AddDebugLog>b__30_0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::MusicManager* GlobalNamespace::MusicManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::MusicManager::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::MusicManager::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr  GlobalNamespace::MusicManager::operator ::GlobalNamespace::IAudioGUI*() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* GlobalNamespace::MusicManager::i___GlobalNamespace__IAudioGUI() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicManager::MusicManager()   {
}
