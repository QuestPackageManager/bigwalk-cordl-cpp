#pragma once
// IWYU pragma private; include "GlobalNamespace/Scribe.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_impl.hpp"
#include "GlobalNamespace/zzzz__ScribeSavableData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Scribe_def.hpp"
#include "GlobalNamespace/zzzz__ScribeSavableData_def.hpp"
#include "GlobalNamespace/zzzz__Scribe_def.hpp"
#include "Mirror/zzzz__CommandMessage_def.hpp"
#include "Mirror/zzzz__NetworkDiagnostics_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Scribe_Scrible._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe_Scrible::*)(::Mirror::CommandMessage, double_t, int32_t, int32_t)>(&::GlobalNamespace::Scribe_Scrible::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803efd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe_Scrible>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::CommandMessage>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Scribe_Scrible::_ctor(::Mirror::CommandMessage  commandMessage, double_t  time, int32_t  channel, int32_t  playerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe_Scrible>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::CommandMessage>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, commandMessage, time, channel, playerIndex);
}
// Ctor Parameters [CppParam { name: "commandMessage", ty: "::GlobalNamespace::ScribeSavableData_SavableCommandMessage", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Scribe_Scrible::Scribe_Scrible(::GlobalNamespace::ScribeSavableData_SavableCommandMessage  commandMessage, float_t  time, int32_t  channel, int32_t  playerIndex) noexcept  {
this->commandMessage = commandMessage;
this->time = time;
this->channel = channel;
this->playerIndex = playerIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Scribe_Scrible::Scribe_Scrible()   {
}
//  Writing Method size for method: ::GlobalNamespace::Scribe.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe::*)()>(&::GlobalNamespace::Scribe::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803ef3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe::*)()>(&::GlobalNamespace::Scribe::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ef390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.OnIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe::*)(::Mirror::NetworkDiagnostics_MessageInfo)>(&::GlobalNamespace::Scribe::OnIn)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1803ef480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"OnIn", {}, {::i2c::type_of<::Mirror::NetworkDiagnostics_MessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.StartPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe::*)()>(&::GlobalNamespace::Scribe::StartPlayback)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803ef880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"StartPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe::*)()>(&::GlobalNamespace::Scribe::Update)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1803efa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.WriteSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::GlobalNamespace::ScribeSavableData*)>(&::GlobalNamespace::Scribe::WriteSaveData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803efcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"WriteSaveData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ScribeSavableData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.GetDataFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::Scribe::GetDataFolder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803ef310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"GetDataFolder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe::*)()>(&::GlobalNamespace::Scribe::Save)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803ef760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe::*)()>(&::GlobalNamespace::Scribe::Load)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ef340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe.GetAllSaveDatasInFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ScribeSavableData*>* (::GlobalNamespace::Scribe::*)()>(&::GlobalNamespace::Scribe::GetAllSaveDatasInFolder)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803ef150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"GetAllSaveDatasInFolder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Scribe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Scribe::*)()>(&::GlobalNamespace::Scribe::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::Scribe::__cordl_internal_get_record()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr bool const& GlobalNamespace::Scribe::__cordl_internal_get_record() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr void GlobalNamespace::Scribe::__cordl_internal_set_record(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___record = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlayerCharacter>>& GlobalNamespace::Scribe::__cordl_internal_get_playerCharacters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacters;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlayerCharacter>> const& GlobalNamespace::Scribe::__cordl_internal_get_playerCharacters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacters;
}
constexpr void GlobalNamespace::Scribe::__cordl_internal_set_playerCharacters(::ArrayW<::UnityW<::GlobalNamespace::PlayerCharacter>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacters = value;
}
constexpr ::GlobalNamespace::ScribeSavableData*& GlobalNamespace::Scribe::__cordl_internal_get_savableData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savableData;
}
constexpr ::GlobalNamespace::ScribeSavableData* const& GlobalNamespace::Scribe::__cordl_internal_get_savableData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savableData;
}
constexpr void GlobalNamespace::Scribe::__cordl_internal_set_savableData(::GlobalNamespace::ScribeSavableData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savableData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*& GlobalNamespace::Scribe::__cordl_internal_get_playbackScribles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackScribles;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>* const& GlobalNamespace::Scribe::__cordl_internal_get_playbackScribles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackScribles;
}
constexpr void GlobalNamespace::Scribe::__cordl_internal_set_playbackScribles(::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackScribles = value;
}
constexpr bool& GlobalNamespace::Scribe::__cordl_internal_get_isPlaybacking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaybacking;
}
constexpr bool const& GlobalNamespace::Scribe::__cordl_internal_get_isPlaybacking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaybacking;
}
constexpr void GlobalNamespace::Scribe::__cordl_internal_set_isPlaybacking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlaybacking = value;
}
constexpr double_t& GlobalNamespace::Scribe::__cordl_internal_get_playbackTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackTime;
}
constexpr double_t const& GlobalNamespace::Scribe::__cordl_internal_get_playbackTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackTime;
}
constexpr void GlobalNamespace::Scribe::__cordl_internal_set_playbackTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackTime = value;
}
constexpr ::StringW& GlobalNamespace::Scribe::__cordl_internal_get_loadFileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFileName;
}
constexpr ::StringW const& GlobalNamespace::Scribe::__cordl_internal_get_loadFileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFileName;
}
constexpr void GlobalNamespace::Scribe::__cordl_internal_set_loadFileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadFileName = value;
}
constexpr bool& GlobalNamespace::Scribe::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::Scribe::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::Scribe::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::Scribe::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Scribe::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Scribe::OnIn(::Mirror::NetworkDiagnostics_MessageInfo  messageInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"OnIn", {}, {::i2c::type_of<::Mirror::NetworkDiagnostics_MessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageInfo);
}
inline void GlobalNamespace::Scribe::StartPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"StartPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Scribe::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Scribe::WriteSaveData(::StringW  path, ::GlobalNamespace::ScribeSavableData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"WriteSaveData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ScribeSavableData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, data);
}
inline ::StringW GlobalNamespace::Scribe::GetDataFolder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"GetDataFolder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Scribe::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Scribe::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ScribeSavableData*>* GlobalNamespace::Scribe::GetAllSaveDatasInFolder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {"GetAllSaveDatasInFolder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ScribeSavableData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::Scribe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Scribe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Scribe* GlobalNamespace::Scribe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Scribe*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Scribe::Scribe()   {
}
