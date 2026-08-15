#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHome.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "GlobalNamespace/zzzz__SaveableHomeName_impl.hpp"
#include "GlobalNamespace/zzzz__SeaShell_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__CustomAudioAssetBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__ICustomHomePositioner_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__PropShepherd_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__SaveableHomeName_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "LobbyNetworking/zzzz__ITicketed_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHome_PropHomeChangeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome_PropHomeChangeEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::PropHome_PropHomeChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180382c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome_PropHomeChangeEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome_PropHomeChangeEvent::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHome_PropHomeChangeEvent::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome_PropHomeChangeEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::PropHome_PropHomeChangeEvent::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::PropHome_PropHomeChangeEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180382860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome_PropHomeChangeEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome_PropHomeChangeEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::PropHome_PropHomeChangeEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PropHome_PropHomeChangeEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::PropHome_PropHomeChangeEvent::Invoke(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, propBefore, propAfter);
}
inline ::System::IAsyncResult* GlobalNamespace::PropHome_PropHomeChangeEvent::BeginInvoke(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, propHome, propBefore, propAfter, callback, object);
}
inline void GlobalNamespace::PropHome_PropHomeChangeEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::PropHome_PropHomeChangeEvent* GlobalNamespace::PropHome_PropHomeChangeEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent::PropHome_PropHomeChangeEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::PropHome.get_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::GlobalNamespace::PropHome::*)()>(&::GlobalNamespace::PropHome::get_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180384010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"get_ticket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.set_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)(uint16_t)>(&::GlobalNamespace::PropHome::set_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180384020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)()>(&::GlobalNamespace::PropHome::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803838f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)()>(&::GlobalNamespace::PropHome::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803838a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)()>(&::GlobalNamespace::PropHome::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180383530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)()>(&::GlobalNamespace::PropHome::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180384000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.GetSaveableHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropHome> (*)(::GlobalNamespace::SaveableHomeName)>(&::GlobalNamespace::PropHome::GetSaveableHome)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180383790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"GetSaveableHome", {}, {::i2c::type_of<::GlobalNamespace::SaveableHomeName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.IsSafeToPlace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropHome::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHome::IsSafeToPlace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180383820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"IsSafeToPlace", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.GetParentPlayerWithTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::PropHome::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHome::GetParentPlayerWithTransforms)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180383720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"GetParentPlayerWithTransforms", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.SetPinned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHome::SetPinned)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180383a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"SetPinned", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.CheckShepherd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHome::CheckShepherd)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180383630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"CheckShepherd", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.SetUnpinned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHome::SetUnpinned)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x180383b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"SetUnpinned", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome.FireServerEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)(::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHome::FireServerEvents)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803836e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"FireServerEvents", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHome._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHome::*)()>(&::GlobalNamespace::PropHome::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SeaShell_ShellReference& GlobalNamespace::PropHome::__cordl_internal_get_shellReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shellReference;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference const& GlobalNamespace::PropHome::__cordl_internal_get_shellReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shellReference;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_shellReference(::GlobalNamespace::SeaShell_ShellReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shellReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PropHome::__cordl_internal_get_parentCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PropHome::__cordl_internal_get_parentCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentCharacter;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_parentCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentCharacter = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::PropHome::__cordl_internal_get_parentProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentProp;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::PropHome::__cordl_internal_get_parentProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentProp;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_parentProp(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentProp = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PropHome::__cordl_internal_get_onPin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPin;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PropHome::__cordl_internal_get_onPin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPin;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_onPin(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPin = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PropHome::__cordl_internal_get_onUnpin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUnpin;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PropHome::__cordl_internal_get_onUnpin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUnpin;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_onUnpin(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onUnpin = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PropHome::__cordl_internal_get_pinDirectControlSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinDirectControlSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PropHome::__cordl_internal_get_pinDirectControlSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinDirectControlSystem;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_pinDirectControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pinDirectControlSystem = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*& GlobalNamespace::PropHome::__cordl_internal_get_onPinServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPinServer;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>* const& GlobalNamespace::PropHome::__cordl_internal_get_onPinServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPinServer;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_onPinServer(::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPinServer = value;
}
constexpr ::GlobalNamespace::PropGroup& GlobalNamespace::PropHome::__cordl_internal_get_pinGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinGroup;
}
constexpr ::GlobalNamespace::PropGroup const& GlobalNamespace::PropHome::__cordl_internal_get_pinGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinGroup;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_pinGroup(::GlobalNamespace::PropGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pinGroup = value;
}
constexpr bool& GlobalNamespace::PropHome::__cordl_internal_get_blockGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockGrabbing;
}
constexpr bool const& GlobalNamespace::PropHome::__cordl_internal_get_blockGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockGrabbing;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_blockGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockGrabbing = value;
}
constexpr bool& GlobalNamespace::PropHome::__cordl_internal_get_blockPlacing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockPlacing;
}
constexpr bool const& GlobalNamespace::PropHome::__cordl_internal_get_blockPlacing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockPlacing;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_blockPlacing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockPlacing = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::PropHome::__cordl_internal_get_castAsOther()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castAsOther;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::PropHome::__cordl_internal_get_castAsOther() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castAsOther;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_castAsOther(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castAsOther = value;
}
constexpr bool& GlobalNamespace::PropHome::__cordl_internal_get_hideXRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideXRay;
}
constexpr bool const& GlobalNamespace::PropHome::__cordl_internal_get_hideXRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideXRay;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_hideXRay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideXRay = value;
}
constexpr ::UnityW<::GlobalNamespace::PropShepherd>& GlobalNamespace::PropHome::__cordl_internal_get_propShepherd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propShepherd;
}
constexpr ::UnityW<::GlobalNamespace::PropShepherd> const& GlobalNamespace::PropHome::__cordl_internal_get_propShepherd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propShepherd;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_propShepherd(::UnityW<::GlobalNamespace::PropShepherd>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propShepherd = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PropHome::__cordl_internal_get_hideForLocalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideForLocalPlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PropHome::__cordl_internal_get_hideForLocalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideForLocalPlayer;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_hideForLocalPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideForLocalPlayer = value;
}
constexpr ::GlobalNamespace::PropGroup& GlobalNamespace::PropHome::__cordl_internal_get_positionGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionGroup;
}
constexpr ::GlobalNamespace::PropGroup const& GlobalNamespace::PropHome::__cordl_internal_get_positionGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionGroup;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_positionGroup(::GlobalNamespace::PropGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionGroup = value;
}
constexpr bool& GlobalNamespace::PropHome::__cordl_internal_get_hasPositionGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPositionGroup;
}
constexpr bool const& GlobalNamespace::PropHome::__cordl_internal_get_hasPositionGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPositionGroup;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_hasPositionGroup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPositionGroup = value;
}
constexpr ::GlobalNamespace::ICustomHomePositioner*& GlobalNamespace::PropHome::__cordl_internal_get_customHomePositioner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHomePositioner;
}
constexpr ::GlobalNamespace::ICustomHomePositioner* const& GlobalNamespace::PropHome::__cordl_internal_get_customHomePositioner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHomePositioner;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_customHomePositioner(::GlobalNamespace::ICustomHomePositioner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customHomePositioner = value;
}
constexpr ::GlobalNamespace::SaveableHomeName& GlobalNamespace::PropHome::__cordl_internal_get_saveableHomeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveableHomeName;
}
constexpr ::GlobalNamespace::SaveableHomeName const& GlobalNamespace::PropHome::__cordl_internal_get_saveableHomeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveableHomeName;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_saveableHomeName(::GlobalNamespace::SaveableHomeName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveableHomeName = value;
}
constexpr bool& GlobalNamespace::PropHome::__cordl_internal_get_inventoryIsHigherPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventoryIsHigherPriority;
}
constexpr bool const& GlobalNamespace::PropHome::__cordl_internal_get_inventoryIsHigherPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventoryIsHigherPriority;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_inventoryIsHigherPriority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inventoryIsHigherPriority = value;
}
constexpr bool& GlobalNamespace::PropHome::__cordl_internal_get_isInventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInventory;
}
constexpr bool const& GlobalNamespace::PropHome::__cordl_internal_get_isInventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInventory;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_isInventory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInventory = value;
}
constexpr uint16_t& GlobalNamespace::PropHome::__cordl_internal_get__ticket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr uint16_t const& GlobalNamespace::PropHome::__cordl_internal_get__ticket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set__ticket_k__BackingField(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ticket_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>& GlobalNamespace::PropHome::__cordl_internal_get_customPlaceOverrideBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customPlaceOverrideBehaviour;
}
constexpr ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour> const& GlobalNamespace::PropHome::__cordl_internal_get_customPlaceOverrideBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customPlaceOverrideBehaviour;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_customPlaceOverrideBehaviour(::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customPlaceOverrideBehaviour = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>& GlobalNamespace::PropHome::__cordl_internal_get_customRemoveOverrideBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRemoveOverrideBehaviour;
}
constexpr ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour> const& GlobalNamespace::PropHome::__cordl_internal_get_customRemoveOverrideBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRemoveOverrideBehaviour;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_customRemoveOverrideBehaviour(::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customRemoveOverrideBehaviour = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropHome::__cordl_internal_get_propPlaceSoundOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propPlaceSoundOverride;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropHome::__cordl_internal_get_propPlaceSoundOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propPlaceSoundOverride;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_propPlaceSoundOverride(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propPlaceSoundOverride = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropHome::__cordl_internal_get_propRemoveSoundOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propRemoveSoundOverride;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropHome::__cordl_internal_get_propRemoveSoundOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propRemoveSoundOverride;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_propRemoveSoundOverride(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propRemoveSoundOverride = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PropHome::__cordl_internal_get_soundTransformOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundTransformOverride;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PropHome::__cordl_internal_get_soundTransformOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundTransformOverride;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_soundTransformOverride(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundTransformOverride = value;
}
constexpr bool& GlobalNamespace::PropHome::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PropHome::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::PropHome::__cordl_internal_get_pinnedProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinnedProp;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::PropHome::__cordl_internal_get_pinnedProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinnedProp;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_pinnedProp(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pinnedProp = value;
}
constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent*& GlobalNamespace::PropHome::__cordl_internal_get_onChangeServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChangeServer;
}
constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent* const& GlobalNamespace::PropHome::__cordl_internal_get_onChangeServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChangeServer;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_onChangeServer(::GlobalNamespace::PropHome_PropHomeChangeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChangeServer = value;
}
constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent*& GlobalNamespace::PropHome::__cordl_internal_get_onChangeLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChangeLocal;
}
constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent* const& GlobalNamespace::PropHome::__cordl_internal_get_onChangeLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChangeLocal;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_onChangeLocal(::GlobalNamespace::PropHome_PropHomeChangeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChangeLocal = value;
}
constexpr bool& GlobalNamespace::PropHome::__cordl_internal_get_isReadyForSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReadyForSounds;
}
constexpr bool const& GlobalNamespace::PropHome::__cordl_internal_get_isReadyForSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReadyForSounds;
}
constexpr void GlobalNamespace::PropHome::__cordl_internal_set_isReadyForSounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isReadyForSounds = value;
}
inline void GlobalNamespace::PropHome::setStaticF_onAnyChangeServer(::GlobalNamespace::PropHome_PropHomeChangeEvent*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PropHome_PropHomeChangeEvent*, "onAnyChangeServer", ::GlobalNamespace::PropHome*>(std::forward<::GlobalNamespace::PropHome_PropHomeChangeEvent*>(value));
}
inline ::GlobalNamespace::PropHome_PropHomeChangeEvent* GlobalNamespace::PropHome::getStaticF_onAnyChangeServer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PropHome_PropHomeChangeEvent*, "onAnyChangeServer", ::GlobalNamespace::PropHome*>();
}
inline void GlobalNamespace::PropHome::setStaticF_allPropHomes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*, "allPropHomes", ::GlobalNamespace::PropHome*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>* GlobalNamespace::PropHome::getStaticF_allPropHomes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*, "allPropHomes", ::GlobalNamespace::PropHome*>();
}
inline uint16_t GlobalNamespace::PropHome::get_ticket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"get_ticket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void GlobalNamespace::PropHome::set_ticket(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PropHome::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHome::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHome::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHome::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PropHome> GlobalNamespace::PropHome::GetSaveableHome(::GlobalNamespace::SaveableHomeName  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"GetSaveableHome", {}, {::i2c::type_of<::GlobalNamespace::SaveableHomeName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropHome>>(nullptr, ___internal_method, name);
}
inline bool GlobalNamespace::PropHome::IsSafeToPlace(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"IsSafeToPlace", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prop);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PropHome::GetParentPlayerWithTransforms(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"GetParentPlayerWithTransforms", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PropHome::SetPinned(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"SetPinned", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PropHome::CheckShepherd(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"CheckShepherd", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PropHome::SetUnpinned(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"SetUnpinned", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PropHome::FireServerEvents(::GlobalNamespace::Prop*  oldProp, ::GlobalNamespace::Prop*  newProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {"FireServerEvents", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldProp, newProp);
}
inline void GlobalNamespace::PropHome::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHome*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHome* GlobalNamespace::PropHome::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHome*>());
}
/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr  GlobalNamespace::PropHome::operator ::LobbyNetworking::ITicketed*() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* GlobalNamespace::PropHome::i___LobbyNetworking__ITicketed() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHome::PropHome()   {
}
