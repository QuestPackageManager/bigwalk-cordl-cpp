#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerAssigner.hpp"
#include "Rewired/Interfaces/zzzz__IControllerAssigner_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IControllerAssigner.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::IControllerAssigner::*)()>(&::Rewired::Interfaces::IControllerAssigner::get_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerAssigner.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IControllerAssigner::*)(bool)>(&::Rewired::Interfaces::IControllerAssigner::set_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerAssigner.CanHandleAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::IControllerAssigner::*)(::Rewired::ControllerType, ::Rewired::Controller*)>(&::Rewired::Interfaces::IControllerAssigner::CanHandleAssignment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerAssigner.AssignController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IControllerAssigner::*)(::Rewired::ControllerType, ::Rewired::Controller*)>(&::Rewired::Interfaces::IControllerAssigner::AssignController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Interfaces::IControllerAssigner::get_enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Interfaces::IControllerAssigner::set_enabled(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Interfaces::IControllerAssigner::CanHandleAssignment(::Rewired::ControllerType  controllerType, ::Rewired::Controller*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controllerType, controller);
}
inline void Rewired::Interfaces::IControllerAssigner::AssignController(::Rewired::ControllerType  controllerType, ::Rewired::Controller*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerAssigner*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controller);
}
