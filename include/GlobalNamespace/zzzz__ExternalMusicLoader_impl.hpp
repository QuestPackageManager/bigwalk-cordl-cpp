#pragma once
// IWYU pragma private; include "GlobalNamespace/ExternalMusicLoader.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ExternalMusicLoader_def.hpp"
#include "GlobalNamespace/zzzz__ExternalMusicLoader_def.hpp"
#include "GlobalNamespace/zzzz__IAudioGUI_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::*)()>(&::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0._LoadAllInFolder_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::*)(::UnityEngine::AsyncOperation*)>(&::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::_LoadAllInFolder_b__0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180346cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0*>(),
                        {"<LoadAllInFolder>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr int32_t& GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::ExternalMusicLoader>& GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ExternalMusicLoader> const& GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ExternalMusicLoader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::_LoadAllInFolder_b__0(::UnityEngine::AsyncOperation*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0*>(),
                        {"<LoadAllInFolder>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0* GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0::ExternalMusicLoader___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ExternalMusicLoader> (*)()>(&::GlobalNamespace::ExternalMusicLoader::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180334dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ExternalMusicLoader*)>(&::GlobalNamespace::ExternalMusicLoader::set_Instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180334d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ExternalMusicLoader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::get_Identifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180334db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180334d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180334760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::OnEnable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803347c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18031b400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::Register)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180334c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.Deregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::Deregister)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180318fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"Deregister", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.LoadAllInFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::LoadAllInFolder)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x1803341a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"LoadAllInFolder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.PlayAllLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::PlayAllLoaded)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180334b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"PlayAllLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.PlayAllDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::PlayAllDefault)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180334960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"PlayAllDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)(::StringW)>(&::GlobalNamespace::ExternalMusicLoader::Log)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180334660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader.DrawGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::DrawGUI)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803340a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"DrawGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)()>(&::GlobalNamespace::ExternalMusicLoader::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180334d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalMusicLoader._Log_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExternalMusicLoader::*)(double_t)>(&::GlobalNamespace::ExternalMusicLoader::_Log_b__21_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180334d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"<Log>b__21_0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get_FolderPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FolderPath;
}
constexpr ::StringW const& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get_FolderPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FolderPath;
}
constexpr void GlobalNamespace::ExternalMusicLoader::__cordl_internal_set_FolderPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FolderPath = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get_MusicPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MusicPlayers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>> const& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get_MusicPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MusicPlayers;
}
constexpr void GlobalNamespace::ExternalMusicLoader::__cordl_internal_set_MusicPlayers(::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MusicPlayers = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get_FilePaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilePaths;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get_FilePaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilePaths;
}
constexpr void GlobalNamespace::ExternalMusicLoader::__cordl_internal_set_FilePaths(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilePaths = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get__guiDebugLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugLog;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get__guiDebugLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugLog;
}
constexpr void GlobalNamespace::ExternalMusicLoader::__cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugLog = value;
}
constexpr ::UnityEngine::GUIStyle*& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get__guiDebugTextStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr ::UnityEngine::GUIStyle* const& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get__guiDebugTextStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr void GlobalNamespace::ExternalMusicLoader::__cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugTextStyle = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get__loadedClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::ExternalMusicLoader::__cordl_internal_get__loadedClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedClips;
}
constexpr void GlobalNamespace::ExternalMusicLoader::__cordl_internal_set__loadedClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadedClips = value;
}
inline void GlobalNamespace::ExternalMusicLoader::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ExternalMusicLoader>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ExternalMusicLoader>, "<Instance>k__BackingField", ::GlobalNamespace::ExternalMusicLoader*>(std::forward<::UnityW<::GlobalNamespace::ExternalMusicLoader>>(value));
}
inline ::UnityW<::GlobalNamespace::ExternalMusicLoader> GlobalNamespace::ExternalMusicLoader::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ExternalMusicLoader>, "<Instance>k__BackingField", ::GlobalNamespace::ExternalMusicLoader*>();
}
inline ::UnityW<::GlobalNamespace::ExternalMusicLoader> GlobalNamespace::ExternalMusicLoader::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ExternalMusicLoader>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::set_Instance(::GlobalNamespace::ExternalMusicLoader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ExternalMusicLoader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::ExternalMusicLoader::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::Deregister()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"Deregister", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::LoadAllInFolder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"LoadAllInFolder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::PlayAllLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"PlayAllLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::PlayAllDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"PlayAllDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::Log(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::ExternalMusicLoader::DrawGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"DrawGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ExternalMusicLoader::_Log_b__21_0(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExternalMusicLoader*>(),
                        {"<Log>b__21_0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::ExternalMusicLoader* GlobalNamespace::ExternalMusicLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ExternalMusicLoader*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr  GlobalNamespace::ExternalMusicLoader::operator ::GlobalNamespace::IAudioGUI*() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* GlobalNamespace::ExternalMusicLoader::i___GlobalNamespace__IAudioGUI() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExternalMusicLoader::ExternalMusicLoader()   {
}
