#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/IHIDControllerExtension.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::IHIDControllerExtension.get_vendorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::IHIDControllerExtension::*)()>(&::Rewired::ControllerExtensions::IHIDControllerExtension::get_vendorId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::IHIDControllerExtension.get_productId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::IHIDControllerExtension::*)()>(&::Rewired::ControllerExtensions::IHIDControllerExtension::get_productId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::IHIDControllerExtension.get_productName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::IHIDControllerExtension::*)()>(&::Rewired::ControllerExtensions::IHIDControllerExtension::get_productName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::IHIDControllerExtension.get_manufacturer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::IHIDControllerExtension::*)()>(&::Rewired::ControllerExtensions::IHIDControllerExtension::get_manufacturer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::IHIDControllerExtension.get_usagePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::IHIDControllerExtension::*)()>(&::Rewired::ControllerExtensions::IHIDControllerExtension::get_usagePage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::IHIDControllerExtension.get_usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::IHIDControllerExtension::*)()>(&::Rewired::ControllerExtensions::IHIDControllerExtension::get_usage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
inline uint16_t Rewired::ControllerExtensions::IHIDControllerExtension::get_vendorId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::IHIDControllerExtension::get_productId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::IHIDControllerExtension::get_productName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::IHIDControllerExtension::get_manufacturer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::IHIDControllerExtension::get_usagePage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::IHIDControllerExtension::get_usage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IHIDControllerExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
