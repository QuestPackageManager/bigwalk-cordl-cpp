#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/CanvasController.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__CanvasController_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__CanvasController_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__ClientMatchMessage_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchInfo_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__PlayerInfo_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__RoomGUI_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__ServerMatchMessage_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController___c::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController___c._OnServerDisconnect_b__34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Examples::MultipleMatch::PlayerInfo (::Mirror::Examples::MultipleMatch::CanvasController___c::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerDisconnect_b__34_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815667f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerDisconnect>b__34_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController___c._OnServerPlayerReady_b__41_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Examples::MultipleMatch::PlayerInfo (::Mirror::Examples::MultipleMatch::CanvasController___c::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerPlayerReady_b__41_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815667f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerPlayerReady>b__41_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController___c._OnServerLeaveMatch_b__42_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Examples::MultipleMatch::PlayerInfo (::Mirror::Examples::MultipleMatch::CanvasController___c::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerLeaveMatch_b__42_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815667f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerLeaveMatch>b__42_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController___c._OnServerCreateMatch_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Examples::MultipleMatch::PlayerInfo (::Mirror::Examples::MultipleMatch::CanvasController___c::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerCreateMatch_b__43_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815667f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerCreateMatch>b__43_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController___c._OnServerJoinMatch_b__46_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Examples::MultipleMatch::PlayerInfo (::Mirror::Examples::MultipleMatch::CanvasController___c::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerJoinMatch_b__46_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815667f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerJoinMatch>b__46_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Examples::MultipleMatch::CanvasController___c::setStaticF___9(::Mirror::Examples::MultipleMatch::CanvasController___c*  value)  {
::cordl_internals::setStaticField<::Mirror::Examples::MultipleMatch::CanvasController___c*, "<>9", ::Mirror::Examples::MultipleMatch::CanvasController___c*>(std::forward<::Mirror::Examples::MultipleMatch::CanvasController___c*>(value));
}
inline ::Mirror::Examples::MultipleMatch::CanvasController___c* Mirror::Examples::MultipleMatch::CanvasController___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::Examples::MultipleMatch::CanvasController___c*, "<>9", ::Mirror::Examples::MultipleMatch::CanvasController___c*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController___c::setStaticF___9__34_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__34_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>(std::forward<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*>(value));
}
inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* Mirror::Examples::MultipleMatch::CanvasController___c::getStaticF___9__34_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__34_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController___c::setStaticF___9__41_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__41_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>(std::forward<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*>(value));
}
inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* Mirror::Examples::MultipleMatch::CanvasController___c::getStaticF___9__41_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__41_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController___c::setStaticF___9__42_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__42_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>(std::forward<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*>(value));
}
inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* Mirror::Examples::MultipleMatch::CanvasController___c::getStaticF___9__42_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__42_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController___c::setStaticF___9__43_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__43_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>(std::forward<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*>(value));
}
inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* Mirror::Examples::MultipleMatch::CanvasController___c::getStaticF___9__43_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__43_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController___c::setStaticF___9__46_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__46_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>(std::forward<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*>(value));
}
inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* Mirror::Examples::MultipleMatch::CanvasController___c::getStaticF___9__46_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "<>9__46_0", ::Mirror::Examples::MultipleMatch::CanvasController___c*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleMatch::PlayerInfo Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerDisconnect_b__34_0(::Mirror::NetworkConnectionToClient*  playerConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerDisconnect>b__34_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Examples::MultipleMatch::PlayerInfo>(this, ___internal_method, playerConn);
}
inline ::Mirror::Examples::MultipleMatch::PlayerInfo Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerPlayerReady_b__41_0(::Mirror::NetworkConnectionToClient*  playerConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerPlayerReady>b__41_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Examples::MultipleMatch::PlayerInfo>(this, ___internal_method, playerConn);
}
inline ::Mirror::Examples::MultipleMatch::PlayerInfo Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerLeaveMatch_b__42_0(::Mirror::NetworkConnectionToClient*  playerConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerLeaveMatch>b__42_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Examples::MultipleMatch::PlayerInfo>(this, ___internal_method, playerConn);
}
inline ::Mirror::Examples::MultipleMatch::PlayerInfo Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerCreateMatch_b__43_0(::Mirror::NetworkConnectionToClient*  playerConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerCreateMatch>b__43_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Examples::MultipleMatch::PlayerInfo>(this, ___internal_method, playerConn);
}
inline ::Mirror::Examples::MultipleMatch::PlayerInfo Mirror::Examples::MultipleMatch::CanvasController___c::_OnServerJoinMatch_b__46_0(::Mirror::NetworkConnectionToClient*  playerConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController___c*>(),
                        {"<OnServerJoinMatch>b__46_0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Examples::MultipleMatch::PlayerInfo>(this, ___internal_method, playerConn);
}
inline ::Mirror::Examples::MultipleMatch::CanvasController___c* Mirror::Examples::MultipleMatch::CanvasController___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleMatch::CanvasController___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::CanvasController___c::CanvasController___c()   {
}
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::*)(int32_t)>(&::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x181565980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>& Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController> const& Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_set___4__this(::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Mirror::NetworkConnectionToClient*& Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_get_conn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr ::Mirror::NetworkConnectionToClient* const& Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_get_conn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::__cordl_internal_set_conn(::Mirror::NetworkConnectionToClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conn = value;
}
inline void Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34* Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34::CanvasController__OnServerDisconnect_d__34()   {
}
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.add_OnPlayerDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::System::Action_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::Examples::MultipleMatch::CanvasController::add_OnPlayerDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181557840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"add_OnPlayerDisconnected", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkConnectionToClient*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.remove_OnPlayerDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::System::Action_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::Examples::MultipleMatch::CanvasController::remove_OnPlayerDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815578d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"remove_OnPlayerDisconnected", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkConnectionToClient*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::ResetStatics)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181556e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.InitializeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::InitializeData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815540b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"InitializeData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.ResetCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::ResetCanvas)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181556df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"ResetCanvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.SelectMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::System::Guid)>(&::Mirror::Examples::MultipleMatch::CanvasController::SelectMatch)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181556f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"SelectMatch", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.RequestCreateMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::RequestCreateMatch)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181556af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestCreateMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.RequestJoinMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::RequestJoinMatch)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181556b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestJoinMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.RequestLeaveMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::RequestLeaveMatch)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181556bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestLeaveMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.RequestCancelMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::RequestCancelMatch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181556a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestCancelMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.RequestReadyChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::RequestReadyChange)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181556c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestReadyChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.RequestStartMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::RequestStartMatch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181556d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestStartMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnMatchEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::OnMatchEnded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181554520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnMatchEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::OnStartServer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181556320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnStartServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerReady)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181555bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerReady", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerDisconnect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181554cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerDisconnect", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::OnStopServer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181556430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnStopServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::OnClientConnect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815541a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnClientConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::OnStartClient)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181556250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnStartClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::OnClientDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181554290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnClientDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::OnStopClient)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815563b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnStopClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerMatchMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::Examples::MultipleMatch::ServerMatchMessage)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerMatchMessage)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181555710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerMatchMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Examples::MultipleMatch::ServerMatchMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerPlayerReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*, ::System::Guid)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerPlayerReady)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181555890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerPlayerReady", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerLeaveMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*, ::System::Guid)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerLeaveMatch)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x181555250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerLeaveMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerCreateMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerCreateMatch)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1815548b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerCreateMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerCancelMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerCancelMatch)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181554580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerCancelMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerStartMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerStartMatch)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x181555d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerStartMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnServerJoinMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*, ::System::Guid)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnServerJoinMatch)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x181554d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerJoinMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.SendMatchList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::MultipleMatch::CanvasController::SendMatchList)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1815570c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"SendMatchList", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.OnClientMatchMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)(::Mirror::Examples::MultipleMatch::ClientMatchMessage)>(&::Mirror::Examples::MultipleMatch::CanvasController::OnClientMatchMessage)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1815542c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnClientMatchMessage", {}, {::i2c::type_of<::Mirror::Examples::MultipleMatch::ClientMatchMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.ShowLobbyView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::ShowLobbyView)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181557310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"ShowLobbyView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.ShowRoomView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::ShowRoomView)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181557600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"ShowRoomView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController.RefreshMatchList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::RefreshMatchList)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x1815564d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RefreshMatchList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CanvasController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CanvasController::*)()>(&::Mirror::Examples::MultipleMatch::CanvasController::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815577e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Mirror::NetworkConnectionToClient*>*& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_OnPlayerDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerDisconnected;
}
constexpr ::System::Action_1<::Mirror::NetworkConnectionToClient*>* const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_OnPlayerDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerDisconnected;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_OnPlayerDisconnected(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerDisconnected = value;
}
constexpr ::System::Guid& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_localPlayerMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerMatch;
}
constexpr ::System::Guid const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_localPlayerMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerMatch;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_localPlayerMatch(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerMatch = value;
}
constexpr ::System::Guid& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_localJoinedMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localJoinedMatch;
}
constexpr ::System::Guid const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_localJoinedMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localJoinedMatch;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_localJoinedMatch(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localJoinedMatch = value;
}
constexpr ::System::Guid& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_selectedMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedMatch;
}
constexpr ::System::Guid const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_selectedMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedMatch;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_selectedMatch(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedMatch = value;
}
constexpr int32_t& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_playerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIndex;
}
constexpr int32_t const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_playerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIndex;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_playerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerIndex = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_matchList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchList;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_matchList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchList;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_matchList(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchList = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_matchPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_matchPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchPrefab;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_matchPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_matchControllerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchControllerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_matchControllerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchControllerPrefab;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_matchControllerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchControllerPrefab = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_createButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_createButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createButton;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_createButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_joinButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_joinButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinButton;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_joinButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_lobbyView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyView;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_lobbyView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyView;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_lobbyView(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyView = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_roomView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomView;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_roomView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomView;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_roomView(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomView = value;
}
constexpr ::UnityW<::Mirror::Examples::MultipleMatch::RoomGUI>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_roomGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomGUI;
}
constexpr ::UnityW<::Mirror::Examples::MultipleMatch::RoomGUI> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_roomGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomGUI;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_roomGUI(::UnityW<::Mirror::Examples::MultipleMatch::RoomGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomGUI = value;
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_toggleGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleGroup;
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_get_toggleGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleGroup;
}
constexpr void Mirror::Examples::MultipleMatch::CanvasController::__cordl_internal_set_toggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleGroup = value;
}
inline void Mirror::Examples::MultipleMatch::CanvasController::setStaticF_playerMatches(::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::System::Guid>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::System::Guid>*, "playerMatches", ::Mirror::Examples::MultipleMatch::CanvasController*>(std::forward<::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::System::Guid>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::System::Guid>* Mirror::Examples::MultipleMatch::CanvasController::getStaticF_playerMatches()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::System::Guid>*, "playerMatches", ::Mirror::Examples::MultipleMatch::CanvasController*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController::setStaticF_openMatches(::System::Collections::Generic::Dictionary_2<::System::Guid,::Mirror::Examples::MultipleMatch::MatchInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::Mirror::Examples::MultipleMatch::MatchInfo>*, "openMatches", ::Mirror::Examples::MultipleMatch::CanvasController*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::Mirror::Examples::MultipleMatch::MatchInfo>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::Mirror::Examples::MultipleMatch::MatchInfo>* Mirror::Examples::MultipleMatch::CanvasController::getStaticF_openMatches()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::Mirror::Examples::MultipleMatch::MatchInfo>*, "openMatches", ::Mirror::Examples::MultipleMatch::CanvasController*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController::setStaticF_matchConnections(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>*, "matchConnections", ::Mirror::Examples::MultipleMatch::CanvasController*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>* Mirror::Examples::MultipleMatch::CanvasController::getStaticF_matchConnections()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>*, "matchConnections", ::Mirror::Examples::MultipleMatch::CanvasController*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController::setStaticF_playerInfos(::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnection*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnection*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "playerInfos", ::Mirror::Examples::MultipleMatch::CanvasController*>(std::forward<::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnection*,::Mirror::Examples::MultipleMatch::PlayerInfo>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnection*,::Mirror::Examples::MultipleMatch::PlayerInfo>* Mirror::Examples::MultipleMatch::CanvasController::getStaticF_playerInfos()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnection*,::Mirror::Examples::MultipleMatch::PlayerInfo>*, "playerInfos", ::Mirror::Examples::MultipleMatch::CanvasController*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController::setStaticF_waitingConnections(::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*, "waitingConnections", ::Mirror::Examples::MultipleMatch::CanvasController*>(std::forward<::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>* Mirror::Examples::MultipleMatch::CanvasController::getStaticF_waitingConnections()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*, "waitingConnections", ::Mirror::Examples::MultipleMatch::CanvasController*>();
}
inline void Mirror::Examples::MultipleMatch::CanvasController::add_OnPlayerDisconnected(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"add_OnPlayerDisconnected", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkConnectionToClient*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::remove_OnPlayerDisconnected(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"remove_OnPlayerDisconnected", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkConnectionToClient*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::InitializeData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"InitializeData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::ResetCanvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"ResetCanvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::SelectMatch(::System::Guid  matchId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"SelectMatch", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchId);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::RequestCreateMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestCreateMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::RequestJoinMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestJoinMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::RequestLeaveMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestLeaveMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::RequestCancelMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestCancelMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::RequestReadyChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestReadyChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::RequestStartMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RequestStartMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnMatchEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnMatchEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnStartServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnStartServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnServerReady(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerReady", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline ::System::Collections::IEnumerator* Mirror::Examples::MultipleMatch::CanvasController::OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerDisconnect", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, conn);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnStopServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnStopServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnClientConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnClientConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnStartClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnStartClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnClientDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnClientDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnStopClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnStopClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnServerMatchMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Examples::MultipleMatch::ServerMatchMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerMatchMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Examples::MultipleMatch::ServerMatchMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnServerPlayerReady(::Mirror::NetworkConnectionToClient*  conn, ::System::Guid  matchId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerPlayerReady", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, matchId);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnServerLeaveMatch(::Mirror::NetworkConnectionToClient*  conn, ::System::Guid  matchId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerLeaveMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, matchId);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnServerCreateMatch(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerCreateMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnServerCancelMatch(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerCancelMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnServerStartMatch(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerStartMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnServerJoinMatch(::Mirror::NetworkConnectionToClient*  conn, ::System::Guid  matchId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnServerJoinMatch", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, matchId);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::SendMatchList(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"SendMatchList", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::OnClientMatchMessage(::Mirror::Examples::MultipleMatch::ClientMatchMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"OnClientMatchMessage", {}, {::i2c::type_of<::Mirror::Examples::MultipleMatch::ClientMatchMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::ShowLobbyView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"ShowLobbyView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::ShowRoomView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"ShowRoomView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::RefreshMatchList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {"RefreshMatchList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CanvasController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CanvasController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleMatch::CanvasController* Mirror::Examples::MultipleMatch::CanvasController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleMatch::CanvasController*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::CanvasController::CanvasController()   {
}
