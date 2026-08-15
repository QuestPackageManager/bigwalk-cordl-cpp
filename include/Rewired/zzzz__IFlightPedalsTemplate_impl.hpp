#pragma once
// IWYU pragma private; include "Rewired/IFlightPedalsTemplate.hpp"
#include "Rewired/zzzz__IFlightPedalsTemplate_def.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
//  Writing Method size for method: ::Rewired::IFlightPedalsTemplate.get_leftPedal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IFlightPedalsTemplate::*)()>(&::Rewired::IFlightPedalsTemplate::get_leftPedal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(),
                    {::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IFlightPedalsTemplate.get_rightPedal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IFlightPedalsTemplate::*)()>(&::Rewired::IFlightPedalsTemplate::get_rightPedal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(),
                    {::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IFlightPedalsTemplate.get_slide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IFlightPedalsTemplate::*)()>(&::Rewired::IFlightPedalsTemplate::get_slide)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(),
                    {::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::IControllerTemplateAxis* Rewired::IFlightPedalsTemplate::get_leftPedal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IFlightPedalsTemplate::get_rightPedal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IFlightPedalsTemplate::get_slide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IFlightPedalsTemplate*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr  Rewired::IFlightPedalsTemplate::operator ::Rewired::IControllerTemplate*() noexcept {
return static_cast<::Rewired::IControllerTemplate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* Rewired::IFlightPedalsTemplate::i___Rewired__IControllerTemplate() noexcept {
return static_cast<::Rewired::IControllerTemplate*>(static_cast<void*>(this));
}
