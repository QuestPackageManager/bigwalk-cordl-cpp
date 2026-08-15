#pragma once
// IWYU pragma private; include "Rewired/IControllerElementTarget.hpp"
#include "Rewired/zzzz__IControllerElementTarget_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerElementTarget.get_elementIdentifierId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::IControllerElementTarget::*)()>(&::Rewired::IControllerElementTarget::get_elementIdentifierId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerElementTarget*>(),
                    {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerElementTarget.get_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (::Rewired::IControllerElementTarget::*)()>(&::Rewired::IControllerElementTarget::get_axisRange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerElementTarget*>(),
                    {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerElementTarget.get_hasTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IControllerElementTarget::*)()>(&::Rewired::IControllerElementTarget::get_hasTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerElementTarget*>(),
                    {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerElementTarget.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::IControllerElementTarget::*)()>(&::Rewired::IControllerElementTarget::get_elementType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerElementTarget*>(),
                    {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerElementTarget.get_descriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::IControllerElementTarget::*)()>(&::Rewired::IControllerElementTarget::get_descriptiveName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerElementTarget*>(),
                    {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerElementTarget.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::IControllerElementTarget::*)()>(&::Rewired::IControllerElementTarget::get_controller)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerElementTarget*>(),
                    {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerElementTarget.get_element
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Element* (::Rewired::IControllerElementTarget::*)()>(&::Rewired::IControllerElementTarget::get_element)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerElementTarget*>(),
                    {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 6}
                ));
    return ___internal_method;
  }
};
inline int32_t Rewired::IControllerElementTarget::get_elementIdentifierId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::AxisRange Rewired::IControllerElementTarget::get_axisRange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(this, ___internal_method);
}
inline bool Rewired::IControllerElementTarget::get_hasTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerElementType Rewired::IControllerElementTarget::get_elementType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(this, ___internal_method);
}
inline ::StringW Rewired::IControllerElementTarget::get_descriptiveName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::Controller* Rewired::IControllerElementTarget::get_controller()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(this, ___internal_method);
}
inline ::Rewired::Controller_Element* Rewired::IControllerElementTarget::get_element()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerElementTarget*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Element*>(this, ___internal_method);
}
