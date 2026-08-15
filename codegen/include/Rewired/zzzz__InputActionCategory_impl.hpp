#pragma once
// IWYU pragma private; include "Rewired/InputActionCategory.hpp"
#include "Rewired/zzzz__InputCategory_impl.hpp"
#include "Rewired/zzzz__InputActionCategory_def.hpp"
//  Writing Method size for method: ::Rewired::InputActionCategory.get_keyCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputActionCategory::*)()>(&::Rewired::InputActionCategory::get_keyCategory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819a34a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputActionCategory*>(),
                    {::i2c::class_of<::Rewired::InputActionCategory*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputActionCategory::*)()>(&::Rewired::InputActionCategory::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionCategory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputActionCategory::*)(::Rewired::InputActionCategory*)>(&::Rewired::InputActionCategory::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819a3420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputActionCategory*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Rewired::InputActionCategory::get_keyCategory()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputActionCategory*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::InputActionCategory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionCategory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputActionCategory::_ctor(::Rewired::InputActionCategory*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputActionCategory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputActionCategory* Rewired::InputActionCategory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputActionCategory*>());
}
inline ::Rewired::InputActionCategory* Rewired::InputActionCategory::New_ctor(::Rewired::InputActionCategory*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputActionCategory*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputActionCategory::InputActionCategory()   {
}
