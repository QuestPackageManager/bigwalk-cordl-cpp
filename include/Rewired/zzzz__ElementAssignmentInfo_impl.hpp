#pragma once
// IWYU pragma private; include "Rewired/ElementAssignmentInfo.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerElementType_impl.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_impl.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "Rewired/zzzz__ElementAssignmentInfo_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__ElementAssignment_def.hpp"
#include "Rewired/zzzz__InputAction_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_player)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818426b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_action
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputAction* (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_action)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181842310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_action", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_controller)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181842470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_controllerType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181842400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_controllerId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181842390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_controllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_controllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_controllerMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_controllerMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_elementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_elementIdentifier)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181842630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_elementIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_elementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_elementMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181842680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_elementMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_elementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_elementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_axisContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Pole (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_axisContribution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_axisContribution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_axisRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_axisRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_invert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_invert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_keyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_keyCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_keyCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_modifierKeyFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ModifierKeyFlags (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_modifierKeyFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_modifierKeyFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo.get_elementDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ElementAssignmentInfo::*)()>(&::Rewired::ElementAssignmentInfo::get_elementDisplayName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181842530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_elementDisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentInfo::*)(::Rewired::ControllerMap*, ::Rewired::ElementAssignment)>(&::Rewired::ElementAssignmentInfo::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181842260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ControllerMap*& Rewired::ElementAssignmentInfo::__cordl_internal_get_OrFlTnvJFfaYkAaGdQhDmKdGrnrG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrFlTnvJFfaYkAaGdQhDmKdGrnrG;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ElementAssignmentInfo::__cordl_internal_get_OrFlTnvJFfaYkAaGdQhDmKdGrnrG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrFlTnvJFfaYkAaGdQhDmKdGrnrG;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_OrFlTnvJFfaYkAaGdQhDmKdGrnrG(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrFlTnvJFfaYkAaGdQhDmKdGrnrG = value;
}
constexpr ::Rewired::ControllerElementType& Rewired::ElementAssignmentInfo::__cordl_internal_get_dNOnBRNqNKipldTWfreELVeWUTmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dNOnBRNqNKipldTWfreELVeWUTmd;
}
constexpr ::Rewired::ControllerElementType const& Rewired::ElementAssignmentInfo::__cordl_internal_get_dNOnBRNqNKipldTWfreELVeWUTmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dNOnBRNqNKipldTWfreELVeWUTmd;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_dNOnBRNqNKipldTWfreELVeWUTmd(::Rewired::ControllerElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dNOnBRNqNKipldTWfreELVeWUTmd = value;
}
constexpr int32_t& Rewired::ElementAssignmentInfo::__cordl_internal_get_IldZaPsIyZrNjgoYgsXtztiZNthk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IldZaPsIyZrNjgoYgsXtztiZNthk;
}
constexpr int32_t const& Rewired::ElementAssignmentInfo::__cordl_internal_get_IldZaPsIyZrNjgoYgsXtztiZNthk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IldZaPsIyZrNjgoYgsXtztiZNthk;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_IldZaPsIyZrNjgoYgsXtztiZNthk(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IldZaPsIyZrNjgoYgsXtztiZNthk = value;
}
constexpr int32_t& Rewired::ElementAssignmentInfo::__cordl_internal_get_eKjZQowhhRclUMYLomKYorkpVGGE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eKjZQowhhRclUMYLomKYorkpVGGE;
}
constexpr int32_t const& Rewired::ElementAssignmentInfo::__cordl_internal_get_eKjZQowhhRclUMYLomKYorkpVGGE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eKjZQowhhRclUMYLomKYorkpVGGE;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_eKjZQowhhRclUMYLomKYorkpVGGE(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eKjZQowhhRclUMYLomKYorkpVGGE = value;
}
constexpr ::Rewired::AxisRange& Rewired::ElementAssignmentInfo::__cordl_internal_get_jtFhDITsAJqSZYpLnQYlmFdwAKgS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jtFhDITsAJqSZYpLnQYlmFdwAKgS;
}
constexpr ::Rewired::AxisRange const& Rewired::ElementAssignmentInfo::__cordl_internal_get_jtFhDITsAJqSZYpLnQYlmFdwAKgS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jtFhDITsAJqSZYpLnQYlmFdwAKgS;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_jtFhDITsAJqSZYpLnQYlmFdwAKgS(::Rewired::AxisRange  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jtFhDITsAJqSZYpLnQYlmFdwAKgS = value;
}
constexpr ::UnityEngine::KeyCode& Rewired::ElementAssignmentInfo::__cordl_internal_get_frcLehcUNhIctycqZcKDbTJylZcKA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frcLehcUNhIctycqZcKDbTJylZcKA;
}
constexpr ::UnityEngine::KeyCode const& Rewired::ElementAssignmentInfo::__cordl_internal_get_frcLehcUNhIctycqZcKDbTJylZcKA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frcLehcUNhIctycqZcKDbTJylZcKA;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_frcLehcUNhIctycqZcKDbTJylZcKA(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frcLehcUNhIctycqZcKDbTJylZcKA = value;
}
constexpr ::Rewired::ModifierKeyFlags& Rewired::ElementAssignmentInfo::__cordl_internal_get_RMKBitBdTNxjtIRlyVPmaLOxwNtk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RMKBitBdTNxjtIRlyVPmaLOxwNtk;
}
constexpr ::Rewired::ModifierKeyFlags const& Rewired::ElementAssignmentInfo::__cordl_internal_get_RMKBitBdTNxjtIRlyVPmaLOxwNtk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RMKBitBdTNxjtIRlyVPmaLOxwNtk;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_RMKBitBdTNxjtIRlyVPmaLOxwNtk(::Rewired::ModifierKeyFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RMKBitBdTNxjtIRlyVPmaLOxwNtk = value;
}
constexpr int32_t& Rewired::ElementAssignmentInfo::__cordl_internal_get_tootIMkgNKfyKksRwqRcNgWLFmxg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tootIMkgNKfyKksRwqRcNgWLFmxg;
}
constexpr int32_t const& Rewired::ElementAssignmentInfo::__cordl_internal_get_tootIMkgNKfyKksRwqRcNgWLFmxg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tootIMkgNKfyKksRwqRcNgWLFmxg;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_tootIMkgNKfyKksRwqRcNgWLFmxg(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tootIMkgNKfyKksRwqRcNgWLFmxg = value;
}
constexpr ::Rewired::Pole& Rewired::ElementAssignmentInfo::__cordl_internal_get_MqaMzBrrsLqAtufTzdnThxFYuxiuA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MqaMzBrrsLqAtufTzdnThxFYuxiuA;
}
constexpr ::Rewired::Pole const& Rewired::ElementAssignmentInfo::__cordl_internal_get_MqaMzBrrsLqAtufTzdnThxFYuxiuA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MqaMzBrrsLqAtufTzdnThxFYuxiuA;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_MqaMzBrrsLqAtufTzdnThxFYuxiuA(::Rewired::Pole  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MqaMzBrrsLqAtufTzdnThxFYuxiuA = value;
}
constexpr bool& Rewired::ElementAssignmentInfo::__cordl_internal_get_oVpSDXkiIBRTfnJMidDHqTkTmWHn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oVpSDXkiIBRTfnJMidDHqTkTmWHn;
}
constexpr bool const& Rewired::ElementAssignmentInfo::__cordl_internal_get_oVpSDXkiIBRTfnJMidDHqTkTmWHn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oVpSDXkiIBRTfnJMidDHqTkTmWHn;
}
constexpr void Rewired::ElementAssignmentInfo::__cordl_internal_set_oVpSDXkiIBRTfnJMidDHqTkTmWHn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oVpSDXkiIBRTfnJMidDHqTkTmWHn = value;
}
inline ::Rewired::Player* Rewired::ElementAssignmentInfo::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(this, ___internal_method);
}
inline ::Rewired::InputAction* Rewired::ElementAssignmentInfo::get_action()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_action", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputAction*>(this, ___internal_method);
}
inline ::Rewired::Controller* Rewired::ElementAssignmentInfo::get_controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::ElementAssignmentInfo::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline int32_t Rewired::ElementAssignmentInfo::get_controllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_controllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ControllerMap* Rewired::ElementAssignmentInfo::get_controllerMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_controllerMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ElementAssignmentInfo::get_elementIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_elementIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method);
}
inline ::Rewired::ActionElementMap* Rewired::ElementAssignmentInfo::get_elementMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_elementMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method);
}
inline ::Rewired::ControllerElementType Rewired::ElementAssignmentInfo::get_elementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_elementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(this, ___internal_method);
}
inline ::Rewired::Pole Rewired::ElementAssignmentInfo::get_axisContribution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_axisContribution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Pole>(this, ___internal_method);
}
inline ::Rewired::AxisRange Rewired::ElementAssignmentInfo::get_axisRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_axisRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(this, ___internal_method);
}
inline bool Rewired::ElementAssignmentInfo::get_invert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_invert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::KeyCode Rewired::ElementAssignmentInfo::get_keyCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_keyCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(this, ___internal_method);
}
inline ::Rewired::ModifierKeyFlags Rewired::ElementAssignmentInfo::get_modifierKeyFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_modifierKeyFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ModifierKeyFlags>(this, ___internal_method);
}
inline ::StringW Rewired::ElementAssignmentInfo::get_elementDisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {"get_elementDisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ElementAssignmentInfo::_ctor(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ElementAssignmentInfo* Rewired::ElementAssignmentInfo::New_ctor(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ElementAssignmentInfo*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::ElementAssignmentInfo::ElementAssignmentInfo()   {
}
