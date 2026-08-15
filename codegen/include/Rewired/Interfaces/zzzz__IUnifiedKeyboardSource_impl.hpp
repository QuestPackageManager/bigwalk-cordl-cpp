#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IUnifiedKeyboardSource.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedKeyboardSource_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedKeyboardSource.get_inputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputSource (::Rewired::Interfaces::IUnifiedKeyboardSource::*)()>(&::Rewired::Interfaces::IUnifiedKeyboardSource::get_inputSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedKeyboardSource.get_hardwareMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareControllerMap_Game* (::Rewired::Interfaces::IUnifiedKeyboardSource::*)()>(&::Rewired::Interfaces::IUnifiedKeyboardSource::get_hardwareMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedKeyboardSource.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Interfaces::IUnifiedKeyboardSource::*)()>(&::Rewired::Interfaces::IUnifiedKeyboardSource::get_buttonCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedKeyboardSource.get_controllerExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::Interfaces::IUnifiedKeyboardSource::*)()>(&::Rewired::Interfaces::IUnifiedKeyboardSource::get_controllerExtension)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedKeyboardSource.UpdateInputData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IUnifiedKeyboardSource::*)(::Rewired::ControllerDataUpdater*)>(&::Rewired::Interfaces::IUnifiedKeyboardSource::UpdateInputData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedKeyboardSource.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IUnifiedKeyboardSource::*)()>(&::Rewired::Interfaces::IUnifiedKeyboardSource::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 5}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::InputSource Rewired::Interfaces::IUnifiedKeyboardSource::get_inputSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputSource>(this, ___internal_method);
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::Interfaces::IUnifiedKeyboardSource::get_hardwareMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareControllerMap_Game*>(this, ___internal_method);
}
inline int32_t Rewired::Interfaces::IUnifiedKeyboardSource::get_buttonCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::Controller_Extension* Rewired::Interfaces::IUnifiedKeyboardSource::get_controllerExtension()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::Interfaces::IUnifiedKeyboardSource::UpdateInputData(::Rewired::ControllerDataUpdater*  dataUpdater)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataUpdater);
}
inline void Rewired::Interfaces::IUnifiedKeyboardSource::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
