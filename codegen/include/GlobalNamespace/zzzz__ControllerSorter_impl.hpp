#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerSorter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ControllerSorter_def.hpp"
#include "Rewired/zzzz__ControllerAssignmentChangedEventArgs_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ControllerSorter* (*)()>(&::GlobalNamespace::ControllerSorter::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18041f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerSorter::*)()>(&::GlobalNamespace::ControllerSorter::OnChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18041ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"OnChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerSorter::*)()>(&::GlobalNamespace::ControllerSorter::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18041ec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.OnControllerAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerSorter::*)(::Rewired::ControllerAssignmentChangedEventArgs*)>(&::GlobalNamespace::ControllerSorter::OnControllerAdded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18041ee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"OnControllerAdded", {}, {::i2c::type_of<::Rewired::ControllerAssignmentChangedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.ActiveRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerSorter::*)()>(&::GlobalNamespace::ControllerSorter::ActiveRefresh)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18041e860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"ActiveRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.ControllerExistsIsMineAndIsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerSorter::*)(::Rewired::Controller*)>(&::GlobalNamespace::ControllerSorter::ControllerExistsIsMineAndIsConnected)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041ec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"ControllerExistsIsMineAndIsConnected", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.OnControllerRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerSorter::*)(::Rewired::ControllerAssignmentChangedEventArgs*)>(&::GlobalNamespace::ControllerSorter::OnControllerRemoved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18041ee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"OnControllerRemoved", {}, {::i2c::type_of<::Rewired::ControllerAssignmentChangedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.TakeNoteOfControllerUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerSorter::*)(::Rewired::Controller*)>(&::GlobalNamespace::ControllerSorter::TakeNoteOfControllerUsed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18041f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"TakeNoteOfControllerUsed", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.SetActiveController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerSorter::*)(::Rewired::Controller*)>(&::GlobalNamespace::ControllerSorter::SetActiveController)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18041eea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"SetActiveController", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.get_activeControllerIsJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ControllerSorter::get_activeControllerIsJoystick)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18041f0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"get_activeControllerIsJoystick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.get_activeControllerIsMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ControllerSorter::get_activeControllerIsMouse)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18041f180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"get_activeControllerIsMouse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.get_activeControllerIsKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ControllerSorter::get_activeControllerIsKeyboard)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18041f100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"get_activeControllerIsKeyboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter.ControllerIsMouseOrKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Controller*)>(&::GlobalNamespace::ControllerSorter::ControllerIsMouseOrKeyboard)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18041ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"ControllerIsMouseOrKeyboard", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerSorter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerSorter::*)()>(&::GlobalNamespace::ControllerSorter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ControllerSorter::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::ControllerSorter::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::ControllerSorter::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::Rewired::Player*& GlobalNamespace::ControllerSorter::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::Rewired::Player* const& GlobalNamespace::ControllerSorter::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::ControllerSorter::__cordl_internal_set_player(::Rewired::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::Rewired::Controller*& GlobalNamespace::ControllerSorter::__cordl_internal_get_activeController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeController;
}
constexpr ::Rewired::Controller* const& GlobalNamespace::ControllerSorter::__cordl_internal_get_activeController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeController;
}
constexpr void GlobalNamespace::ControllerSorter::__cordl_internal_set_activeController(::Rewired::Controller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeController = value;
}
constexpr ::Rewired::Controller*& GlobalNamespace::ControllerSorter::__cordl_internal_get_activeJoystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeJoystick;
}
constexpr ::Rewired::Controller* const& GlobalNamespace::ControllerSorter::__cordl_internal_get_activeJoystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeJoystick;
}
constexpr void GlobalNamespace::ControllerSorter::__cordl_internal_set_activeJoystick(::Rewired::Controller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeJoystick = value;
}
constexpr ::System::Action*& GlobalNamespace::ControllerSorter::__cordl_internal_get_onChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr ::System::Action* const& GlobalNamespace::ControllerSorter::__cordl_internal_get_onChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr void GlobalNamespace::ControllerSorter::__cordl_internal_set_onChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChange = value;
}
inline ::GlobalNamespace::ControllerSorter* GlobalNamespace::ControllerSorter::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ControllerSorter*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ControllerSorter::OnChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"OnChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerSorter::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerSorter::OnControllerAdded(::Rewired::ControllerAssignmentChangedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"OnControllerAdded", {}, {::i2c::type_of<::Rewired::ControllerAssignmentChangedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::ControllerSorter::ActiveRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"ActiveRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerSorter::ControllerExistsIsMineAndIsConnected(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"ControllerExistsIsMineAndIsConnected", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controller);
}
inline void GlobalNamespace::ControllerSorter::OnControllerRemoved(::Rewired::ControllerAssignmentChangedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"OnControllerRemoved", {}, {::i2c::type_of<::Rewired::ControllerAssignmentChangedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::ControllerSorter::TakeNoteOfControllerUsed(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"TakeNoteOfControllerUsed", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GlobalNamespace::ControllerSorter::SetActiveController(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"SetActiveController", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline bool GlobalNamespace::ControllerSorter::get_activeControllerIsJoystick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"get_activeControllerIsJoystick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ControllerSorter::get_activeControllerIsMouse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"get_activeControllerIsMouse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ControllerSorter::get_activeControllerIsKeyboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"get_activeControllerIsKeyboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ControllerSorter::ControllerIsMouseOrKeyboard(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {"ControllerIsMouseOrKeyboard", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controller);
}
inline void GlobalNamespace::ControllerSorter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerSorter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ControllerSorter* GlobalNamespace::ControllerSorter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ControllerSorter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerSorter::ControllerSorter()   {
}
