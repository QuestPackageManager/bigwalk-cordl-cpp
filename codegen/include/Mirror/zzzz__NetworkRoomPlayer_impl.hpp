#pragma once
// IWYU pragma private; include "Mirror/NetworkRoomPlayer.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/zzzz__NetworkRoomPlayer_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::Start)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1815258b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181525620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.CmdChangeReadyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)(bool)>(&::Mirror::NetworkRoomPlayer::CmdChangeReadyState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181524e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"CmdChangeReadyState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.IndexChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)(int32_t, int32_t)>(&::Mirror::NetworkRoomPlayer::IndexChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.ReadyStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)(bool, bool)>(&::Mirror::NetworkRoomPlayer::ReadyStateChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.OnClientEnterRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::OnClientEnterRoom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.OnClientExitRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::OnClientExitRoom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::OnGUI)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1815256d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.DrawPlayerReadyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::DrawPlayerReadyState)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181525200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"DrawPlayerReadyState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.DrawPlayerReadyButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::DrawPlayerReadyButton)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181525150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"DrawPlayerReadyButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181525bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.get_NetworkreadyToBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::get_NetworkreadyToBegin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"get_NetworkreadyToBegin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.set_NetworkreadyToBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)(::ByRefConst<bool>)>(&::Mirror::NetworkRoomPlayer::set_NetworkreadyToBegin)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181525ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"set_NetworkreadyToBegin", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.get_Networkindex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::NetworkRoomPlayer::*)()>(&::Mirror::NetworkRoomPlayer::get_Networkindex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"get_Networkindex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.set_Networkindex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)(::ByRefConst<int32_t>)>(&::Mirror::NetworkRoomPlayer::set_Networkindex)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181525bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"set_Networkindex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.UserCode_CmdChangeReadyState__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)(bool)>(&::Mirror::NetworkRoomPlayer::UserCode_CmdChangeReadyState__Boolean)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181525a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"UserCode_CmdChangeReadyState__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.InvokeUserCode_CmdChangeReadyState__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomPlayer::InvokeUserCode_CmdChangeReadyState__Boolean)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181525470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"InvokeUserCode_CmdChangeReadyState__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::NetworkRoomPlayer::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181525840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomPlayer.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomPlayer::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::NetworkRoomPlayer::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181524f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr bool& Mirror::NetworkRoomPlayer::__cordl_internal_get_showRoomGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showRoomGUI;
}
constexpr bool const& Mirror::NetworkRoomPlayer::__cordl_internal_get_showRoomGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showRoomGUI;
}
constexpr void Mirror::NetworkRoomPlayer::__cordl_internal_set_showRoomGUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showRoomGUI = value;
}
constexpr bool& Mirror::NetworkRoomPlayer::__cordl_internal_get_readyToBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToBegin;
}
constexpr bool const& Mirror::NetworkRoomPlayer::__cordl_internal_get_readyToBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToBegin;
}
constexpr void Mirror::NetworkRoomPlayer::__cordl_internal_set_readyToBegin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyToBegin = value;
}
constexpr int32_t& Mirror::NetworkRoomPlayer::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Mirror::NetworkRoomPlayer::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Mirror::NetworkRoomPlayer::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void Mirror::NetworkRoomPlayer::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::CmdChangeReadyState(bool  readyState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"CmdChangeReadyState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readyState);
}
inline void Mirror::NetworkRoomPlayer::IndexChanged(int32_t  oldIndex, int32_t  newIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldIndex, newIndex);
}
inline void Mirror::NetworkRoomPlayer::ReadyStateChanged(bool  oldReadyState, bool  newReadyState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldReadyState, newReadyState);
}
inline void Mirror::NetworkRoomPlayer::OnClientEnterRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::OnClientExitRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::OnGUI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::DrawPlayerReadyState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"DrawPlayerReadyState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::DrawPlayerReadyButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"DrawPlayerReadyButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkRoomPlayer::get_NetworkreadyToBegin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"get_NetworkreadyToBegin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::set_NetworkreadyToBegin(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"set_NetworkreadyToBegin", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Mirror::NetworkRoomPlayer::get_Networkindex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"get_Networkindex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::NetworkRoomPlayer::set_Networkindex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"set_Networkindex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::NetworkRoomPlayer::UserCode_CmdChangeReadyState__Boolean(bool  readyState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"UserCode_CmdChangeReadyState__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readyState);
}
inline void Mirror::NetworkRoomPlayer::InvokeUserCode_CmdChangeReadyState__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomPlayer*>(),
                        {"InvokeUserCode_CmdChangeReadyState__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkRoomPlayer::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::NetworkRoomPlayer::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomPlayer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::NetworkRoomPlayer* Mirror::NetworkRoomPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkRoomPlayer*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkRoomPlayer::NetworkRoomPlayer()   {
}
