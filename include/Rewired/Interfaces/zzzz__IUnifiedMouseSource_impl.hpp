#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IUnifiedMouseSource.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedMouseSource_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedMouseSource.get_inputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputSource (::Rewired::Interfaces::IUnifiedMouseSource::*)()>(&::Rewired::Interfaces::IUnifiedMouseSource::get_inputSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedMouseSource.get_hardwareMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareControllerMap_Game* (::Rewired::Interfaces::IUnifiedMouseSource::*)()>(&::Rewired::Interfaces::IUnifiedMouseSource::get_hardwareMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedMouseSource.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Interfaces::IUnifiedMouseSource::*)()>(&::Rewired::Interfaces::IUnifiedMouseSource::get_axisCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedMouseSource.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Interfaces::IUnifiedMouseSource::*)()>(&::Rewired::Interfaces::IUnifiedMouseSource::get_buttonCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedMouseSource.get_mousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Interfaces::IUnifiedMouseSource::*)()>(&::Rewired::Interfaces::IUnifiedMouseSource::get_mousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedMouseSource.get_controllerExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::Interfaces::IUnifiedMouseSource::*)()>(&::Rewired::Interfaces::IUnifiedMouseSource::get_controllerExtension)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedMouseSource.UpdateInputData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IUnifiedMouseSource::*)(::Rewired::ControllerDataUpdater*)>(&::Rewired::Interfaces::IUnifiedMouseSource::UpdateInputData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IUnifiedMouseSource.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IUnifiedMouseSource::*)()>(&::Rewired::Interfaces::IUnifiedMouseSource::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 7}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::InputSource Rewired::Interfaces::IUnifiedMouseSource::get_inputSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputSource>(this, ___internal_method);
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::Interfaces::IUnifiedMouseSource::get_hardwareMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareControllerMap_Game*>(this, ___internal_method);
}
inline int32_t Rewired::Interfaces::IUnifiedMouseSource::get_axisCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Interfaces::IUnifiedMouseSource::get_buttonCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Interfaces::IUnifiedMouseSource::get_mousePosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::Rewired::Controller_Extension* Rewired::Interfaces::IUnifiedMouseSource::get_controllerExtension()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::Interfaces::IUnifiedMouseSource::UpdateInputData(::Rewired::ControllerDataUpdater*  dataUpdater)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataUpdater);
}
inline void Rewired::Interfaces::IUnifiedMouseSource::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IUnifiedMouseSource*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
