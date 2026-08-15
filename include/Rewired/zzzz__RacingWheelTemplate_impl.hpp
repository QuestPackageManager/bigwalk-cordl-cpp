#pragma once
// IWYU pragma private; include "Rewired/RacingWheelTemplate.hpp"
#include "Rewired/zzzz__ControllerTemplate_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Rewired/zzzz__RacingWheelTemplate_def.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis_def.hpp"
#include "Rewired/zzzz__IControllerTemplateButton_def.hpp"
#include "Rewired/zzzz__IControllerTemplateDPad_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "Rewired/zzzz__IRacingWheelTemplate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_accelerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_accelerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_accelerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_brake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_brake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_brake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_clutch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_clutch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180396690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_clutch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shiftDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shiftDown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180394160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shiftDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shiftUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shiftUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180394180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shiftUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803941a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton5)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton6)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton7)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton8)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton9)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_wheelButton10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton10)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton5)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton6)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton7)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton8)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton9)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_consoleButton10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton10)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180394300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180396710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180396730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter5)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180396750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter6)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180396770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter7)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180396790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter8)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803967b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter9)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803967d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_shifter10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter10)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803966f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_reverseGear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_reverseGear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_reverseGear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_select)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803966d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_select", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803967f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_systemButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_systemButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180396810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_systemButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_horn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_horn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_horn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate.Rewired_IRacingWheelTemplate_get_dPad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateDPad* (::Rewired::RacingWheelTemplate::*)()>(&::Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_dPad)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803966b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_dPad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RacingWheelTemplate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::RacingWheelTemplate::*)(::System::Object*)>(&::Rewired::RacingWheelTemplate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::RacingWheelTemplate::setStaticF_typeGuid(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "typeGuid", ::Rewired::RacingWheelTemplate*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::RacingWheelTemplate::getStaticF_typeGuid()  {
return ::cordl_internals::getStaticField<::System::Guid, "typeGuid", ::Rewired::RacingWheelTemplate*>();
}
inline ::Rewired::IControllerTemplateAxis* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_accelerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_accelerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_brake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_brake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_clutch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_clutch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shiftDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shiftDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shiftUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shiftUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_wheelButton10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_wheelButton10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_consoleButton10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_consoleButton10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_shifter10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_shifter10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_reverseGear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_reverseGear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_select()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_select", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_systemButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_systemButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_horn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_horn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateDPad* Rewired::RacingWheelTemplate::Rewired_IRacingWheelTemplate_get_dPad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {"Rewired.IRacingWheelTemplate.get_dPad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateDPad*>(this, ___internal_method);
}
inline void Rewired::RacingWheelTemplate::_ctor(::System::Object*  payload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RacingWheelTemplate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, payload);
}
inline ::Rewired::RacingWheelTemplate* Rewired::RacingWheelTemplate::New_ctor(::System::Object*  payload)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::RacingWheelTemplate*>(payload));
}
/// @brief Convert operator to "::Rewired::IRacingWheelTemplate"
constexpr  Rewired::RacingWheelTemplate::operator ::Rewired::IRacingWheelTemplate*() noexcept {
return static_cast<::Rewired::IRacingWheelTemplate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IRacingWheelTemplate"
constexpr ::Rewired::IRacingWheelTemplate* Rewired::RacingWheelTemplate::i___Rewired__IRacingWheelTemplate() noexcept {
return static_cast<::Rewired::IRacingWheelTemplate*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr  Rewired::RacingWheelTemplate::operator ::Rewired::IControllerTemplate*() noexcept {
return static_cast<::Rewired::IControllerTemplate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* Rewired::RacingWheelTemplate::i___Rewired__IControllerTemplate() noexcept {
return static_cast<::Rewired::IControllerTemplate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::RacingWheelTemplate::RacingWheelTemplate()   {
}
