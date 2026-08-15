#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementTargetSetForBoolean.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSet_impl.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSetForBoolean_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTarget_def.hpp"
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean.get_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTarget* (::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::get_target)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                        {"get_target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean.get_targetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::get_targetCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTarget* (::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::*)(int32_t)>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181806fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818f00e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::*)(::Rewired::ComponentControls::Data::CustomControllerElementTarget*)>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818efff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean.ClearElementCaches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::ClearElementCaches)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818effd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget*& Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget* const& Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::__cordl_internal_set__target(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::get_target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                        {"get_target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(this, ___internal_method);
}
inline int32_t Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::get_targetCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>(this, ___internal_method, index);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::_ctor(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::ClearElementCaches()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>());
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::New_ctor(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean::CustomControllerElementTargetSetForBoolean()   {
}
