#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareButtonInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareButtonInfo_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IDeepCloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareButtonInfo.get_excludeFromPolling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::HardwareButtonInfo::*)()>(&::Rewired::Data::Mapping::HardwareButtonInfo::get_excludeFromPolling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {"get_excludeFromPolling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareButtonInfo.get_isPressureSensitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::HardwareButtonInfo::*)()>(&::Rewired::Data::Mapping::HardwareButtonInfo::get_isPressureSensitive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {"get_isPressureSensitive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareButtonInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareButtonInfo::*)()>(&::Rewired::Data::Mapping::HardwareButtonInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18188a800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareButtonInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareButtonInfo::*)(bool, bool)>(&::Rewired::Data::Mapping::HardwareButtonInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815c5170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareButtonInfo.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::Mapping::HardwareButtonInfo::*)()>(&::Rewired::Data::Mapping::HardwareButtonInfo::DeepClone)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818d0cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {"DeepClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::Mapping::HardwareButtonInfo::__cordl_internal_get__excludeFromPolling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeFromPolling;
}
constexpr bool const& Rewired::Data::Mapping::HardwareButtonInfo::__cordl_internal_get__excludeFromPolling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeFromPolling;
}
constexpr void Rewired::Data::Mapping::HardwareButtonInfo::__cordl_internal_set__excludeFromPolling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____excludeFromPolling = value;
}
constexpr bool& Rewired::Data::Mapping::HardwareButtonInfo::__cordl_internal_get__isPressureSensitive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPressureSensitive;
}
constexpr bool const& Rewired::Data::Mapping::HardwareButtonInfo::__cordl_internal_get__isPressureSensitive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPressureSensitive;
}
constexpr void Rewired::Data::Mapping::HardwareButtonInfo::__cordl_internal_set__isPressureSensitive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPressureSensitive = value;
}
inline bool Rewired::Data::Mapping::HardwareButtonInfo::get_excludeFromPolling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {"get_excludeFromPolling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::HardwareButtonInfo::get_isPressureSensitive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {"get_isPressureSensitive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareButtonInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareButtonInfo::_ctor(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::System::Object* Rewired::Data::Mapping::HardwareButtonInfo::DeepClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareButtonInfo*>(),
                        {"DeepClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareButtonInfo* Rewired::Data::Mapping::HardwareButtonInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareButtonInfo*>());
}
inline ::Rewired::Data::Mapping::HardwareButtonInfo* Rewired::Data::Mapping::HardwareButtonInfo::New_ctor(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareButtonInfo*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr  Rewired::Data::Mapping::HardwareButtonInfo::operator ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* Rewired::Data::Mapping::HardwareButtonInfo::i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareButtonInfo::HardwareButtonInfo()   {
}
