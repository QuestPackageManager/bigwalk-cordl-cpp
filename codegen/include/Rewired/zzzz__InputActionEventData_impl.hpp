#pragma once
// IWYU pragma private; include "Rewired/InputActionEventData.hpp"
#include "Rewired/zzzz__InputActionEventType_impl.hpp"
#include "Rewired/zzzz__UpdateLoopType_impl.hpp"
#include "Rewired/zzzz__InputActionEventData_def.hpp"
#include "GlobalNamespace/zzzz__bjNrHIdcztWtOhCzFNvyEAWtiLIA_def.hpp"
#include "Rewired/zzzz__AxisCoordinateMode_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__InputActionEventType_def.hpp"
#include "Rewired/zzzz__InputActionSourceData_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::Rewired::InputActionEventData.get_eventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputActionEventType (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::get_eventType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"get_eventType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.NiEpSqqGavxGZGrxJggCYQwFIEKp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputActionEventData::*)(::Rewired::InputActionEventType)>(&::Rewired::InputActionEventData::NiEpSqqGavxGZGrxJggCYQwFIEKp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"NiEpSqqGavxGZGrxJggCYQwFIEKp", {}, {::i2c::type_of<::Rewired::InputActionEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::get_player)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818445e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.get_actionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::get_actionName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181844540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"get_actionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.get_actionDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::get_actionDescriptiveName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818444a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"get_actionDescriptiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxis)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisPrev)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818435b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisTimeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisTimeActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisTimeActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisTimeInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisTimeInactive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisTimeInactive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisRaw)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisRawDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisRawDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisRawPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisRawPrev)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisRawTimeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisRawTimeActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818436a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawTimeActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisRawTimeInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisRawTimeInactive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818436d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawTimeInactive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisCoordinateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCoordinateMode (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisCoordinateMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisCoordinateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisCoordinateModePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCoordinateMode (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisCoordinateModePrev)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisCoordinateModePrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisRawCoordinateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCoordinateMode (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisRawCoordinateMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawCoordinateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetAxisRawCoordinateModePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCoordinateMode (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetAxisRawCoordinateModePrev)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818435e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawCoordinateModePrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonPrev)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818439a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818438e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonSinglePressHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonSinglePressHold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonSinglePressHold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonSinglePressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonSinglePressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonSinglePressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonSinglePressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonSinglePressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonSinglePressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonDoublePressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonDoublePressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818437c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonDoublePressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetButtonDoublePressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818437f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressDown", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonDoublePressHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonDoublePressHold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressHold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonDoublePressHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetButtonDoublePressHold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressHold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonDoublePressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonDoublePressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonDoublePressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetButtonDoublePressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818438b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressUp", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonTimedPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetButtonTimedPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonTimedPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t, float_t)>(&::Rewired::InputActionEventData::GetButtonTimedPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonTimedPressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetButtonTimedPressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPressDown", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonTimedPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetButtonTimedPressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPressUp", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonTimedPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t, float_t)>(&::Rewired::InputActionEventData::GetButtonTimedPressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPressUp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonShortPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonShortPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonShortPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonShortPressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonShortPressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonShortPressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonShortPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonShortPressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonShortPressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonLongPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonLongPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonLongPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonLongPressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonLongPressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonLongPressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonLongPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonLongPressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonLongPressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonRepeating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonRepeating)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818439d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonRepeating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonTimePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonTimePressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetButtonTimeUnpressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetButtonTimeUnpressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimeUnpressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonPrev)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonSinglePressHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonSinglePressHold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonSinglePressHold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonSinglePressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonSinglePressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonSinglePressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonSinglePressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonSinglePressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonSinglePressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonDoublePressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonDoublePressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonDoublePressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetNegativeButtonDoublePressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressDown", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonDoublePressHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonDoublePressHold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressHold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonDoublePressHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetNegativeButtonDoublePressHold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressHold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonDoublePressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonDoublePressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonDoublePressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetNegativeButtonDoublePressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressUp", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonTimedPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetNegativeButtonTimedPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818441a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonTimedPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t, float_t)>(&::Rewired::InputActionEventData::GetNegativeButtonTimedPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818441d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonTimedPressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetNegativeButtonTimedPressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPressDown", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonTimedPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t)>(&::Rewired::InputActionEventData::GetNegativeButtonTimedPressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPressUp", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonTimedPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(float_t, float_t)>(&::Rewired::InputActionEventData::GetNegativeButtonTimedPressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPressUp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonShortPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonShortPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonShortPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonShortPressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonShortPressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonShortPressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonShortPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonShortPressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonShortPressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonLongPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonLongPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonLongPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonLongPressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonLongPressDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonLongPressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonLongPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonLongPressUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonLongPressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonRepeating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonRepeating)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181843f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonRepeating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonTimePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonTimePressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818440b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetNegativeButtonTimeUnpressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetNegativeButtonTimeUnpressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818440e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimeUnpressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.GetCurrentInputSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::InputActionSourceData>* (::Rewired::InputActionEventData::*)()>(&::Rewired::InputActionEventData::GetCurrentInputSources)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181843cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetCurrentInputSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.IsCurrentInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(::Rewired::ControllerType)>(&::Rewired::InputActionEventData::IsCurrentInputSource)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818443b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"IsCurrentInputSource", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.IsCurrentInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::InputActionEventData::IsCurrentInputSource)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181844300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"IsCurrentInputSource", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData.IsCurrentInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputActionEventData::*)(::Rewired::Controller*)>(&::Rewired::InputActionEventData::IsCurrentInputSource)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181844260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"IsCurrentInputSource", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputActionEventData::*)(::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*, int32_t, int32_t, ::Rewired::UpdateLoopType)>(&::Rewired::InputActionEventData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181844440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::InputActionEventType Rewired::InputActionEventData::get_eventType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"get_eventType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputActionEventType>(*this, ___internal_method);
}
inline void Rewired::InputActionEventData::NiEpSqqGavxGZGrxJggCYQwFIEKp(::Rewired::InputActionEventType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"NiEpSqqGavxGZGrxJggCYQwFIEKp", {}, {::i2c::type_of<::Rewired::InputActionEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Player* Rewired::InputActionEventData::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(*this, ___internal_method);
}
inline ::StringW Rewired::InputActionEventData::get_actionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"get_actionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Rewired::InputActionEventData::get_actionDescriptiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"get_actionDescriptiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline float_t Rewired::InputActionEventData::GetAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t Rewired::InputActionEventData::GetAxisPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t Rewired::InputActionEventData::GetAxisDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline double_t Rewired::InputActionEventData::GetAxisTimeActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisTimeActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Rewired::InputActionEventData::GetAxisTimeInactive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisTimeInactive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline float_t Rewired::InputActionEventData::GetAxisRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t Rewired::InputActionEventData::GetAxisRawDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t Rewired::InputActionEventData::GetAxisRawPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline double_t Rewired::InputActionEventData::GetAxisRawTimeActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawTimeActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Rewired::InputActionEventData::GetAxisRawTimeInactive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawTimeInactive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::Rewired::AxisCoordinateMode Rewired::InputActionEventData::GetAxisCoordinateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisCoordinateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCoordinateMode>(*this, ___internal_method);
}
inline ::Rewired::AxisCoordinateMode Rewired::InputActionEventData::GetAxisCoordinateModePrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisCoordinateModePrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCoordinateMode>(*this, ___internal_method);
}
inline ::Rewired::AxisCoordinateMode Rewired::InputActionEventData::GetAxisRawCoordinateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawCoordinateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCoordinateMode>(*this, ___internal_method);
}
inline ::Rewired::AxisCoordinateMode Rewired::InputActionEventData::GetAxisRawCoordinateModePrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetAxisRawCoordinateModePrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCoordinateMode>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonSinglePressHold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonSinglePressHold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonSinglePressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonSinglePressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonSinglePressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonSinglePressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonDoublePressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonDoublePressDown(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressDown", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, speed);
}
inline bool Rewired::InputActionEventData::GetButtonDoublePressHold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressHold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonDoublePressHold(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressHold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, speed);
}
inline bool Rewired::InputActionEventData::GetButtonDoublePressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonDoublePressUp(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonDoublePressUp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, speed);
}
inline bool Rewired::InputActionEventData::GetButtonTimedPress(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time);
}
inline bool Rewired::InputActionEventData::GetButtonTimedPress(float_t  time, float_t  expireIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time, expireIn);
}
inline bool Rewired::InputActionEventData::GetButtonTimedPressDown(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPressDown", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time);
}
inline bool Rewired::InputActionEventData::GetButtonTimedPressUp(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPressUp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time);
}
inline bool Rewired::InputActionEventData::GetButtonTimedPressUp(float_t  time, float_t  expireIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimedPressUp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time, expireIn);
}
inline bool Rewired::InputActionEventData::GetButtonShortPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonShortPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonShortPressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonShortPressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonShortPressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonShortPressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonLongPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonLongPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonLongPressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonLongPressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonLongPressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonLongPressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetButtonRepeating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonRepeating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline double_t Rewired::InputActionEventData::GetButtonTimePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Rewired::InputActionEventData::GetButtonTimeUnpressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetButtonTimeUnpressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonSinglePressHold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonSinglePressHold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonSinglePressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonSinglePressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonSinglePressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonSinglePressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonDoublePressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonDoublePressDown(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressDown", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, speed);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonDoublePressHold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressHold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonDoublePressHold(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressHold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, speed);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonDoublePressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonDoublePressUp(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonDoublePressUp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, speed);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonTimedPress(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonTimedPress(float_t  time, float_t  expireIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time, expireIn);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonTimedPressDown(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPressDown", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonTimedPressUp(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPressUp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonTimedPressUp(float_t  time, float_t  expireIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimedPressUp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time, expireIn);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonShortPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonShortPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonShortPressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonShortPressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonShortPressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonShortPressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonLongPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonLongPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonLongPressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonLongPressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonLongPressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonLongPressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::GetNegativeButtonRepeating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonRepeating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline double_t Rewired::InputActionEventData::GetNegativeButtonTimePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Rewired::InputActionEventData::GetNegativeButtonTimeUnpressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetNegativeButtonTimeUnpressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::InputActionSourceData>* Rewired::InputActionEventData::GetCurrentInputSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"GetCurrentInputSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::InputActionSourceData>*>(*this, ___internal_method);
}
inline bool Rewired::InputActionEventData::IsCurrentInputSource(::Rewired::ControllerType  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"IsCurrentInputSource", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, controllerType);
}
inline bool Rewired::InputActionEventData::IsCurrentInputSource(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"IsCurrentInputSource", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, controllerType, controllerId);
}
inline bool Rewired::InputActionEventData::IsCurrentInputSource(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {"IsCurrentInputSource", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, controller);
}
inline void Rewired::InputActionEventData::_ctor(::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionEventData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
// Ctor Parameters [CppParam { name: "OIUJLGCQaMvAgIqfMEQRbbccfNsC", ty: "::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*", modifiers: "", def_value: Some("{}") }, CppParam { name: "mywRDqrUvJNJkChRSnYrkvzATNpv", ty: "::Rewired::InputActionEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "updateLoop", ty: "::Rewired::UpdateLoopType", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputActionEventData::InputActionEventData(::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*  OIUJLGCQaMvAgIqfMEQRbbccfNsC, ::Rewired::InputActionEventType  mywRDqrUvJNJkChRSnYrkvzATNpv, int32_t  playerId, int32_t  actionId, ::Rewired::UpdateLoopType  updateLoop) noexcept  {
this->OIUJLGCQaMvAgIqfMEQRbbccfNsC = OIUJLGCQaMvAgIqfMEQRbbccfNsC;
this->mywRDqrUvJNJkChRSnYrkvzATNpv = mywRDqrUvJNJkChRSnYrkvzATNpv;
this->playerId = playerId;
this->actionId = actionId;
this->updateLoop = updateLoop;
}
// Ctor Parameters []
constexpr ::Rewired::InputActionEventData::InputActionEventData()   {
}
