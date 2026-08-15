#pragma once
// IWYU pragma private; include "Rewired/ElementAssignmentConflictCheck.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "Rewired/zzzz__ElementAssignmentType_impl.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_impl.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictCheck_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__ElementAssignmentType_def.hpp"
#include "Rewired/zzzz__ElementAssignment_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_elementAssignmentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignmentType (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_elementAssignmentType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_elementAssignmentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_elementAssignmentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(::Rewired::ElementAssignmentType)>(&::Rewired::ElementAssignmentConflictCheck::set_elementAssignmentType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_elementAssignmentType", {}, {::i2c::type_of<::Rewired::ElementAssignmentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_playerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t)>(&::Rewired::ElementAssignmentConflictCheck::set_playerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_playerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(::Rewired::ControllerType)>(&::Rewired::ElementAssignmentConflictCheck::set_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_controllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_controllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t)>(&::Rewired::ElementAssignmentConflictCheck::set_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_controllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_controllerMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_controllerMapId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_controllerMapId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_controllerMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t)>(&::Rewired::ElementAssignmentConflictCheck::set_controllerMapId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_controllerMapId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_controllerMapCategoryId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_controllerMapCategoryId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_controllerMapCategoryId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_controllerMapCategoryId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t)>(&::Rewired::ElementAssignmentConflictCheck::set_controllerMapCategoryId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_controllerMapCategoryId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_elementMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_elementMapId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_elementMapId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_elementMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t)>(&::Rewired::ElementAssignmentConflictCheck::set_elementMapId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_elementMapId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_elementIdentifierId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_elementIdentifierId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_elementIdentifierId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_elementIdentifierId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t)>(&::Rewired::ElementAssignmentConflictCheck::set_elementIdentifierId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_elementIdentifierId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_axisRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_axisRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(::Rewired::AxisRange)>(&::Rewired::ElementAssignmentConflictCheck::set_axisRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_axisRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_keyboardKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_keyboardKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_keyboardKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_keyboardKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(::UnityEngine::KeyCode)>(&::Rewired::ElementAssignmentConflictCheck::set_keyboardKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_keyboardKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_modifierKeyFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ModifierKeyFlags (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_modifierKeyFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_modifierKeyFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_modifierKeyFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(::Rewired::ModifierKeyFlags)>(&::Rewired::ElementAssignmentConflictCheck::set_modifierKeyFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_modifierKeyFlags", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_actionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t)>(&::Rewired::ElementAssignmentConflictCheck::set_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_axisContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Pole (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_axisContribution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_axisContribution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_axisContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(::Rewired::Pole)>(&::Rewired::ElementAssignmentConflictCheck::set_axisContribution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_axisContribution", {}, {::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.get_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::get_invert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_invert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.set_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(bool)>(&::Rewired::ElementAssignmentConflictCheck::set_invert)> {
  constexpr static std::size_t size = 0x2090;
  constexpr static std::size_t addrs = 0x180c29b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_invert", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, ::Rewired::ElementAssignmentType, int32_t, ::Rewired::AxisRange, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags, int32_t, ::Rewired::Pole, bool)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181841b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ElementAssignmentType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, ::Rewired::ElementAssignmentType, int32_t, ::Rewired::AxisRange, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags, int32_t, ::Rewired::Pole, bool, int32_t)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181841640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ElementAssignmentType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, ::Rewired::ControllerElementType, int32_t, ::Rewired::AxisRange, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags, int32_t, ::Rewired::Pole, bool)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181841a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, ::Rewired::ControllerElementType, int32_t, ::Rewired::AxisRange, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags, int32_t, ::Rewired::Pole, bool, int32_t)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181841920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, int32_t, int32_t, bool)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818417d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, int32_t, int32_t, bool, int32_t)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818416d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, int32_t, ::Rewired::AxisRange, int32_t, ::Rewired::Pole)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181841840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, int32_t, ::Rewired::AxisRange, int32_t, ::Rewired::Pole, int32_t)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181841520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, int32_t, int32_t, ::Rewired::Pole)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818418b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, int32_t, int32_t, ::Rewired::Pole, int32_t)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181841750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags, int32_t, ::Rewired::Pole)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818414a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(int32_t, ::Rewired::ControllerType, int32_t, int32_t, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags, int32_t, ::Rewired::Pole, int32_t)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181841a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)(::Rewired::ElementAssignmentConflictCheck)>(&::Rewired::ElementAssignmentConflictCheck::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818415a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.ToElementAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignment (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::ToElementAssignment)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181841240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToElementAssignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.ToFullAxisAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignment (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::ToFullAxisAssignment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818412f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToFullAxisAssignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.ToSplitAxisAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignment (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::ToSplitAxisAssignment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181841420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToSplitAxisAssignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.ToButtonAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignment (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::ToButtonAssignment)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181841190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToButtonAssignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.ToKeyboardKeyAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignment (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::ToKeyboardKeyAssignment)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181841370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToKeyboardKeyAssignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementAssignmentConflictCheck.uDNPqUAIidrlsbpaXTyFJTaoaKMP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementAssignmentConflictCheck::*)()>(&::Rewired::ElementAssignmentConflictCheck::uDNPqUAIidrlsbpaXTyFJTaoaKMP)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181841ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"uDNPqUAIidrlsbpaXTyFJTaoaKMP", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::ElementAssignmentType Rewired::ElementAssignmentConflictCheck::get_elementAssignmentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_elementAssignmentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignmentType>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_elementAssignmentType(::Rewired::ElementAssignmentType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_elementAssignmentType", {}, {::i2c::type_of<::Rewired::ElementAssignmentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::ElementAssignmentConflictCheck::get_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_playerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_playerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerType Rewired::ElementAssignmentConflictCheck::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_controllerType(::Rewired::ControllerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_controllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::ElementAssignmentConflictCheck::get_controllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_controllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_controllerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_controllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::ElementAssignmentConflictCheck::get_controllerMapId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_controllerMapId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_controllerMapId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_controllerMapId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::ElementAssignmentConflictCheck::get_controllerMapCategoryId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_controllerMapCategoryId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_controllerMapCategoryId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_controllerMapCategoryId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::ElementAssignmentConflictCheck::get_elementMapId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_elementMapId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_elementMapId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_elementMapId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::ElementAssignmentConflictCheck::get_elementIdentifierId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_elementIdentifierId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_elementIdentifierId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_elementIdentifierId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::AxisRange Rewired::ElementAssignmentConflictCheck::get_axisRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_axisRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_axisRange(::Rewired::AxisRange  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_axisRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::KeyCode Rewired::ElementAssignmentConflictCheck::get_keyboardKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_keyboardKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_keyboardKey(::UnityEngine::KeyCode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_keyboardKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ModifierKeyFlags Rewired::ElementAssignmentConflictCheck::get_modifierKeyFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_modifierKeyFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ModifierKeyFlags>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_modifierKeyFlags(::Rewired::ModifierKeyFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_modifierKeyFlags", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::ElementAssignmentConflictCheck::get_actionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_actionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_actionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::Pole Rewired::ElementAssignmentConflictCheck::get_axisContribution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_axisContribution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Pole>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_axisContribution(::Rewired::Pole  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_axisContribution", {}, {::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Rewired::ElementAssignmentConflictCheck::get_invert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"get_invert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::set_invert(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"set_invert", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ElementAssignmentType  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_6, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_10, bool  _cordl_fixed_empty_name_whitespace_param_11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ElementAssignmentType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ElementAssignmentType  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_6, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_10, bool  _cordl_fixed_empty_name_whitespace_param_11, int32_t  _cordl_fixed_empty_name_whitespace_param_12)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ElementAssignmentType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11, _cordl_fixed_empty_name_whitespace_param_12);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_6, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_10, bool  _cordl_fixed_empty_name_whitespace_param_11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_6, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_10, bool  _cordl_fixed_empty_name_whitespace_param_11, int32_t  _cordl_fixed_empty_name_whitespace_param_12)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11, _cordl_fixed_empty_name_whitespace_param_12);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void Rewired::ElementAssignmentConflictCheck::_ctor(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ElementAssignment Rewired::ElementAssignmentConflictCheck::ToElementAssignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToElementAssignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignment>(*this, ___internal_method);
}
inline ::Rewired::ElementAssignment Rewired::ElementAssignmentConflictCheck::ToFullAxisAssignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToFullAxisAssignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignment>(*this, ___internal_method);
}
inline ::Rewired::ElementAssignment Rewired::ElementAssignmentConflictCheck::ToSplitAxisAssignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToSplitAxisAssignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignment>(*this, ___internal_method);
}
inline ::Rewired::ElementAssignment Rewired::ElementAssignmentConflictCheck::ToButtonAssignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToButtonAssignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignment>(*this, ___internal_method);
}
inline ::Rewired::ElementAssignment Rewired::ElementAssignmentConflictCheck::ToKeyboardKeyAssignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"ToKeyboardKeyAssignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignment>(*this, ___internal_method);
}
inline void Rewired::ElementAssignmentConflictCheck::uDNPqUAIidrlsbpaXTyFJTaoaKMP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementAssignmentConflictCheck>(),
                        {"uDNPqUAIidrlsbpaXTyFJTaoaKMP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "dkMhdJQRpZrjSRlJmemmClBWtLaT", ty: "::Rewired::ElementAssignmentType", modifiers: "", def_value: Some("{}") }, CppParam { name: "jiJIKUsuTITuSoWODLQDNYJxhcPx", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LZpuaWxPCbDrEyvZZvMvCWohPAIS", ty: "::Rewired::ControllerType", modifiers: "", def_value: Some("{}") }, CppParam { name: "KcWCyEQnsZnZGiLTaRvqGhkKESkS", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reKmvergZkHGokjdEIWOdDbKvNilA", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rgDyIBzJPloAQBEEDCdaYZphiNps", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fVzADSQYCOXNXDEeKgriCzrdmTfT", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xTrMBSAwjrAqRLcNKzTqjjFgZbby", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BMhqWeZGQYauAsbCEAHBDQaCirsJ", ty: "::Rewired::AxisRange", modifiers: "", def_value: Some("{}") }, CppParam { name: "gdwdOHJKXZdEVBvxacoWiuGdveHnB", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "tpQRKLttYNEEvtftGGtzafQeCagQ", ty: "::Rewired::ModifierKeyFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "FdTDSQgNLlJzPTDpWQbUfiytDpjI", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ZQLpHTIXBPeOjVsSXFxlYjwTSOfs", ty: "::Rewired::Pole", modifiers: "", def_value: Some("{}") }, CppParam { name: "WqLQiARnhUerXilxqXvQCIHVdYpbb", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ElementAssignmentConflictCheck::ElementAssignmentConflictCheck(::Rewired::ElementAssignmentType  dkMhdJQRpZrjSRlJmemmClBWtLaT, int32_t  jiJIKUsuTITuSoWODLQDNYJxhcPx, ::Rewired::ControllerType  LZpuaWxPCbDrEyvZZvMvCWohPAIS, int32_t  KcWCyEQnsZnZGiLTaRvqGhkKESkS, int32_t  reKmvergZkHGokjdEIWOdDbKvNilA, int32_t  rgDyIBzJPloAQBEEDCdaYZphiNps, int32_t  fVzADSQYCOXNXDEeKgriCzrdmTfT, int32_t  xTrMBSAwjrAqRLcNKzTqjjFgZbby, ::Rewired::AxisRange  BMhqWeZGQYauAsbCEAHBDQaCirsJ, ::UnityEngine::KeyCode  gdwdOHJKXZdEVBvxacoWiuGdveHnB, ::Rewired::ModifierKeyFlags  tpQRKLttYNEEvtftGGtzafQeCagQ, int32_t  FdTDSQgNLlJzPTDpWQbUfiytDpjI, ::Rewired::Pole  ZQLpHTIXBPeOjVsSXFxlYjwTSOfs, bool  WqLQiARnhUerXilxqXvQCIHVdYpbb) noexcept  {
this->dkMhdJQRpZrjSRlJmemmClBWtLaT = dkMhdJQRpZrjSRlJmemmClBWtLaT;
this->jiJIKUsuTITuSoWODLQDNYJxhcPx = jiJIKUsuTITuSoWODLQDNYJxhcPx;
this->LZpuaWxPCbDrEyvZZvMvCWohPAIS = LZpuaWxPCbDrEyvZZvMvCWohPAIS;
this->KcWCyEQnsZnZGiLTaRvqGhkKESkS = KcWCyEQnsZnZGiLTaRvqGhkKESkS;
this->reKmvergZkHGokjdEIWOdDbKvNilA = reKmvergZkHGokjdEIWOdDbKvNilA;
this->rgDyIBzJPloAQBEEDCdaYZphiNps = rgDyIBzJPloAQBEEDCdaYZphiNps;
this->fVzADSQYCOXNXDEeKgriCzrdmTfT = fVzADSQYCOXNXDEeKgriCzrdmTfT;
this->xTrMBSAwjrAqRLcNKzTqjjFgZbby = xTrMBSAwjrAqRLcNKzTqjjFgZbby;
this->BMhqWeZGQYauAsbCEAHBDQaCirsJ = BMhqWeZGQYauAsbCEAHBDQaCirsJ;
this->gdwdOHJKXZdEVBvxacoWiuGdveHnB = gdwdOHJKXZdEVBvxacoWiuGdveHnB;
this->tpQRKLttYNEEvtftGGtzafQeCagQ = tpQRKLttYNEEvtftGGtzafQeCagQ;
this->FdTDSQgNLlJzPTDpWQbUfiytDpjI = FdTDSQgNLlJzPTDpWQbUfiytDpjI;
this->ZQLpHTIXBPeOjVsSXFxlYjwTSOfs = ZQLpHTIXBPeOjVsSXFxlYjwTSOfs;
this->WqLQiARnhUerXilxqXvQCIHVdYpbb = WqLQiARnhUerXilxqXvQCIHVdYpbb;
}
// Ctor Parameters []
constexpr ::Rewired::ElementAssignmentConflictCheck::ElementAssignmentConflictCheck()   {
}
